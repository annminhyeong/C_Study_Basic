#include <stdio.h>


int el;
//Ű���� static : �ٸ� ���� ���������� ����� �� ����
static int il;

void testLinkage();

int main()
{	
	el = 1024;
	testLinkage();

	printf("%d\n", el);

	return 0;
}