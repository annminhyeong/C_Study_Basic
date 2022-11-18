#include <stdio.h>


int main()
{	
	int arr[5] = { 100, 200, 300, 400, 500 };
	int* ptr1, * ptr2, * ptr3;

	ptr1 = arr;
	printf("%p %d %p\n", ptr1, *ptr1, &ptr1);

	ptr2 = &arr[2];
	printf("%p %d %p\n", ptr2, *ptr2, &ptr2);

	ptr3 = ptr1 + 4;
	printf("%p %d %p\n", ptr3, *ptr3, &ptr3);

	//형식지정자 %td는 포인터의 차이값을 받아서 출력함
	printf("%td\n", ptr3 - ptr1);

	ptr3 = ptr3 - 4;
	printf("%p %d %p\n", ptr3, *ptr3, &ptr3);

	//포인터 후위 증감연산자,전위 증감연산자 가능
	ptr1++;
	ptr1--;
	++ptr1;
	--ptr1;

	//포인터까리 비교가능
	if (ptr1 == ptr3)
		printf("Same\n");
	else
		printf("Different\n");
	

	double d = 3.14;
	double* ptr_d = &d;

	if (ptr1 == (int*)ptr_d)
		printf("Same\n");
	else
		printf("Different\n");


	return 0;
}