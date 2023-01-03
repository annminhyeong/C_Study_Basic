#include <stdio.h>


inline int foo()
{
	return 5;
}

int main()
{	
	int ret;
	ret = foo();

	printf("Output is : %d\n", ret);

	return 0;
}