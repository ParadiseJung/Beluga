#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaStringTest, "Beluga.String", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaStringTest::RunTest(const FString& Parameters)
{
	TestTrue(TEXT("Always FAIL!", false));
	// 생성, 대입
	{
		FString strChar("Char");
		FString strWChar(L"WChar");
		FString strTChar(TEXT("TChar"));

		strChar = "Char";
		strWChar = "WChar";
		strTChar = TEXT("TChar");
	}
	// Printf
	{
		TestEqual(TEXT("Print"), FString::Printf(Text("%d %f %s"), 123, 1.0f, TEXT("String")), TEXT("123, 1.000000 String"));
	}
	// Format
	{
		// NameArguments
		{
			FStringFormatNamedArguments NamedArgs;
			NamedArgs.Add(TEXT("Fisrt"), 123);
			NamedArgs.Add(TEXT("Second"), 1.0f);
			NamedArgs.Add(TEXT("Third"), TEXT("String"));

			TestEqual(TEXT("FormatNamedArguments"), FString::Format(TEXT("{First} {Second} {Third}"), NamedArgs), TEXT("123 1.000000 String"));
		}

		// OrderedArguments
		{
			FStringFormatOrderedArguments OrderedArgs;
			OrderedArgs.Add(123);
			OrderedArgs.Add(1.0f);
			OrderedArgs.Add(TEXT("String"));

			TestEqual(TEXT("FormatOrderedArguments"), FString::Format(TEXT("{0} {1} {2}"), OrderedArgs), TEXT("123 1.000000 String"));
		}
	}

	// Operators
	{
		FString strApple(TEXT("Apple"));
		FString strBanana(TEXT("Banana"));

		// []
		{
			TestEqual(TEXT("Operator []"), strApple[0], L'A')
		}

		// < >
		{
			TestEqual(TEXT("Operator <"), strApple < strBanana);
		}
	}

	// 길이 구하기
	{
		FString str(TEXT("str"));
		int32 LenStr = str.Len();

		check(LenStr == 3);
	}

	// Replace
	{
		FString str(TEXT("QWER"));
		FString result = str.Replace(TEXT("WE"), TEXT("EW"));

		check(result == TEXT("QEWR"));
	}

	// RemoveAt
	{
		FString str(TEXT("TEXT"));
		str.RemoveAt(0,1);

		check(str == TEXT("EXT"));
	}

	// Left
	{
		FString str(TEXT("qwertyuiop"));
		FString out = str.Left(4);

		check(out == TEXT("qwer"));
	}

	// Right
	{
		FString str (TEXT("qwertyuiop"));
		FString out = str.right(4);

		check(out == TEXT("uiop"));
	}
}