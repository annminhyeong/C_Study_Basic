#include <stdio.h>

int g_int = 123; //defining declaration

//다른파일에서 사용하지 못하게 할려면 static 키워드 붙이기
//static int g_int = 123;

void fun();

//함수선언만 해도 컴파일러가 다른 파일의 함수를 가져옴
void fun_second();
void fun_third();

int main()
{	
	fun();
	fun_second();
	fun_third();

	return 0;
}

void fun()
{
	//현재(다른) 파일의 전역변수를 안에서 사용하고 싶을 때 사용
	extern int g_int;

	g_int += 1;
	printf("g_int int fun() %d %p\n", g_int, &g_int);
}