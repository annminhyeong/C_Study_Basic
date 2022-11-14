#include <stdio.h>


int main()
{	
	int size = 1, cost;

	if (size < 10)
		goto a; //label
	goto b;

a: cost = 50 * size;
b: cost = 100 * size;
	printf("%d", cost);

	char c;

//read: c = getchar();
//	putchar(c);
//	if (c == '.') goto quit;
//	goto read;
//quit:


	return 0;
}