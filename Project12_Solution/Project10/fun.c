#include <stdio.h>

extern int g_int; //referencing declaration

//함수의 프로토타입에만 static을 붙여도 이 파일에서만 함수를 사용 할 수 있음
//static void fun_second();



//함수에 static을 붙이면 이 파일에서만 함수를 사용할 수 있음
static void tool()
{
	//do something
}


void fun_second()
{
	tool();
	g_int += 1;
	printf("g_int int fun_second() %d %p\n", g_int, &g_int);
}