#include <stdio.h>
#include <stdlib.h>
#include <Windows.h> //SetConsoleOutputCP()

int main(int argc, char* argv[])
{	
	//현재 사용하고 있는 CP 확인
	const UINT default_cp = GetConsoleOutputCP();
	printf("%u\n", default_cp);

	int ch;
	FILE* fr, * fw;

	const char* in_filename = "원본.txt";
	const char* out_filename = "사본.txt";

	unsigned long count = 0;

	if ((fr = fopen(in_filename, "r")) == NULL)
	{
		printf("Can't open %s\n", in_filename);
		exit(EXIT_FAILURE);
	}

	if ((fw = fopen(out_filename, "w")) == NULL)
	{
		printf("Can't open %s\n", out_filename);
		exit(EXIT_FAILURE);
	}

	SetConsoleOutputCP(CP_UTF8);

	while ((ch = fgetc(fr)) != EOF)
	{
		fputc(ch, stdout);
		fputc(ch, fw);
		count++;
	}


	fclose(fr);
	fclose(fw);

	SetConsoleOutputCP(default_cp);

	printf("FILE %s has %lu characters\n", argv[1], count);
	printf("Copied to %s\n", out_filename);

	printf("한글 출력 확인");

	return 0;
}