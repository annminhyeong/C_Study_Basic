#include <stdio.h>
#include <assert.h>


int divide(int a, int b);

int main()
{	
	int a, b;
	int f = scanf("%d%d", &a, &b);

	printf("a / b = %d", divide(a, b));
	return 0;
}

int divide(int a, int b)
{
	//�ݵ�� �����ؾ��ϴ� ����
	//�������� ���ϸ� ����� ��忡�� ���� �߻��� (������ ��忡���� ���� �߻� X)
	assert(b != 0);
	return a / b;
}