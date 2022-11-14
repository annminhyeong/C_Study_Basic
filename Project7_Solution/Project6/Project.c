#include <stdio.h>
#include <stdbool.h>

int main()
{	
	unsigned num, div;
	bool isPrime;

	scanf("%u", &num);
	
	isPrime = true;

	for (div = 2; (div*div) <= num; ++div)
	{
		if (num % div == 0)
		{
			isPrime = false;
			if(num == div * div)
				printf("%u is divisible by %u\n", num, div);
			else
				printf("%u is divisible by %u and %u.\n", num, div, num/div);
		}
	}


	if (isPrime)
		printf("%u is a prime number.\n", num);
	else
		printf("%u is a not prime number.\n", num);
	return 0;
}