#include <stdio.h>
#include <string.h>
#include <stdbool.h>


#define WIDTH 30
#define NAME "Jeong-Mo Hong"
#define ADDRESS "Seoul, Korea"



//������Ÿ�Կ����� �������� ��������
//ex) void print_centered_string(char[]);

//������Ÿ��(�����)�� �־ ������ �� (��ŷ�� �ȵ�)
void print_centered_string(char str[]);
void print_mutiple_chars(char c, int n, bool print_newline);


int main()
{
	print_mutiple_chars('*', WIDTH, true); //argument
	print_centered_string(NAME);
	print_centered_string(ADDRESS);
	print_centered_string("I love you");
	print_mutiple_chars('*', WIDTH, false);

	return 0;
}


void print_mutiple_chars(char c, int n, bool print_newline) //parameter
{
	for (int i = 0; i < n; ++i)
		printf("%c", c); //putchar(c);
	if (print_newline)
		printf("\n");
}

void print_centered_string(char str[])
{
	int n_blanks = 0;
	n_blanks = (WIDTH - strlen(str)) / 2;
	print_mutiple_chars(' ', n_blanks, false);
	printf("%s\n", str);
}
