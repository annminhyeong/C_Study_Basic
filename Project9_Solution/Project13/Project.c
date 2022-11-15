#include <stdio.h>


int main()
{	
	//int a = 1234;
	//printf("%p\n", &a);
	//printf("%d\n", a);


	////포인트변수에 주소값1234를 대입함
	//int *ptr = 1234;
	//printf("%p\n", ptr);
	////주소값1234은 프로그램이 사용하도록 할당받은 공간이 아니므로 런타임 에러가 발생함
	//printf("%d\n", *ptr); 

	
	//int* safer_ptr;
	//
	//int a = 123;
	//
	//int b;
	//scanf("%d", &b);

	////이런경우 b값이 홀수 이면 포인터값이 초기화가 안된 상태가 됨
	//if (b % 2 == 0)
	//	safer_ptr = &a;


	//포인터변수를 초기화할 때 보통 NULL(0)를 사용
	int* safer_ptr = NULL;
	
	int a = 123;
	
	int b;
	scanf("%d", &b);

	//이런경우 b값이 홀수 이면 포인터값이 초기화가 안된 상태가 됨
	if (b % 2 == 0)
		safer_ptr = &a;

	if (safer_ptr != NULL)
		printf("%p\n", safer_ptr);
	if (safer_ptr != NULL)
		printf("%d\n", *safer_ptr);


	return 0;
}