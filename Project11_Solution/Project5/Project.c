#include <stdio.h>

#define TEST "A string from #define."

void custom_put(const char* str);
int custom_put2(const char* str);

int main()
{	
	//puts() : 배열의 첫 주소값 부터 \0전까지 출력해줌, 마지막에 \n 붙여줌

	////문자열 리터럴로 선언하면 뒤에 자동으로 \n이 붙음
	//char str[60] = "String array initialized";
	//const char* ptr = "A pointer initialized";

	//puts("String with \\n");
	//puts("END");
	//
	//puts(TEST);
	//puts(&str[3]); //배열 3번째주소부터 \0전까지 출력함
	////puts(str[3]); //error
	//puts(ptr + 3);


	//char str[] = { 'H', 'I', '!' }; //no \0
	//puts(str); // \0이 없으므로 hi! 뒤에 쓰레기 값이 출력됨


	

	//char line[100];
	//while (gets(line) != NULL)
	//	puts(line);


	//fputs() : 파일 출력할 때 쓰임
	//2번째 인자에 stdout 붙이면 콘솔 출력가능
	//char line[100];
	//while (fgets(line, 100, stdin))
	//	fputs(line, stdout);


	//char str[] = "Just do it, do it!";
	//printf("%s\n", str);
	//puts(str);


	//char input[100] = "";
	//
	//int ret = scanf("%10s", input); // scanf는 \t를 만나면 읽어들이지 않음
	//printf("%s\n", input);

	//ret = scanf("%10s", input); //버퍼가 비어있지 않으므로 do가 출력됨
	//printf("%s\n", input);


	custom_put("Just ");
	custom_put("do it!");

	printf("%d\n", custom_put2("12345"));

	return 0;
}

void custom_put(const char* str)
{
	while (*str != '\0')
		putchar(*str++);
}

int custom_put2(const char* str)
{
	int count = 0;
	while (*str)
	{
		putchar(*str++);
		count++;
	}
	putchar('\n');

	return count;
}