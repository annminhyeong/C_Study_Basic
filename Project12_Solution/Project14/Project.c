#include <stdio.h>
#include <stdlib.h> //malloc(), free()


int main()
{	
	float x;
	char str[] = "Dancing with a star";

	int arr[100];

	double* ptr = NULL;

	
	//void* �� �ڷ����� ũ�⸦ �� �� �����Ƿ� ������ ���� ������ �� ����

	//�޸� �����Ҵ� (��)
	//malloc()�� ����� �޸� ����Ʈ ũ�⸦ �Ķ���ͷ� �����ؾ���
	//malloc()�� ���ϰ����δ� ����� �޸� ����Ʈ ũ���� ù��° �ּҸ� void* Ÿ���� �����ͷ� ������
	ptr = (double*)malloc(30 * sizeof(double));

	if (ptr == NULL)
	{
		puts("Memory allcation failed");

		//exit(EXIT_FAILURE) is similar return 1 IN main().
		//exit(EXIT_SUCCESS) is similar return 0 IN main().
		exit(EXIT_FAILURE);
	}

	printf("Before free %p\n", ptr);

	free(ptr); //�޸� �ݳ�

	//free()�� �޸𸮸� �ݳ��ص� �����ʹ� ������ �����̱� ������ �޸� �ݳ� �� �ּҸ� ������ ����
	printf("After free %p\n", ptr);

	//free()�� �޸𸮸� �ݳ��ߴٸ� �ش� �����͵� NULL�� �ʱ�ȭ �������
	ptr = NULL;


	//�����Ҵ� �޸𸮴� �迭ó�� ��밡��
	int n = 5;
	ptr = (double*)malloc(n * sizeof(double));

	if (ptr != NULL)
	{
		//�޸𸮸� �Ҵ縸 �ް� �ʱ�ȭ�� ���ؼ� �����Ⱚ�� ��µ�
		for (int i = 0; i < n; ++i)
			printf("%f ", ptr[i]);
		printf("\n");

		for (int i = 0; i < n; ++i)
			*(ptr + i) = (double)i;

		for (int i = 0; i < n; ++i)
			printf("%f ", ptr[i]);
		printf("\n");
	}

	free(ptr);
	ptr = NULL;

	return 0;
}