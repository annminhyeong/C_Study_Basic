#include <stdio.h>
#include <stdlib.h>


int main()
{	
	//동적할당 메모리는 인식자가 없음

	int n = 10;
	int* ptr = NULL;

	//ptr = (int*)malloc(sizeof(int) * n);
	
	//int(4byte) * n 만큼 메모리 공간을 동적으로 할당 받으라는 의미
	//malloc()과 비슷하지만 malloc()과 다르게 값을 초기화 해줌
	ptr = (int*)calloc(n, sizeof(int));
	if (!ptr)
		exit(1);

	for (int i = 0; i < n; ++i)
		printf("%d ", ptr[i]);
	printf("\n");


	//realloc() : 동적할당으로 메모리를 재할당 할 때 사용됨
	//기존 동적할당 메모리는 복사해주고 새로 추가된 메모리는 초기화 안해줌
	//메모리를 새로 할당할 수 없을 때 null pointer 리턴
	//첫번째 파라미터는 이미 동적 할당 받은 메모리에 대한 포인터
	//두번째 파라미터는 새로 동적 할당 받고 싶은 메모리 크기

	for (int i = 0; i < n; ++i)
		ptr[i] = i + 1;

	n = 20;
	int* ptr2 = NULL;

	ptr2 = (int*)realloc(ptr, n * sizeof(int));
	//ptr = (int*)realloc(ptr, n * sizeof(int)); //가능

	printf("%p %p\n", ptr, ptr2);
	printf("%d\n", ptr[0]);

	if (!ptr2)
		exit(1);
	else
		ptr = NULL;

	for (int i = 0; i < n; ++i)
		printf("%d ", ptr2[i]);
	printf("\n");

	//realloc()에 의해 ptr은 알아서 메모리 해제됨
	free(ptr2);


	return 0;
}