#include <stdio.h>

int g_int = 123; //defining declaration

void fun();

//��� �Լ��� ������ extern�̴� (��� �Լ��� extern�� �����Ǿ� �ִ�)
extern void fun_second();

//static���� �Լ� �ȿ����� ����� �� �ְ� �߱� ������ ���Ұ�
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
	//����(�ٸ�) ������ ���������� �ȿ��� ����ϰ� ���� �� ���
	extern int g_int;

	g_int += 1;
	printf("g_int int fun() %d %p\n", g_int, &g_int);
}