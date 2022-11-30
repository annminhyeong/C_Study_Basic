#include <stdio.h>


void count()
{
	int ct = 0;
	printf("count = %d\n", ct);
	ct++;
}


void static_count()
{
	//ó���� �޸𸮿� �ö󰡼� ���α׷��� ����ɶ����� ��� �޸𸮿��� ���ŵ��� ����
	static int ct = 0;
	printf("count = %d\n", ct);
	ct++;
}

int main()
{	
	count();
	count();

	static_count();
	static_count();

	return 0;
}