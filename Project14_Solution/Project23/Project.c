#include <stdio.h>
#include <ctype.h>


void ToUpper(char* str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}

void ToLower(char* str)
{
	while (*str)
	{
		*str = tolower(*str);
		str++;
	}
}

void UpdateString(char* str, int(*pf)(int))
{
	while (*str)
	{
		*str = (*pf)(*str);
		str++;
	}
}

int main()
{	
	char str[] = "Hello world!";

	//함수포인터 선언
	void (*pf)(char*);

	
	pf = ToUpper;
	//pf = &ToUpper; //acceptable
	//pf = ToUpper(str); //not acceptable in C

	//텍스트 세그먼트 메모리에 저장됨
	printf("String literal %lld\n", (long long)("Hello world!"));
	printf("Function pointer %lld\n", (long long)ToUpper);

	//스택 메모리에 저장됨
	printf("Variable %lld\n", (long long)str);

	(*pf)(str);
	//pf(str); //K&C X, ANSI OK

	printf("ToUpper %s\n", str);

	pf = ToLower;
	pf(str);
	printf("ToLower %s\n", str);


	UpdateString(str, toupper);
	printf("ToUpper %s\n", str);

	UpdateString(str, tolower);
	printf("ToLower %s\n", str);

	return 0;
}