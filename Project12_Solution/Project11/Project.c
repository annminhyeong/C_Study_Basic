#include <stdio.h>

int g_int = 123; //defining declaration

void fun();

//모든 함수의 선언은 extern이다 (모든 함수는 extern이 생략되어 있다)
extern void fun_second();

//static으로 함수 안에서만 사용할 수 있게 했기 때문에 사용불가
//extern void tool();

int main()
{
	fun();
	fun_second();
	
	//tool();

	return 0;
}

void fun()
{
	//현재(다른) 파일의 전역변수를 안에서 사용하고 싶을 때 사용
	extern int g_int;

	g_int += 1;
	printf("g_int int fun() %d %p\n", g_int, &g_int);
}