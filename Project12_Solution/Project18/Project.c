#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "constants.h"

//const double PI = 3.14;
//const double grapvity = 9.8;

int main()
{	
	double area_circle = PI * 2.0f * 2.0f;


	//한정자 : const, volatile, restict, _Atomic

	//C99 : const 여러번 가능
	const const const int n = 6; //const n = 6;

	//typedef : 사용자 타입, const int를 zip라는 타입으로 정의
	typedef const int zip;
	const zip  q = 8;

	//const int i;
	//i = 12; //error
	//printf("%d\n", i);

	const int j = 123;
	const int arr[] = { 1, 2, 3 };
	
	float f1 = 3.14f, f2 = 1.2f;

	//포인터 주소 바꿀 수 있음, 포인터가 가리키는 값 수정 불가능
	const float* pf1 = &f1;
	//*pf1 = 5.0f; //error
	pf1 = &f2;

	//포인터 주소 바꿀 수 없음, 포인터가 가리키는 값 수정 가능
	float* const pf2 = &f1;
	*pf2 = 6.0f;
	//pf2 = &f2; //error

	//포인터 주소 바꿀 수 없음, 포인터가 가리키는 값 수정 불가능
	const float* const pf3 = &f1;
	//*pf3 = 6.0f; //error
	//pf3 = &f2; //error



	//volatile : 컴파일러가 알 수 없는 이유에 의해서 값이 변할 수 있는 변수
	volatile int vi = 1;
	volatile int* pvi = &vi;

	int i1 = vi;

	//...

	int i2 = vi;


	//restrict : 데이터 객체에 접근하는 것이 하나뿐이라고 명시함
	int ar[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* par = ar;

	//__restrict : 이 포인터 변수 하나만 이 동적메모리에 접근한다는 의미임
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