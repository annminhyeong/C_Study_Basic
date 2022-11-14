#include <stdio.h>
#define NUM_ROWS 5
#define FIRST_CHAR 'A'
#define LAST_CHAR 'K'


int main()
{	
	int r;
	char c;

	for (r = 0; r < NUM_ROWS; ++r)
	{
		for (c = FIRST_CHAR; c <= LAST_CHAR; ++c)
			printf("%c ", c);
		printf("\n");
	}

	return 0;
}