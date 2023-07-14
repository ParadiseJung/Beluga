#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaArrayTest, "Beluga.Array", \
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

	bool FBelugaArrayTest::RunTest(const FString& Parameters)
{
	TArray<int32> arr = { 1, 2, 3 };

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaMapTest, "Beluga.Map", \
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

	bool FBelugaMapTest::RunTest(const FString& Parameters)
{
	TMap<FName, FString> map = { {TEXT("A"), TEXT("Apple")}, { TEXT("B"), TEXT("Banana") }, { TEXT("C"), TEXT("Cherry") } };

	FString map1 = map["A"];
	FString map2 = map["B"];
	FString map3 = map["C"];

	TestEqual(TEXT("map1 check"), map1, TEXT("Apple"));
	TestEqual(TEXT("map2 check"), map2, TEXT("Banana"));
	TestEqual(TEXT("map3 check"), map3, TEXT("Cherry"));

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaSetTest, "Beluga.Set", \
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

	bool FBelugaSetTest::RunTest(const FString& Parameters)
{
	TSet<FString> set = { TEXT("Diamond"), TEXT("Ruby"), TEXT("AquaMarine") };

	return true;
}