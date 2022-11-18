#include <stdio.h>


//프로토타입에서 배열 선언 방법 4가지
//double average(double *arr, int n)
//double average(double *, int n)
//double average(double arr[], int n)
//double average(double [], int n)

double average(double [], int n);

int main()
{	
	double arr1[5] = { 10, 13, 12, 7, 8 };
	//double arr2[5] = { 1.8, -0.2, 6.3, 13.9, 20.5 };
	double arr2[3] = { 1.8, -0.2, 6.3 };

	printf("Address is %p\n", arr1);
	printf("Size = %zd\n", sizeof(arr1));

	printf("Address is %p\n", arr2);
	printf("Size = %zd\n", sizeof(arr2));

	printf("Avg = %f\n", average(arr1, 5));
	printf("Avg = %f\n", average(arr2, 3));


	return 0;
}

//배열 인덱스를 넣어 봤자 소용없음
//ex) double average(double arr[10], int n)

double average(double arr[], int n)
{
	printf("Size = %zd in function average\n", sizeof(arr));
	double avg = 0.0;

	for (int i = 0; i < n; ++i)
	{
		avg += arr[i];
	}

	avg = avg / (double)n;

	return avg;
}