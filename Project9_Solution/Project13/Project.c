#include <stdio.h>


int main()
{	
	//int a = 1234;
	//printf("%p\n", &a);
	//printf("%d\n", a);


	////����Ʈ������ �ּҰ�1234�� ������
	//int *ptr = 1234;
	//printf("%p\n", ptr);
	////�ּҰ�1234�� ���α׷��� ����ϵ��� �Ҵ���� ������ �ƴϹǷ� ��Ÿ�� ������ �߻���
	//printf("%d\n", *ptr); 

	
	//int* safer_ptr;
	//
	//int a = 123;
	//
	//int b;
	//scanf("%d", &b);

	////�̷���� b���� Ȧ�� �̸� �����Ͱ��� �ʱ�ȭ�� �ȵ� ���°� ��
	//if (b % 2 == 0)
	//	safer_ptr = &a;


	//�����ͺ����� �ʱ�ȭ�� �� ���� NULL(0)�� ���
	int* safer_ptr = NULL;
	
	int a = 123;
	
	int b;
	scanf("%d", &b);

	//�̷���� b���� Ȧ�� �̸� �����Ͱ��� �ʱ�ȭ�� �ȵ� ���°� ��
	if (b % 2 == 0)
		safer_ptr = &a;

	if (safer_ptr != NULL)
		printf("%p\n", safer_ptr);
	if (safer_ptr != NULL)
		printf("%d\n", *safer_ptr);


	return 0;
}