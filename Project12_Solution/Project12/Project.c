#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{	
	////�����Լ��� �õ帶�� ������ ���� ������
	////srand : random seed
	//srand((unsigned int)time(0));

	//for (int i = 0; i < 10; ++i)
	//{
	//	printf("%d\n", rand());
	//}
	//printf("\n");

	unsigned int next = (unsigned int)time(0);

	for (int i = 0; i < 10; ++i)
	{
		next = next * 1103515245 + 1234;
		next = (unsigned int)(next / 65536) % 32768;
		printf("%d\n", (int)next);
	}

	return 0;
}