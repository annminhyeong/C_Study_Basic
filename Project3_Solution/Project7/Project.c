#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{	
	int i;
	int32_t i32; //32비트 정수
	int_least8_t i8; //적어도 8비트를 갖고 있는 정수
	int_fast8_t f8; //8비트 중에서 가장빠른 정수
	intmax_t imax; //가장 비트수가 많은 부호있는 정수
	uintmax_t uimax; //가장 비트수가 많은 부호없는 정수

	i32 = 1004;

	printf("me32 = %d\n", i32);
	printf("me32 = %" "d" "\n", i32);
	printf("me32 = %" PRId32 "\n", i32);

	return 0;
}