#include <stdio.h>

//#define REPORT //메크로 이름만 있으면 비어있는 메크로

int sum(int i, int j)
{
	int s = 0;
	for (int k = i; k <= j; ++k)
	{
		s += k;
//REPORT가 정의가 되어 있으면 세부항목 전부 출력
#ifdef REPORT
		printf("%d %d\n", s, k);
#endif

	}

	return s;
}

int main()
{	
	printf("\n%d \n", sum(1, 10));
	return 0;
}