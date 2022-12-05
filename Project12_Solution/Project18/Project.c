#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "constants.h"

//const double PI = 3.14;
//const double grapvity = 9.8;

int main()
{	
	double area_circle = PI * 2.0f * 2.0f;


	//������ : const, volatile, restict, _Atomic

	//C99 : const ������ ����
	const const const int n = 6; //const n = 6;

	//typedef : ����� Ÿ��, const int�� zip��� Ÿ������ ����
	typedef const int zip;
	const zip  q = 8;

	//const int i;
	//i = 12; //error
	//printf("%d\n", i);

	const int j = 123;
	const int arr[] = { 1, 2, 3 };
	
	float f1 = 3.14f, f2 = 1.2f;

	//������ �ּ� �ٲ� �� ����, �����Ͱ� ����Ű�� �� ���� �Ұ���
	const float* pf1 = &f1;
	//*pf1 = 5.0f; //error
	pf1 = &f2;

	//������ �ּ� �ٲ� �� ����, �����Ͱ� ����Ű�� �� ���� ����
	float* const pf2 = &f1;
	*pf2 = 6.0f;
	//pf2 = &f2; //error

	//������ �ּ� �ٲ� �� ����, �����Ͱ� ����Ű�� �� ���� �Ұ���
	const float* const pf3 = &f1;
	//*pf3 = 6.0f; //error
	//pf3 = &f2; //error



	//volatile : �����Ϸ��� �� �� ���� ������ ���ؼ� ���� ���� �� �ִ� ����
	volatile int vi = 1;
	volatile int* pvi = &vi;

	int i1 = vi;

	//...

	int i2 = vi;


	//restrict : ������ ��ü�� �����ϴ� ���� �ϳ����̶�� �����
	int ar[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* par = ar;

	//__restrict : �� ������ ���� �ϳ��� �� �����޸𸮿� �����Ѵٴ� �ǹ���
	int* __restrict restar = (int*)malloc(10 * sizeof(int));
	if (!restar) exit(1);

	//par[0] += 8;
	ar[0] += 3;
	par[0] += 5;

	//restar[0] += 8;
	restar[0] += 3;
	restar[0] += 5;




	return 0;
}