#include <stdio.h>

int g_int = 123; //defining declaration

//�ٸ����Ͽ��� ������� ���ϰ� �ҷ��� static Ű���� ���̱�
//static int g_int = 123;

void fun();

//�Լ����� �ص� �����Ϸ��� �ٸ� ������ �Լ��� ������
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
	//����(�ٸ�) ������ ���������� �ȿ��� ����ϰ� ���� �� ���
	extern int g_int;

	g_int += 1;
	printf("g_int int fun() %d %p\n", g_int, &g_int);
}