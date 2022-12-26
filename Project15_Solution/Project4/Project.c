#include <stdio.h>
#include <math.h> //pow()

void print_binary(const unsigned char num);

int main()
{
	print_binary(127);
	print_binary(-127);
	print_binary(~127 + 1);

	print_binary(12);
	print_binary(-12);
	print_binary(~12 + 1);
	
	print_binary(7);
	print_binary(-7);
	print_binary(~-7 + 1);

	return 0;
}

void print_binary(const char num)
{
	printf("Decimal %3d \t== binary ", num);

	const size_t bits = sizeof(num) * 8;

	for (size_t i = 0; i < bits; ++i)
	{
		const unsigned char mask = (char)pow((double)2, (double)(bits - 1 - i));
		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	}
	printf("\n");
}