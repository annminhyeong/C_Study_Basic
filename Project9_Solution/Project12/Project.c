#include <stdio.h>


int main()
{	
	//a�� ����Ʈ������ b�� int������
	//int *a, b;
	
	//c�� ����Ʈ������ d�� int������
	//int* c, d; 
	
	int tmp = 1;

	//�Ѵ� ����Ʈ ������ �����ϴ� ��� 1
	int *a, *b;
	a = &tmp;
	b = &tmp;
	printf("%p %p\n", a, b);

	//�Ѵ� ����Ʈ ������ �����ϴ� ��� 2
	int* c, * d;
	c = &tmp;
	d = &tmp;
	printf("%p %p\n", c, d);









	return 0;
}