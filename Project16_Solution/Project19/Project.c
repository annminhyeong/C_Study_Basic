#include <stdio.h>
#include <stdlib.h>

/*
	rand(), srand(), malloc(), free()
*/

void goodbye(void)
{
	printf("Goodbye\n");
}

void thankyou(void)
{
	printf("Thankyou\n");
}

int main()
{	
	printf("Purchased?\n");
	if (getchar() == 'y')
		atexit(thankyou); //���������� ���α׷� ����ɶ� �����

	while (getchar() != '\n') {};

	printf("Goodbye message ?\n");
	if (getchar() == 'y')
		atexit(goodbye);

	return 0;
}