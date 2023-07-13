#include "BelugaMinimal.h"
DEFINE_LOG_CATEGORY(LogBeluga);

bool isRabbit(FName Check) 
{
	static const FName Name_Rabbit = FName(TEXT("Rabbit"));
	return Check == Name_Rabbit;
}


class FBelugaModule : public FDefaultGameModuleImpl
{
public:
	virtual void StartupModule() override
	{
		FName test(TEXT("Rabbit"));
		bool bResult = isRabbit(test);

		UE_LOG(LogBeluga, Display, TEXT("Result: %i"), bResult);

		UE_LOG(LogBeluga, Display, TEXT("BelugaModule::StartupModule"));
	}
	virtual void ShutdownModule() override
	{
		UE_LOG(LogBeluga, Display, TEXT("BelugaModule::ShutdownModule"));
	}
};

IMPLEMENT_PRIMARY_GAME_MODULE(FBelugaModule, Beluga, "Beluga");