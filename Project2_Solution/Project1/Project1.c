#include<stdio.h>

//함수 선언부를 위쪽에 쓰면 아래쪽에 함수를 사용할 수 있음
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