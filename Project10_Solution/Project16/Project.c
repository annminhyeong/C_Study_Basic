#include <stdio.h>

#define COLS 4

int sum_1d(int arr[], int n);
//배열의 맨 왼쪽 인덱스는 생략가능
int sum_2d(int arr[][COLS], int rows);

int main()
{	
	int a = 1;
	3; //compound literal
	3.14f; //compound literal

	int b[2] = { 3, 4 };
	(int[2]) { 3, 4 }; //compound literal

	//int c[2] = (int[2]){ 3, 4 }; //error


	int arr1[2] = { 1, 2 };
	int arr2[2][COLS] = { {1, 2, 3, 4}, {5, 6, 7, 8} };

	printf("%d\n", sum_1d(arr1, 2));
	printf("%d\n", sum_2d(arr2, 2));
	printf("\n");

	//이름이 없는 리터럴로 배열 생성
	printf("%d\n", sum_1d((int[2]) { 1, 2 }, 2));
	printf("%d\n", sum_2d((int[2][COLS]) { {1, 2, 3, 4}, { 5, 6, 7, 8 } }, 2));
	printf("\n");


	int* ptr1;
	int(*ptr2)[COLS]; //COLS 크기 만큼 원소를 갖는 배열에 대한 포인터

	ptr1 = (int[2]){ 1, 2 };
	ptr2 = (int[2][COLS]){ {1, 2, 3, 4}, { 5, 6, 7, 8 } };

	printf("%d\n", sum_1d(ptr1, 2));
	printf("%d\n", sum_2d(ptr2, 2));
	printf("\n");


	return 0;
}

int sum_1d(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; ++i)
		total += arr[i];
	return total;
}

int sum_2d(int arr[][COLS], int rows)
{
	int total = 0;
	for (int r = 0; r < rows; r++)
		for (int c = 0; c < COLS; c++)
			total += arr[r][c];
	return total;
}