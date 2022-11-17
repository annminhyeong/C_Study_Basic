#include <stdio.h>


int main()
{	
	int arr[2][3] = { {1, 2, 3},
					  {4, 5, 6} };

	//메모리는 1차원으로 저장하기 때문에 2차원 배열을 1차원 배열처럼 초기화가능 
	//int arr[2][3] = { 1, 2, 3, 4, 5, 6 };

	//초기화 되지 않는 값들은 0으로 채워짐
	//int arr[2][3] = { 1, 2 };

	printf("%d\n\n", arr[1][1]);

	for (int j = 0; j < 2; ++j)
	{
		for (int i = 0; i < 3; ++i)
			printf("%d ", arr[j][i]);
		printf("\n");
	}
	printf("\n");

	
	int* ptr = &arr[0][0];
	for (int k = 0; k < 6; ++k)
		//배열의 주소에 대괄호를 붙이면 해당 주소에 있는 값 접근 가능
		printf("%d ", ptr[k]);
	printf("\n\n");


	//printf("%zd %zd\n", sizeof(arr), sizeof(arr[0]));
	//printf("\n");



	//0은 8진수, 0x는 16진수임
	int arr_3d[2][3][4] =
	{
		{
			{000, 001, 002, 003},
			{010, 011, 012, 013},
			{020, 021, 022, 023},
		},
		{
			{100, 101, 102, 103},
			{110, 111, 112, 113},
			{120, 121, 122, 123},
		}
	};


	for (int k = 0; k < 2; ++k)
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int i = 0; i < 4; ++i)
				printf("%d ", arr_3d[k][j][i]);
			printf("\n");
		}
		printf("\n");
	}


	return 0;
}