#include <stdio.h>


void func(int k);

int main()
{	
	//auto : 자동변수 선언할 때 사용 (스택 메모리에 저장됨), 지역변수와 같음
	auto int a; 
	a = 1024;

	printf("%d\n", a);

	//자동변수(지역변수)는 꼭 초기화 해줘야 함
	auto int b = a * 3;

	auto int i = 1;
	int j = 2;
	
	printf("i %lld\n", (long long)&i);

	{
		int i = 3;
		printf("i %lld\n", (long long)&i);
		printf("j = %d\n", j);
	}

	printf("i %lld\n", (long long)&i);

	
	for (int m = 1; m < 2; m++)
		printf("m %lld\n", (long long)&m);

	func(5);
	
	for (int m = 3; m < 4; m++)
	{
		printf("m %lld\n", (long long)&m);
	}


	return 0;
}

void func(int k)
{
	int i = k * 2;
	printf("i %lld\n", (long long)&i);
}