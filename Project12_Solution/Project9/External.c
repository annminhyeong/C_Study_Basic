#include <stdio.h>

//extern�� ���� �������� ��ġ�ϸ� ���� �ʱ�ȭ ���� (extern�� �پ� �ִ� �������� �ʱ�ȭ �ϴ°� ���� ����)
//�� extern�ϴ� ���� extern ���ϴ� ��� �� �� �ϳ��� �ʱ�ȭ�ϰ� �ִٸ� �ٸ� �������� �ʱ�ȭ �Ұ���

//�ٸ������� �������� ��� ���1 : ���������� extern �ϱ�
//extern int g_int;

void temp()
{
	//extern�� ��� �������� ��ġ�ϸ� ���� �ʱ�ȭ �Ұ�����
	//�ٸ������� �������� ��� ���2 : ���������� extern �ϱ�
	extern int g_int;
	g_int += 1000;
}

void fun_sec()
{
	//extern�� ��� �������� ��ġ�ϸ� ���� �ʱ�ȭ �Ұ�����
	//�ٸ������� �������� ��� ���2 : ���������� extern �ϱ�
	extern int g_int;
	temp();
	g_int += 7;
	printf("g_int in fun_sec() %d %p\n", g_int, &g_int);
}

