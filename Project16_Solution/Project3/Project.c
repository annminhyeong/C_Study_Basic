#include <stdio.h>

/*
	Function-like micros

	#define ADD(X, Y) ((X) + (Y))

	X and Y : macro arguments
*/

#define ADD1(X, Y) X+Y
#define ADD2(X, Y) ((X) + (Y))
#define SQUARE(X) X*X //((X)*(X))

int main()
{	
	int sqr = SQUARE(3);
	int a = 1;

	printf("%d\n", 2* ADD1(1, 3)); //Wrong : X + Y = 2 * 1 + 3 = 5
	printf("%d\n", 2* ADD2(1, 3)); //2 * (1 + 3) = 8

	printf("%d\n", SQUARE(1 + 2)); //Wrong : 1 + 2 * 1 + 2 = 5
	printf("%d\n", 100 / SQUARE(3 + 1)); //Wrong : 100 / 3 + 1 * 3 + 1 = 33 + 3 + 1 = 37
	printf("%d\n", SQUARE(++a)); //Dangerous : ++a * ++a = 3 + 3 = 9

	return 0;
}