#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{	
	int ch;

	//FILE* : 파일을 처리할때 필요한 데이터타입의 묶음에 대한 포인터
	FILE* fr, * fw;
	const char* out_filename = "copy.txt";

	unsigned long count = 0;

	if (argc != 2)
	{
		printf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fr = fopen(argv[1], "r")) == NULL)
	{
		printf("Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((fw = fopen(out_filename, "w")) == NULL)
	{
		printf("Can't open %s\n", out_filename);
		exit(EXIT_FAILURE);
	}
	
	//fopen(fileName, mode) : 지정된 파일 열기
	
	//파일 모드
	//r : 읽기
	//w : 파일 없는 경우 파일 만들고 쓰기, 파일 있는 경우 파일 덮어쓰기
	//a : 파일 없는 경우 파일 만들고 쓰기, 파일 있는 경우 파일 덧붙이기
	//r+ : 읽기 쓰기
	//w+ : 읽기 쓰기, 덮어쓰거나 새로운 파일 만들기
	//a+ : 읽기 쓰기, 덧붙이거나 새로운 파일 만들기


	while ((ch = fgetc(fr)) != EOF)
	{
		fputc(ch, stdout);
		fputc(ch, fw);
		count++;
	}

	fclose(fr);
	fclose(fw);

	printf("FILE %s has %lu characters\n", argv[1], count);
	printf("Copied to %s\n", out_filename);

	return 0;
}