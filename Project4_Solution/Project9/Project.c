#include <stdio.h>


int main()
{	
	float  n1 = 3.14;  // 4 byte
	double n2 = 1.234; // 8 byte
	int    n3 = 1024;  // 4 byte

	printf("%f %f %d\n\n", n1, n2, n3);

	//%d는 4 byte씩 스택에서 꺼내서 출력하는데 float, double은 내부적으로 8 byte여서 
	//스택에서 4 byte씩 꺼내쓰므로 이상한 값이 출력됨
	printf("%d %d %d\n\n", n1, n2, n3); 
	//float, double 타입이 안맞아서 이상한 값 출력됨
	printf("%lld %lld %d\n\n", n1, n2, n3); 
	printf("%f %d %d\n\n", n1, n2, n3);
	printf("%f %lld %d\n\n", n1, n2, n3);
	return 0;
}