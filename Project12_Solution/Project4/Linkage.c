#include <stdio.h>

//extern : 어딘가 다른 곳에 선언되어 있는 파일 스코프 변수를 끌어와서 사용가능
extern int el;
//extern int il;

void testLinkage()
{
	printf("DoSomething called\n");
	printf("%d\n", el);

	//printf("%d\n", il);
	//printf("%d\n", dodgers);
	
	el++;
}