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
		atexit(thankyou); //정상적으로 프로그램 종료될때 실행됨

	while (getchar() != '\n') {};

	printf("Goodbye message ?\n");
	if (getchar() == 'y')
		atexit(goodbye);

	return 0;
}