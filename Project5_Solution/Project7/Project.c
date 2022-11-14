#include <stdio.h>


int main()
{	
	/* ex01 */
	short s = 64;
	int i = s;

	float f = 3.14f;
	double d = f;


	/* ex02 */
	d = 1.25;
	f = 1.25;
	//f = 1.123;

	
	/* ex03 */
	d = f + 1.234;
	f = f + 1.234;


	/* ex04 */
	d = (double)3.14f;
	i = 1.6 + 1.7;
	i = (int)1.6 + (int)1.7;


	/* ex05 */
	char c;

	f = i = c = 'A';
	printf("%c %d %f\n", c, i, f);

	c = c + 2;
	i = f + 2 * c;
	printf("%c %d %f\n", c, i, f);

	c = 1106;
	printf("%c\n", c);

	c = 83.99;
	printf("%c\n", c);

	return 0;
}