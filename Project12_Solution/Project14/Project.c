#include <stdio.h>
#include <stdlib.h> //malloc(), free()


int main()
{	
	float x;
	char str[] = "Dancing with a star";

	int arr[100];

	double* ptr = NULL;

	
	//void* 는 자료형의 크기를 알 수 없으므로 포인터 연산 수행할 수 없음

	//메모리 동적할당 (힙)
	//malloc()는 사용할 메모리 바이트 크기를 파라미터로 전달해야함
	//malloc()의 리턴값으로는 사용할 메모리 바이트 크기의 첫번째 주소를 void* 타입의 포인터로 리턴함
	ptr = (double*)malloc(30 * sizeof(double));

	if (ptr == NULL)
	{
		puts("Memory allcation failed");

		//exit(EXIT_FAILURE) is similar return 1 IN main().
		//exit(EXIT_SUCCESS) is similar return 0 IN main().
		exit(EXIT_FAILURE);
	}

	printf("Before free %p\n", ptr);

	free(ptr); //메모리 반납

	//free()로 메모리를 반납해도 포인터는 별도의 변수이기 때문에 메모리 반납 전 주소를 가지고 있음
	printf("After free %p\n", ptr);

	//free()로 메모리를 반납했다면 해당 포인터도 NULL로 초기화 해줘야함
	ptr = NULL;


	//동적할당 메모리는 배열처럼 사용가능
	int n = 5;
	ptr = (double*)malloc(n * sizeof(double));

	if (ptr != NULL)
	{
		//메모리를 할당만 받고 초기화를 안해서 쓰레기값이 출력됨
		for (int i = 0; i < n; ++i)
			printf("%f ", ptr[i]);
		printf("\n");

		for (int i = 0; i < n; ++i)
			*(ptr + i) = (double)i;

		for (int i = 0; i < n; ++i)
			printf("%f ", ptr[i]);
		printf("\n");
	}

	free(ptr);
	ptr = NULL;

	return 0;
}