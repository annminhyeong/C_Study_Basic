#include <stdio.h>


void count()
{
	int ct = 0;
	printf("count = %d %lld\n", ct, (long long)&ct);
	ct++;

	//count()�� ȣ��ǰ� �� �� ct�� ���������ӿ��� ������Ƿ� ���Ұ�
	//return &ct;
}

int* static_count()
{
	//�Լ��� ������ ȣ���ص� ó�� �ѹ� �ʱ�ȭ ��
	static int ct = 0;
	printf("count = %d %lld\n", ct, (long long)&ct);
	ct++;

	//���������� ������ static ������ �޸𸮿� ������ �ּҸ� ������ �����Ƿ� ��밡��
	return &ct;
}

void counter_caller()
{
	count();
}

void static_counter_caller()
{
	static_count();
}

//warning : �Ķ���ʹ� �Լ��� ������ ȣ��� �� ���ο� �޸� ������ ���� �����ϴµ�
//static ������ ���α׷� ���� �޸𸮰� �����Ǹ鼭 �ѹ� �����Ǹ� 
// �� ������ scope ������ ���α׷� ���� ���� ������ �� �ִµ� ������ static �������� �������ϹǷ� warning �߻�
void func(static int i)
{
	
}

int main()
{	
	//����Ǵ� �Լ��� count()�ۿ� ���
	//���ÿ� �ö󰬴� ������ �ٽ� �ö󰡼� �޸� �ּҰ� ���� ����
	count();
	count();
	counter_caller();

	static_count();
	static_count();
	static_counter_caller();

	return 0;
}