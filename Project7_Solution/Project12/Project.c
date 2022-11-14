#include <stdio.h>


int main()
{	
	char c;

	while ((c= getchar()) != '.')
	{
		printf("I love ");

		switch (c)
		{
			case 'A':
			case 'a': 
				printf("apple");
				break;
			case 'B':
			case 'b': 
				printf("baseball");
				break;
			case 'C':
			case 'c': 
				printf("cake");
				break;
			default:
				printf("nothing");
		}

		printf(".\n");

		while (getchar() != '\n')
			continue;
	}
	return 0;
}