#include <stdio.h>
#include <ctype.h>

int main()
{	
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (isdigit(ch) != 0)
			ch = '*';
		else if (islower(ch))
			ch = toupper(ch);
		else if(isupper(ch))
			ch = tolower(ch);
		putchar(ch);
	}
	return 0;
}