#include <stdio.h>


void count()
{
	int ct = 0;
	printf("count = %d\n", ct);
	ct++;
}


void static_count()
{
	//처음에 메모리에 올라가서 프로그램이 종료될때까지 계속 메모리에서 제거되지 않음
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