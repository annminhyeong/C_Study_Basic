#include <stdio.h>

#define STRLEN 81

char* custom_string_input(char* st, int n);

int main()
{	
	////char 포인터는 문자열의 첫번째 문자의 주소값을 읽기 전용 메모리에 저장함
	////런타임 에러 : 읽기 전용 메모리 값을 수정하려고 해서 에러 발생
	////char* name = ""; 
	//char name[128];
	//int result = scanf("%s", name);


	////scanf() : 한 단어 읽기만 가능
	////gets() : 한줄 읽기 가능, \n 제거해주고 \0 추가해줌

	//char words[STRLEN] = "";
	////gets(words); //배열의 첫주소만 받음
	//gets_s(words, sizeof(words)); // C11

	//printf("START\n");
	//printf("%s", words);
	//puts(words); // \n 추가해줌
	//printf("END.\n");


	//fgets() : 파일 입력받을 때 사용1번째 인자의 배열 첫주소, 2번째 인자에 배열길이
	//3번째 인자에 stdin 붙이면 표준입출력 콘솔로 입력받을 수 있음
	
	//fputs() : 파일 출력할 때 사용, 첫번째 인자에 배열 첫주소,
	//2번째 인자에 stdout 붙이면 표준입출력 콘솔로 출력 할 수 있음

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
	////정상적으로 입력 받으면 받은 포인터를 그대로 반환함, EOF를 만나면 널캐릭터 리턴함
	//printf("%p\n", fgets(small_array, 5, stdin));
	//fputs(small_array, stdout);

	
	//char small_array[5];
	//puts("Enter long strings:");
	//while (fgets(small_array, 5, stdin) != NULL && small_array[0] != '\n')
	//	fputs(small_array, stdout);
	
	

	//char str1[6], str2[6];
	//int count = scanf("%5s %5s", str1, str2);
	////끝에 널캐릭터가 있으므로 5글자만 받을 수 있음
	////int count = scanf("%6s %6s", str1, str2);
	//
	////scanf_s()는 첫번째 인자는 배열 첫주소
	////두번째 인자는 배열크기입력하면 입력 받을 수 있음
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