#include <stdio.h>


int main()
{	
	//a만 포인트변수고 b는 int변수임
	//int *a, b;
	
	//c만 포인트변수고 d는 int변수임
	//int* c, d; 
	
	int tmp = 1;

	//둘다 포인트 변수로 선언하는 방법 1
	int *a, *b;
	a = &tmp;
	b = &tmp;
	printf("%p %p\n", a, b);

	//둘다 포인트 변수로 선언하는 방법 2
	int* c, * d;
	c = &tmp;
	d = &tmp;
	printf("%p %p\n", c, d);









	return 0;
}