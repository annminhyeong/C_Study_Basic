#include <stdio.h>


int main()
{	
	float  n1 = 3.14;  // 4 byte
	double n2 = 1.234; // 8 byte
	int    n3 = 1024;  // 4 byte

	printf("%f %f %d\n\n", n1, n2, n3);

	//%d�� 4 byte�� ���ÿ��� ������ ����ϴµ� float, double�� ���������� 8 byte���� 
	//���ÿ��� 4 byte�� �������Ƿ� �̻��� ���� ��µ�
	printf("%d %d %d\n\n", n1, n2, n3); 
	//float, double Ÿ���� �ȸ¾Ƽ� �̻��� �� ��µ�
	printf("%lld %lld %d\n\n", n1, n2, n3); 
	printf("%f %d %d\n\n", n1, n2, n3);
	printf("%f %lld %d\n\n", n1, n2, n3);
	return 0;
}