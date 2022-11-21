#include <stdio.h>


int main()
{	
	//int arr0[3] = { 1, 2, 3 };
	//int arr1[3] = { 4, 5, 6 };

	////parr은 포인터배열임 포인터 배열에는 각 배열의 주소값이 담겨있음
	//int* parr[2] = { arr0, arr1 };

	//for (int j = 0; j < 2; ++j)
	//{
	//	for (int i = 0; i < 3; ++i)
	//		//parr에 각 배열의 주소값이 있으므로 parr에 * 를 붙여서 각각의 배열에 접근한다.
	//		printf("%d=(==%d, %d, %d) ", parr[j][i], *(parr[j] + i), *(*(parr + j) + i), (*(parr + j))[i]);
	//	printf("\n");
	//}
	//printf("\n");



	//int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	//int* parr0 = arr[0];
	//int* parr1 = arr[1];

	//for (int i = 0; i < 3; ++i)
	//	printf("%d ", parr0[i]);
	//printf("\n");

	//for (int i = 0; i < 3; ++i)
	//	printf("%d ", parr1[i]);
	//printf("\n");



	//int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	//
	//int* parr[2];
	//parr[0] = arr[0];
	//parr[1] = arr[1];

	//for (int j = 0; j < 2; ++j)
	//{
	//	for (int i = 0; i < 3; ++i)
	//		//parr에 값으로 저장되어 있는 행 주소값에 접근하기 위해 * 붙임
	//		printf("%d %d %d %d\n", arr[j][i], parr[j][i], *(parr[j] + i), *(*(parr + j) + i));
	//	printf("\n");
	//}
	//printf("\n");


	///* Note */
	//printf("%p\n", &parr[0]); //포인터 배열 자체 인덱스 0번의 주소값임
	//printf("%p\n", parr[0]); //포인터 배열 0번 인덱스에 저장되어 있는 값(2차원배열의 0번 인덱스 주소값)임
	//printf("%p\n", arr); //첫번째 배열의 주소값
	//printf("%p\n", &arr[0]); //첫번째 배열의 주소값
	//printf("%p\n", arr[0]); //2차원 배열이므로 첫번째 행의 주소값임
	//printf("%p\n", &arr[0][0]); //첫번째 배열의 주소값은 첫번째 행의 주소값과 같음


	//문자열배열을 char 타입의 포인터 배열에 저장함
	char* name[] = { "Aladdin", "Jasmine", "Magic Carpet", "Genie" };
	const int n = sizeof(name) / sizeof(char*);

	for (int i = 0; i < n; ++i)
		//문자열 배열의 크기가 다르므로 운영체제와 컴파일러가 알아서 메모리 공간을 할당함
		printf("%s at %u\n", name[i], (unsigned long long)name[i]);
	printf("\n");

	//문자열배열을 2차원 배열에 저장함
	char aname[][15] = {"Aladdin", "Jasmine", "Magic Carpet", "Genie"};
	const int an = sizeof(aname) / sizeof(char[15]);

	for (int i = 0; i < an; ++i)
		//문자열 배열의 크기가 15로 고정되있어서 연속적인 메모리 공간에 할당됨
		printf("%s at %u\n", aname[i], (unsigned long long)& aname[i]);
	printf("\n");



	return 0;
}