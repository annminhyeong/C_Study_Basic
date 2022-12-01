#include <stdio.h>


void temp(register int r)
{
	//do something with r
}

int main()
{	
	//register : cpu 레지트터(메모리)에 메모리 공간을 할당해달라고 요청
	//운영체제가 레지트터에 저장할 수 있으면 레지트테에 저장하고 
	//저장하지 못하는 상황이라면 스택메모리에 저장한다.
	register int r;
	r = 123;

	//printf("%p\n", &r); //error
	
	//레지트터 변수에는 주소연산자 사용불가능 (사용자가 cpu 주소에 직접 접근하는 것은 위험하므로)
	int* ptr = &r; //error


	return 0;
}