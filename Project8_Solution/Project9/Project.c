#include <stdio.h>
#include <stdlib.h> //exit();

int main()
{	
	int c;
	FILE* file = NULL;
	char file_name[] = "my_file.txt";

	file = fopen(file_name, "r");
	
	if (file == NULL)
	{
		printf("Failed to open file.\n");
		exit(1004);
	}

	while ((c = getc(file)) != EOF)
		putchar(c);

	fclose(file);

	return 0;
}