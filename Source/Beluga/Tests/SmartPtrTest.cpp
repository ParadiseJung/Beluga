#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaSharedPtrTest, "Beluga.SharedPtr", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaSharedPtrTest::RunTest(const FString& Parameters) 
{
	TSharedPtr<int32> splnt1 = MakeShareable<int32>(new int32(1));
	TSharedPtr<int32> splnt2 = MakeShared<int32>(2);

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaSharedRefTest, "Beluga.Sharedptr", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaSharedRefTest::RunTest(const FString& Parameters) 
{

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaWeakPtrTest, "Beluga.Sharedptr", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaWeakPtrTest::RunTest(const FString& Parameters)
{

	return true;
}