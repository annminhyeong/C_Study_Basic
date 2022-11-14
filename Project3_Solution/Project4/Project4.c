#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
	unsigned int u_max = UINT_MAX;
	unsigned int u_min = 0;
	signed int i_max = INT_MAX;
	signed int i_min = INT_MIN;

	//printf("max of uint = %u\n", u_max);
	//printf("min of uint = %u\n", u_min);
	//printf("max of int = %d\n", i_max);
	//printf("min of int = %d\n", i_min);

	unsigned int overflow = 0 - 1;

	
	char buffer[33];
	//이진수로 변환해줌
	_itoa(overflow, buffer, 2);


	printf("decimal : %u\n", overflow);
	printf("binary  : %s\n", buffer);
	

	return 0;
}