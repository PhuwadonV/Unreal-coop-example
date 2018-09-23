#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ServerGameMode.generated.h"

UCLASS()
class EXTENDBLUEPRINT_API AServerGameMode : public AGameModeBase {
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Networking")
	static bool GetIp(int &Out1, int &Out2, int &Out3, int &Out4);

	UFUNCTION(BlueprintCallable, Category = "Networking")
	virtual bool ServerTravel(const FString &URL, bool Absolute, bool ShouldSkipGameNotify);

	UFUNCTION(BlueprintCallable, Category = "File")
	virtual bool SaveStringToFile(const FString & String, const FString & Filename);
};