#include<stdio.h>

//�Լ� ����θ� ���ʿ� ���� �Ʒ��ʿ� �Լ��� ����� �� ����
void say_hello(void);

int main() 
{	
	int x, y, z;
	x = 1;
	y = 20;
	z = 3;

	z = x + y;

	say_hello();
	
	return 0;
}

void say_hello()
{
	int x = 1;
	x = 10;
	printf("Hello World!\n");
}