#include <stdio.h>


#define LIMIT 400
//#undef : #define ���, ���Ǹ� ������ ���� �̸��� ��� ����
//#undef LIMIT
#undef NON_DEFINED

int main()
{	
	printf("%d\n", LIMIT);
	return 0;
}