#include <stdio.h>

//#define REPORT //��ũ�� �̸��� ������ ����ִ� ��ũ��

int sum(int i, int j)
{
	int s = 0;
	for (int k = i; k <= j; ++k)
	{
		s += k;
//REPORT�� ���ǰ� �Ǿ� ������ �����׸� ���� ���
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