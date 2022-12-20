#include <stdio.h>


int iamfunction()
{
	return 0;
}

extern int a;
//int a = 123; //다른파일에 똑같은 변수명 있어서 에러

int main()
{	
	int myname = 123;
	
	{
		int myname = 345;
		//double myname = 3.14; //error
	}

	struct rect { double x; double y; };

	//int rect = 123; // OK in c (Not OK in C++)
	//struct rect rect = { 1.1, 2.2 };

	//typedef struct rect rect;
	//rect rect = { 1.1, 2.2 }; //Not OK

	//int iamfunction = iamfunction(); //error

	printf("%d\n", a);

	return 0;
}