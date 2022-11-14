#include <stdio.h>


int main()
{
	int i = 0, j = 0, sum = 0;
	
	printf("Input two Integers\n");
	scanf("%d%d", &i, &j);
	sum = i + j;
	printf("%d plus %d = %d\n", i, j, sum);

	return 0;
}