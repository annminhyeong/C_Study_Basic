#include <stdio.h>
#include <math.h> //pow()
#include <string.h> //strlen()
#include <stdlib.h> //exit()
#include <stdbool.h>

unsigned char to_decimal(const char bi[]);
void print_binary(const unsigned char num);

int main()
{	
	unsigned char i = to_decimal("01000110");
	unsigned char mask = to_decimal("00000101");

	print_binary(i);
	print_binary(mask);
	print_binary(i & mask);
	return 0;
}

unsigned char to_decimal(const char bi[])
{
	size_t bits = strlen(bi);
	unsigned char sum = 0;

	for (size_t i = 0; i < bits; i++)
	{
		if (bi[i] == '1')
			sum += (int)pow(2, bits - 1 - i);
		else if (bi[i] != '0')
		{
			printf("Wrong character : %c\n", bi[i]);
			exit(1);
		}
	}
	return sum;
}

void print_binary(const unsigned char num)
{
	printf("Decimal %3d \t== binary ", num);
	
	const size_t bits = sizeof(num) * 8;
	
	for (size_t i = 0; i < bits; ++i)
	{
		const unsigned char mask =
			(unsigned char)pow((double)2, (double)(bits - 1 - i));

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	}

	//for (size_t i = bits - 1; i >= 0; --i) //underflow error
	//for (int i = bits - 1; i >= 0; --i)
	//{
	//	const unsigned char mask =
	//		(unsigned char)pow((double)2, (double)i);

	//	if ((num & mask) == mask)
	//		printf("%d", 1);
	//	else
	//		printf("%d", 0);
	//}
}