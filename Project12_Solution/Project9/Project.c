#include <stdio.h>

//extern�� ���� �������� ��ġ�ϸ� ���� �ʱ�ȭ ���� (extern�� �پ� �ִ� �������� �ʱ�ȭ �ϴ°� ���� ����)
//�� extern�ϴ� ���� extern ���ϴ� ��� �� �� �ϳ��� �ʱ�ȭ�ϰ� �ִٸ� �ٸ� �������� �ʱ�ȭ �Ұ���
int g_int;
double g_arr[1000];

int x = 5;
int y = 1 + 2;
size_t z = sizeof(int);

//���������� ���� ���Ұ�
//int x2 = 2 * x;

void fun()
{
	printf("g_int in fun() %d %p\n", g_int, &g_int);
	g_int += 10;
}

//�Լ� ���� ���ָ� �����Ϸ��� �ٸ����Ͽ� �ִ� �Լ��� ã����
void fun_sec();

int main()
{	
	//extern : ����(�ٸ�) ������ ���������� �ȿ��� ����ϰ� ���� �� ���

	//extern : ������ �ٱ� ���� ������ ����� �� ����
	//extern int g_int;
	
	//���� : extern�� ��� �������� ��ġ�ϸ� ���� �ʱ�ȭ �Ұ�����
	//extern int g_int = 1024;
	
	//int g_int = 123;

	
	//�迭���� ��� extern�� �� ��� �迭������ �ʿ� ���� (������� ������ �����Ǿ����Ƿ�)
	extern double g_arr[];

	printf("g_int in main() %d %p\n", g_int, &g_int);
	g_int += 1;
	fun();
	fun_sec();

	return 0;
}