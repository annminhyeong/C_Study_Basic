#include <stdio.h>

//extern : ��� �ٸ� ���� ����Ǿ� �ִ� ���� ������ ������ ����ͼ� ��밡��
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