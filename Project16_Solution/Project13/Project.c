#include <stdio.h>

#pragma pack(1) //������ �� �� 1byte�� �е��϶�� �ǹ�
//_Pragma("pack(1)") //������ �� �� 1byte�� �е��϶�� �ǹ�, ���� �ڵ�� ������

//#pragma warning (disable : 4477) //warning �����
//#pragma warning (error : 4477) //warning�� ����ó�� ó���ϱ�

struct s
{
	int i;
	char ch;
	double d;
};

int main()
{	
	struct s A;
	printf("Size of A is : %d", sizeof(A));

	return 0;
}