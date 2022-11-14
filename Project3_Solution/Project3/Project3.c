#include <stdio.h>


int main()
{
	float won = 0.0f, dollar = 0.0f;

	printf("Input Won\n");
	scanf("%f", &won);
	dollar = won * 0.00071f;
	printf("Dollar = %f", dollar);


	return 0;
}