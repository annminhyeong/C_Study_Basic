#include <stdio.h>


int temp(int a)
{
	return 0;
}


int (*g(int a))(int)
{
	return temp;
}


int main()
{
	//������ ���� �ؼ��ϴ� ���
	//1. �̸��� ã�´�
	//2. ���ʿ��� ���� �ٱ������� �б�
	//3. []�� ()�� *()���� �켱������ ����

	int* ap[10];

	typedef int* pint;
	pint ap2[10];

	float* fp(float);
	
	typedef float* pfloat;
	pfloat fp2(float);

	void(*pf)(int);

	int* (*x[10])(void);


	int(*f(int))[];

	int* (*x2[10])(int);

	return 0;
}