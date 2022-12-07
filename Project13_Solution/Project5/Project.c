#include <stdio.h>


int main()
{	
	int ch;
	long cur;

	FILE* fp = fopen("test.txt", "r");

	//ftell() : 파일에서의 현재위치를 알려줌
	cur = ftell(fp);
	printf("ftell() = %ld\n", cur);

	//fseek(SEEK_SET) : 시작점으로 부터 2byte 떨어진 곳으로 이동
	fseek(fp, 2L, SEEK_SET);
	
	cur = ftell(fp);
	printf("ftell() = %ld\n", cur);

	//파일에서 한글자읽기, 파일에서 글자 읽으면 1byte 이동함
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);

	cur = ftell(fp);
	printf("ftell() = %ld\n", cur);

	//fseek(SEEK_CUR) : 현재위치에서 -2byte 이동
	fseek(fp, -2L, SEEK_CUR);

	cur = ftell(fp);
	printf("ftell() = %ld\n", cur);
	
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);

	//fseek(SEEK_END) : 끝에서부터  0byte 이동
	fseek(fp, 0L, SEEK_END);

	ch = fgetc(fp);
	printf("%d %c\n", ch, ch); //파일의 끝(EOF) -1 출력됨

	fseek(fp, -1L, SEEK_END);

	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);

	fseek(fp, -2L, SEEK_END);

	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);


	fpos_t pt;
	pt = 10;

	//fsetpos() : 시작점에서 10byte 떨어진 곳으로 이동
	fsetpos(fp, &pt);

	//파일에서 글자 읽으면 1byte 이동함
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);

	//fgetpos() : 파일에서의 현재위치를 알려줌
	fgetpos(fp, &pt);
	printf("%lld\n", pt);


	return 0;
}