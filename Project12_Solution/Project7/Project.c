#include <stdio.h>


void temp(register int r)
{
	//do something with r
}

int main()
{	
	//register : cpu ����Ʈ��(�޸�)�� �޸� ������ �Ҵ��ش޶�� ��û
	//�ü���� ����Ʈ�Ϳ� ������ �� ������ ����Ʈ�׿� �����ϰ� 
	//�������� ���ϴ� ��Ȳ�̶�� ���ø޸𸮿� �����Ѵ�.
	register int r;
	r = 123;

	//printf("%p\n", &r); //error
	
	//����Ʈ�� �������� �ּҿ����� ���Ұ��� (����ڰ� cpu �ּҿ� ���� �����ϴ� ���� �����ϹǷ�)
	int* ptr = &r; //error


	return 0;
}