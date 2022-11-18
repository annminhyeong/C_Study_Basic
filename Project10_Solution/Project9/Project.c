#include <stdio.h>


int main()
{	
	const double PI = 3.14159;
	//PI = 2.14159;

	const int arr[5] = { 1, 2, 3, 4, 5 };
	//arr[1] = 123;

	const double arr2[4] = { 1.0, 2.0, 3.0, 4.0 };
	//arr2[0] = 100.0;


	//const가 왼쪽에 있으면 포인터가 가리키고 있는 값을 변경하지 못하고
	//const가 오른쪽에 있으면 포인터의 주소값을 변경하지 못한다.
	const double* const pd = arr2;
	
	//*pd = 3.0; //pd[0] = 3.0, arr2[0] = 3.0
	
	//포인터변수는 배열처럼 사용가능
	//pd[2] = 1024.0; //arr[2] = 1024.0;
	
	printf("%f %f\n", pd[2], arr2[2]);
	
	//포인터 변수가 가르키는 값은 바꿀 수 없지만
	//포인터변수의 주소값은 바꿀 수 있다
	//pd++;

	printf("%f %f\n", pd[2], arr2[2]);


	return 0;
}