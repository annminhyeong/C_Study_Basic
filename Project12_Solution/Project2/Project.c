#include <stdio.h>


//file scope
int g_i = 123;
int g_j; //���������� �ʱ�ȭ ���ص� �ڵ����� 0���� �ʱ�ȭ��

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