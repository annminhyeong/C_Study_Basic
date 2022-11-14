#include <stdio.h>


long get_long(void);


int main()
{	
	long number;

	while (1)
	{
		printf("Please input a number betweem 1 and 100.\n");
		 number = get_long();

		if (1 < number && number < 100)
		{
			printf("OK. Thank you.\n");
			break;
		}
		else
			printf("Wrong input. Please try again.\n");
	}

	printf("Your input %d is between 1 and 100 Thank you.\n", number);


	return 0;
}


long get_long(void)
{
	printf("Please input an integer and press enter.\n");

	long input;
	char c;


	while (scanf("%ld", &input) != 1)
	{
		printf("Your Input - ");

		while ((c = getchar()) != '\n')
			putchar(c);

		printf(" - is not an integer Please try again.\n");
	}

	printf("Your input %ld is an integer. Thank you.\n", input);

	return input;
}