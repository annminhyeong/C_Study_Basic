#include <stdio.h>
#include <stdlib.h>

#define MAX 31

int main(void)
{	
	FILE* fp;
	char words[MAX] = { '\0', };

	const char* filename = "record.txt";

	//파일 모드
	//r : 읽기
	//w : 파일 없는 경우 파일 만들고 쓰기, 파일 있는 경우 파일 덮어쓰기
	//a : 파일 없는 경우 파일 만들고 쓰기, 파일 있는 경우 파일 덧붙이기
	//r+ : 읽기 쓰기, 파일이 있으면 덮어씀
	//w+ : 읽기 쓰기, 덮어쓰거나 파일이 없으면 새로운 파일 만들기
	//a+ : 읽기 쓰기, 덧붙이거나 파일이 없으면 새로운 파일 만들기

	if ((fp = fopen(filename, "a+")) == NULL)
	{
		fprintf(stderr, "Can't open \"%s\" file.\n", filename);
		exit(EXIT_FAILURE);
	}

	//while ((fscanf(stdin, "%30s", words) == 1) && (words[0] != '.'))
	//	fprintf(fp, "%s\n", words);


	while ((fgets(words, MAX, stdin)) != NULL && (words[0] != '.'))
		fputs(words, fp);

	
	//파일의 첫부분으로 돌아감
	rewind(fp);

	//while (fscanf(fp, "%s", words) != EOF)
	//	fprintf(stdout, "%s\n", words);

	while (fgets(words, MAX, fp) != NULL)
		fputs(words, stdout);

	if (fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");

	return 0;
}