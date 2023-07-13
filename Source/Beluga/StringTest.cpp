#include "BelugaMinimal.h"

void StringTest() 
{
	// 생성
	{
		// char "asdf"
		FString strChar("char");
		// wchar L "asdf"
		FString strWChar(L"wchar");
		// tchar TEXT("asdf")
		FString strTChar(TEXT("wchar"));

	}
	// 대입 연산자 *

	// Printf
	
	// Format
	{
		// FStringFormatNamedArguments
		

		// FStringFormatOrderedArguments
		
	}
	
	// operator []

	// 대소비교

	// TCHAR* 얻기

	// operator*

	// 길이구하기
	{
		FString str(TEXT("str"));
		int32 LenStr = str.Len();

		check(LenStr == 3);
	}

	// Replace
	{
		FString str(TEXT("asdf"));
		FString result = str.Replace(TEXT("sd"), TEXT("ds"));

		check(result == TEXT("adsf"));
	}

	// InsertAt
	{
		FString str(TEXT("TEXT"));

	}

	// clear

	// isEmpty

	// Shrink

	// RemoveAt
	{
		FString str(TEXT("TEXT"));
		str.RemoveAt(0, 1); // n+1번 째 칸에서 n칸 만큼 글자 삭제

		check(str == TEXT("EXT"));
	}

	// Left
	{
		FString str(TEXT("qwertyuiop"));
		FString out = str.Left(4);

		check(out == TEXT("qwer"));
	}
	// Mid
	{

	}
	// Right
	{
		FString str(TEXT("qwertyuiop"));
		FString out = str.Right(4);

		check(out == TEXT("uiop"));
	}


	// 대문자로 변환, 소문자로 변환

	//
}