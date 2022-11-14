#include <stdio.h>

#define SIZE 5

int main()
{
	int numbers[SIZE];
	int sum = 0;

	printf("Enter %d numbers :", SIZE);

	for (int i = 0; i < SIZE; i++)
		scanf("%d", &numbers[i]);
	

	for (int i = 0; i < SIZE; i++)
		sum += numbers[i];
	printf("Sum = %d\n", sum);

	return 0;
}