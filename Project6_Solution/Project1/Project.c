#include <stdio.h>


int main()
{	
	int num, sum = 0;

	printf("Enter an integer (q to quit) : ");
	
	//scanf�� ������ �ԷµǸ� ���ϰ����� �Ű����� ���� 1���� �Էµ�
	//���ڰ� �ԷµǸ� ���ϰ� �� 0�̵�
	while (scanf("%d", &num) == 1)
	{
		sum = sum + num;
		printf("Enter next integer (q to quit) : ");
	}

	printf("Sum = %d\n", sum);



	return 0;
}