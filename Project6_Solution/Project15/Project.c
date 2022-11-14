#include <stdio.h>

#define NUM_ROWS 12
#define FIRST_CHAR 'A'

int main()
{	
	int r;
	int c;

	for (int r = 0; r < NUM_ROWS; ++r)
	{
		for (char c = 'A'+ r; c < FIRST_CHAR + NUM_ROWS; ++c)
			printf("%c ", c);
		printf("\n");
	}
	return 0;
}