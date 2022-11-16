#include <stdio.h>


int main()
{	
	int* ptr = 0; //void* : 주소의 값자체는 의미는 있으나 자료형 크기지정안함

	//프로그램이 지정한 주소가 아닌 곳에 접근하면 오류발생
	//printf("%d\n", *ptr); 

	//포인터변수의 값을 10진수로 만들기 위해 long long으로 형변환함
	printf("%p %lld\n", ptr, (long long)ptr);

	//포인터에서 1증가시키면 포인터변수 자료형 크기만큼 증가함
	ptr++;

	printf("%p %lld\n", ptr, (long long)ptr);

	
	//포인터 단항연산자 사용불가
	//ptr = -ptr; //error
	//ptr = +ptr; //error


	double arr[10];
	double* ptr1 = &arr[3], * ptr2 = &arr[5];

	//포인터 주소끼리 더하기 안됨 -> 두 주소를 더해봤자 의미있는 값이 아님
	//ptr2 = ptr1 + ptr2;
	int i = ptr2 - ptr1;

	printf("%lld %lld %d\n", (long long)ptr1, (long long)ptr2, i);

	return 0;
}