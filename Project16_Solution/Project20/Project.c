#include <stdio.h>
#include <assert.h>


int divide(int a, int b);

int main()
{	
	int a, b;
	int f = scanf("%d%d", &a, &b);

	printf("a / b = %d", divide(a, b));
	return 0;
}

int divide(int a, int b)
{
	//반드시 만족해야하는 조건
	//만족하지 못하면 디버그 모드에서 문제 발생함 (릴리즈 모드에서는 문제 발생 X)
	assert(b != 0);
	return a / b;
}