#include <stdio.h>
#include <stdlib.h>
#include <string.h> //memcpy(), memmove()

#define LEN 6

void prt(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{	
	int arr1[LEN] = { 1, 3, 5, 7, 9, 11 };
	//int arr2[LEN] = { 0, };

	int* arr2 = (int*)malloc(LEN * sizeof(int));
	if (arr2 == NULL) exit(1);

	//for (int i = 0; i < LEN; ++i)
	//	arr2[i] = arr1[i];

	memcpy(arr2, arr1, sizeof(int) * LEN);
	prt(arr2, LEN);

	/*
		{ 1, 3, 5, 7, 9, 11 }
		{ 5, 7, 9, 11, 9, 11 }
	*/

	//undefined behavior : 메모리 복사할때 곂치는 부분 있으면 문제가 생길 수 있음
	//memcpy(arr1, &arr1[2], sizeof(int) * 4); 
	memmove(arr1, &arr1[2], sizeof(int) * 4);
	prt(arr1, LEN);


	return 0;
}