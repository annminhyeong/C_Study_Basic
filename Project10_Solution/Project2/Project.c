#include <stdio.h>


int main()
{	
	int* ptr = 0; //void* : �ּ��� ����ü�� �ǹ̴� ������ �ڷ��� ũ����������

	//���α׷��� ������ �ּҰ� �ƴ� ���� �����ϸ� �����߻�
	//printf("%d\n", *ptr); 

	//�����ͺ����� ���� 10������ ����� ���� long long���� ����ȯ��
	printf("%p %lld\n", ptr, (long long)ptr);

	//�����Ϳ��� 1������Ű�� �����ͺ��� �ڷ��� ũ�⸸ŭ ������
	ptr++;

	printf("%p %lld\n", ptr, (long long)ptr);

	
	//������ ���׿����� ���Ұ�
	//ptr = -ptr; //error
	//ptr = +ptr; //error


	double arr[10];
	double* ptr1 = &arr[3], * ptr2 = &arr[5];

	//������ �ּҳ��� ���ϱ� �ȵ� -> �� �ּҸ� ���غ��� �ǹ��ִ� ���� �ƴ�
	//ptr2 = ptr1 + ptr2;
	int i = ptr2 - ptr1;

	printf("%lld %lld %d\n", (long long)ptr1, (long long)ptr2, i);

	return 0;
}