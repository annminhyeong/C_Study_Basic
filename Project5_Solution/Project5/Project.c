#include <stdio.h>


int main()
{	
	//int second = 0, minutes = 0, hours = 0;

	//printf("Input seconds : ");
	//scanf("%d", &second);
	//while (second >= 0)
	//{
	//	minutes = second / 60;
	//	second %= 60;

	//	hours = minutes / 60;
	//	minutes %= 60;

	//	printf("%d hours %d minutes %d seconds\n", hours, minutes, second);

	//	printf("Input seconds : ");
	//	scanf("%d", &second);
	//}
	//printf("Good bye\n");

	int div, mod;
	
	div = 11 / 5;
	mod = 11 % 5;
	printf("div = %d, mod = %d\n", div, mod);


	div = 11 / -5;
	mod = 11 % -5; //앞(11)이 양수이면 나머지는 양수임
	printf("div = %d, mod = %d\n", div, mod);


	div = -11 / -5;
	mod = -11 % -5; //앞(-11)이 음수이면 나머지는 음수임
	printf("div = %d, mod = %d\n", div, mod);


	div = -11 / 5;
	mod = -11 % 5; //앞(-11)이 음수이면 나머지는 음수임
	printf("div = %d, mod = %d\n", div, mod);

	return 0;
}