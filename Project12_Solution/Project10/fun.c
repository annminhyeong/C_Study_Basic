#include <stdio.h>

extern int g_int; //referencing declaration

//�Լ��� ������Ÿ�Կ��� static�� �ٿ��� �� ���Ͽ����� �Լ��� ��� �� �� ����
//static void fun_second();



//�Լ��� static�� ���̸� �� ���Ͽ����� �Լ��� ����� �� ����
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