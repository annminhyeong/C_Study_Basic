#include <stdio.h>


int el;
//키워드 static : 다른 파일 스코프에서 사용할 수 없음
static int il;

void testLinkage();

int main()
{	
	el = 1024;
	testLinkage();

	printf("%d\n", el);

	return 0;
}