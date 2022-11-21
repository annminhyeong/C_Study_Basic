#include <stdio.h>


int main()
{	
	//int n = 5;
	//double x;

	//x = n;
	//int* p1 = &n;
	//double* pd = &x;

	////warning : 포인터 타입 안맞음, 포인터타입을 형변환 해줘야함
	////pd = p1;
	//
	//int* pt;
	//int(*pa)[3]; //3개의 원소를 가진 배열에 대한 포인터
	//
	//int ar1[2][3] = { 3, };
	//int ar2[3][2] = { 7, };

	//int** p2;

	//pt = &ar1[0][0];
	//pt = ar1[0];

	////warning (error) : ar1은 이차원배열이기 때문에 그냥 포인터에는 담을 수 없음
	////pt = ar1;

	//pa = ar1; //원소가 3개짜리인 배열이므로 가능
	////warning (error) :원소가 2개이므로 warning
	////pa = ar2;

	//p2 = &pt;
	//*p2 = ar2[0];
	////warning(error) : p2는 int 포인터에 대한 포인터임,
	////ar2는 2개의 int를 가진 가진 배열에 대한 포인터이므로 안됨
	////p2 = ar2;


	int x = 20;
	const int y = 23;
	int* p1 = &x;
	const int* p2 = &y;
	const int** pp2 = &p1;
	
	//warning (error) : p1을 통해서 p2가 가르키는 값(const int y)을 변경할 수 있기 때문에 권장 안함
	//p1 = p2;

	//error : 포인터에 저장된 값이 가르키는 값 수정 불가능
	//*p2 = 123; 

	//주소값 변경 가능
	p2 = p1;

	int x2 = 30;
	int* p3 = &x2;
	*pp2 = &p3;
	pp2 = &p1;

	//const int** pp2;
	//int* p1;
	//const int n = 13;
	//pp2 = &p1;
	//*pp2 = &n;
	//*p1 = 10;


	return 0;
}