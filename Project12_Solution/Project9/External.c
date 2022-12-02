#include <stdio.h>

//extern는 파일 스코프에 위치하면 변수 초기화 가능 (extern이 붙어 있는 곳에서는 초기화 하는것 권장 안함)
//단 extern하는 대상과 extern 당하는 대상 둘 중 하나가 초기화하고 있다면 다른 곳에서는 초기화 불가능

//다른파일의 전역변수 사용 방법1 : 전역변수로 extern 하기
//extern int g_int;

void temp()
{
	//extern는 블록 스코프의 위치하면 변수 초기화 불가능함
	//다른파일의 전역변수 사용 방법2 : 지역변수로 extern 하기
	extern int g_int;
	g_int += 1000;
}

void fun_sec()
{
	//extern는 블록 스코프의 위치하면 변수 초기화 불가능함
	//다른파일의 전역변수 사용 방법2 : 지역변수로 extern 하기
	extern int g_int;
	temp();
	g_int += 7;
	printf("g_int in fun_sec() %d %p\n", g_int, &g_int);
}

