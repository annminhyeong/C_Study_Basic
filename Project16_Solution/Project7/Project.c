#include <stdio.h>


#define LIMIT 400
//#undef : #define 취소, 정의를 해주지 않은 이름도 취소 가능
//#undef LIMIT
#undef NON_DEFINED

int main()
{	
	printf("%d\n", LIMIT);
	return 0;
}