#include <stdio.h>

#define NUM_DAYS 365

int main()
{	
	//char my_chars[] = "Hello, World!";


	//int daily_temperature[NUM_DAYS];
	//double stock_prices_history[NUM_DAYS];


	//printf("%zd\n", sizeof(stock_prices_history));
	//printf("%zd\n", sizeof(double) * NUM_DAYS);
	//printf("%zd\n", sizeof(stock_prices_history[0]));



	int my_numbers[5];
	//
	//my_numbers[0] = 1;
	//my_numbers[1] = 3;
	//my_numbers[2] = 4;
	//my_numbers[3] = 2;
	//my_numbers[4] = 1024;

	////my_numbers[index]가 붙어있는 경우
	////변수 취급하므로 &를 붙여야함
	//scanf("%d", &my_numbers[0]);
	////my_numbers인 경우
	////그 자체가 주소이므로  &를 붙일 필요 없음
	//scanf("%d", my_numbers);

	//printf("%d\n", my_numbers[0]);
	//printf("%d\n", my_numbers[1]);
	//printf("%d\n", my_numbers[2]);
	//printf("%d\n", my_numbers[3]);
	//printf("%d\n", my_numbers[4]);

	/* Runtime error */
	//my_numbers[5] = 123; //out of bound

	/* Compile error */
	//my_numbers = 3;


	return 0;
}