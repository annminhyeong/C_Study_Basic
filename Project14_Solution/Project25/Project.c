#include <stdio.h>


int temp(int a)
{
	return 0;
}


int (*g(int a))(int)
{
	return temp;
}


int main()
{
	//복잡한 선언 해석하는 요령
	//1. 이름을 찾는다
	//2. 안쪽에서 부터 바깥쪽으로 읽기
	//3. []와 ()가 *()보다 우선순위가 높다

	int* ap[10];

	typedef int* pint;
	pint ap2[10];

	float* fp(float);
	
	typedef float* pfloat;
	pfloat fp2(float);

	void(*pf)(int);

	int* (*x[10])(void);


	int(*f(int))[];

	int* (*x2[10])(int);

	return 0;
}