#include <stdio.h>

#define TEST "A string from #define."

void custom_put(const char* str);
int custom_put2(const char* str);

int main()
{	
	//puts() : �迭�� ù �ּҰ� ���� \0������ �������, �������� \n �ٿ���

	////���ڿ� ���ͷ��� �����ϸ� �ڿ� �ڵ����� \n�� ����
	//char str[60] = "String array initialized";
	//const char* ptr = "A pointer initialized";

	//puts("String with \\n");
	//puts("END");
	//
	//puts(TEST);
	//puts(&str[3]); //�迭 3��°�ּҺ��� \0������ �����
	////puts(str[3]); //error
	//puts(ptr + 3);


	//char str[] = { 'H', 'I', '!' }; //no \0
	//puts(str); // \0�� �����Ƿ� hi! �ڿ� ������ ���� ��µ�


	

	//char line[100];
	//while (gets(line) != NULL)
	//	puts(line);


	//fputs() : ���� ����� �� ����
	//2��° ���ڿ� stdout ���̸� �ܼ� ��°���
	//char line[100];
	//while (fgets(line, 100, stdin))
	//	fputs(line, stdout);


	//char str[] = "Just do it, do it!";
	//printf("%s\n", str);
	//puts(str);


	//char input[100] = "";
	//
	//int ret = scanf("%10s", input); // scanf�� \t�� ������ �о������ ����
	//printf("%s\n", input);

	//ret = scanf("%10s", input); //���۰� ������� �����Ƿ� do�� ��µ�
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