#include <stdio.h>
#include <limits.h>
#include <float.h>

#define PI 3.141592

int main()
{	
	printf("PI is %f\n", PI);
	printf("Biggest int: %d\n", INT_MAX);
	printf("One byte in this system is %d bits\n", CHAR_BIT);
	printf("Smallest normal float %e\n", FLT_MIN);
	return 0;
}