#include <stdio.h>


int main()
{	
	FILE* fp;
	int ch;

	//fp = fopen("input.txt", "r");

	//ch = fgetc(fp);
	//fputc(ch, stdout);

	////글자를 읽은 뒤 다시 버퍼에 집어넣음
	//ungetc(ch, fp);

	//ch = fgetc(fp);
	//fputc(ch, stdout);

	//fclose(fp);


	fp = fopen("input.txt", "r");

	char buffer[32] = { '\0', };
	
	//배열을 buffer로 사용하고 선언
	setvbuf(fp, buffer, _IOFBF, sizeof(buffer));

	for (int i = 0; i < sizeof(buffer); ++i)
		printf("%hhd", buffer[i]);
	printf("\n");

	ch = fgetc(fp);

	for (int i = 0; i < sizeof(buffer); ++i)
		printf("%c", buffer[i]);
	printf("\n");

	fclose(fp);
	
	return 0;
}