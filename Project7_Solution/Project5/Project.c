#include <stdio.h>


int main()
{	
	int number;
	scanf("%d", &number);

	//if (number == 1)
	//	printf("One");
	//else if (number == 2)
	//	printf("Two");
	//else if (number == 3)
	//	printf("Three");

	//if (number == 1)
	//	printf("One");
	//else
	//	if(number == 2)
	//		printf("Two");
	//	else
	//		if (number == 3)
	//			printf("Three");


	
	if (number > 5)
		if (number < 10)
			printf("Larger than 5 smallar than 10\n");
	//�ٱ� if�� else�� �ƴ϶� ���� if�� else��
	else
		printf("Larger than 10\n");



	return 0;
}