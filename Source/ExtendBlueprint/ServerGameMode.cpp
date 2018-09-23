#include "ServerGameMode.h"
#include <SocketSubsystem.h>
#include <IPAddress.h>
#include <FileHelper.h>

bool AServerGameMode::GetIp(int &Out1, int &Out2, int &Out3, int &Out4) {
	bool canBind = false;
	TSharedRef<FInternetAddr> internetAddr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, canBind);
	if (!canBind) return false;
	uint32 ip;
	internetAddr->GetIp(ip);
	Out1 = (ip & 0xFF000000) >> 24;
	Out2 = (ip & 0x00FF0000) >> 16;
	Out3 = (ip & 0x0000FF00) >> 8;
	Out4 = (ip & 0x000000FF);
	return true;
}

bool AServerGameMode::ServerTravel(const FString &URL, bool Absolute, bool ShouldSkipGameNotify) {
	return Super::GetWorld()->ServerTravel(URL, Absolute, ShouldSkipGameNotify);
}

bool AServerGameMode::SaveStringToFile(const FString & String, const FString & Filename) {
	return FFileHelper::SaveStringToFile(String, *Filename);
}