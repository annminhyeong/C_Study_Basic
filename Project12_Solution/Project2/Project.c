#include <stdio.h>


//file scope
int g_i = 123;
int g_j; //전역변수는 초기화 안해도 자동으로 0으로 초기화됨

void func1()
{
	g_i++;
}

void func2()
{
	g_i += 2;
}

int main()
{	
	int local = 1234;

	func1();
	func2();

	printf("%d\n", g_i);
	printf("%d\n", g_j);
	printf("%d\n", local);

	return 0;
}