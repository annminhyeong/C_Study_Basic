#include <stdio.h>

#define STRLEN 81

char* custom_string_input(char* st, int n);

int main()
{	
	////char �����ʹ� ���ڿ��� ù��° ������ �ּҰ��� �б� ���� �޸𸮿� ������
	////��Ÿ�� ���� : �б� ���� �޸� ���� �����Ϸ��� �ؼ� ���� �߻�
	////char* name = ""; 
	//char name[128];
	//int result = scanf("%s", name);


	////scanf() : �� �ܾ� �б⸸ ����
	////gets() : ���� �б� ����, \n �������ְ� \0 �߰�����

	//char words[STRLEN] = "";
	////gets(words); //�迭�� ù�ּҸ� ����
	//gets_s(words, sizeof(words)); // C11

	//printf("START\n");
	//printf("%s", words);
	//puts(words); // \n �߰�����
	//printf("END.\n");


	//fgets() : ���� �Է¹��� �� ���1��° ������ �迭 ù�ּ�, 2��° ���ڿ� �迭����
	//3��° ���ڿ� stdin ���̸� ǥ������� �ַܼ� �Է¹��� �� ����
	
	//fputs() : ���� ����� �� ���, ù��° ���ڿ� �迭 ù�ּ�,
	//2��° ���ڿ� stdout ���̸� ǥ������� �ַܼ� ��� �� �� ����

	//char words[STRLEN] = "";
	//fgets(words, STRLEN, stdin); //not remove \n

	//int i = 0;
	//while (words[i] != '\n' && words[i] != '\0')
	//	i++;

	//if (words[i] == '\n')
	//	words[i] = '\0';

	//fputs(words, stdout); // not add \n
	//fputs("END", stdout);


	//char small_array[5];
	//puts("Enter long strings:");
	////fgets(small_array, 5, stdin);

	//printf("%p\n", small_array);
	////���������� �Է� ������ ���� �����͸� �״�� ��ȯ��, EOF�� ������ ��ĳ���� ������
	//printf("%p\n", fgets(small_array, 5, stdin));
	//fputs(small_array, stdout);

	
	//char small_array[5];
	//puts("Enter long strings:");
	//while (fgets(small_array, 5, stdin) != NULL && small_array[0] != '\n')
	//	fputs(small_array, stdout);
	
	

	//char str1[6], str2[6];
	//int count = scanf("%5s %5s", str1, str2);
	////���� ��ĳ���Ͱ� �����Ƿ� 5���ڸ� ���� �� ����
	////int count = scanf("%6s %6s", str1, str2);
	//
	////scanf_s()�� ù��° ���ڴ� �迭 ù�ּ�
	////�ι�° ���ڴ� �迭ũ���Է��ϸ� �Է� ���� �� ����
	////int count = scanf_s("%5s", str1, 6);

	//printf("%s|%s\n", str1, str2);

	char words[11];
	puts(custom_string_input(words, 11));

	return 0;
}

char* custom_string_input(char* st, int n)
{
	char* ret_ptr;
	int i = 0;

	ret_ptr = fgets(st, n, stdin);

	if (ret_ptr)
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;

		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_ptr;
}