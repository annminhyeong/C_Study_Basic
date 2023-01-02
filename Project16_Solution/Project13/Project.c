#include <stdio.h>

#pragma pack(1) //컴파일 할 때 1byte로 패딩하라는 의미
//_Pragma("pack(1)") //컴파일 할 때 1byte로 패딩하라는 의미, 위의 코드와 동일함

//#pragma warning (disable : 4477) //warning 숨기기
//#pragma warning (error : 4477) //warning을 에러처럼 처리하기

struct s
{
	int i;
	char ch;
	double d;
};

int main()
{	
	struct s A;
	printf("Size of A is : %d", sizeof(A));

	return 0;
}