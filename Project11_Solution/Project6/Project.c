#include <stdio.h>
#include <string.h>

void fit_str(char*, unsigned int);

int main()
{	
	////strlen() : 문자열 길이 알려줌

	//char msg[] = "Just,"" do it!";
	//
	//puts(msg);
	//printf("Length %d\n", strlen(msg));
	//fit_str(msg, 4);
	//puts(msg);
	//printf("Length %d\n", strlen(msg));

	
	////strcat(), strncat() : 문자열 합쳐줌

	//char str1[100] = "First string";
	//char str2[] = "Second string";

	////strcat(str1, ", ");
	////strcat(str1, str2);
	//
	////str1 \0뒤가 초기화 안되서 warning
	////첫번째 문자열에 2글자만 더해줌
	//strncat(str1, str2, 2); 
	//puts(str1);
	

	////strcmp(), strncmp() : 문자열 비교 함수
	////같으면 0, 앞의 값이 작으면 -1, 뒤에값이 작으면 1
	//printf("%d\n", strcmp("A", "A"));
	//printf("%d\n", strcmp("A", "B"));
	//printf("%d\n", strcmp("B", "A"));
	//printf("%d\n", strcmp("Hello", "Hello"));
	//printf("%d\n", strcmp("Banana", "Bananas"));
	//printf("%d\n", strcmp("Bananas", "Banana"));
	////앞의 6글자만 비교
	//printf("%d\n", strncmp("Bananas", "Banana", 6));

	
	////strcpy(), strncpy() : 문자열 깊은 복사, \0는 복사 안함
	//char dest[100] = "";
	//char source[] = "Start programming!";
	//
	////dest 배열변수이므로 포인터 대입 불가능
	////dest = source; //error
	////dest = "Start something!"; //error

	//strcpy(dest, source);
	////Start까지 복사됨
	//strncpy(dest, source, 5);
	//
	////포인터 연산을 이용해서 6번 인덱스 주소부터 문자열 복사함
	////strcpy(dest, source + 6);
	//
	////strcpy(dest, source);
	//
	////포인터 연산을 이용해서 6번 인덱스에 coding를 복사함
	////strcpy(dest + 6, "coding!");
	//puts(dest); //\0이 없으므로 초기화 안된값이 출력됨

	
	////sprintf() : printf 결과를 1번째 인자에 저장 해줌
	//char str[100] = "";
	//int i = 123;
	//double d = 3.14;

	//sprintf(str, "%05d.png%f", i, d);
	//puts(str);


	//W가 시작되는 주소값을 포인터로 반환함
	printf("%s\n", strchr("Hello World", 'W'));

	//ABCDE로 중 하나로 시작되는 부분을 찾아 주소값을 포인터로 반환
	printf("%s\n", strpbrk("Hello World", "ABCDE"));
	
	//abcde로 중 하나로 시작되는 부분을 찾아 주소값을 포인터로 반환
	printf("%s\n", strpbrk("Hello World", "abcde"));
	
	//l이 나타나는 가장 마지막 주소값을 리턴함
	printf("%s\n", strrchr("Hello, World, Hello, World", 'l'));
	
	//문자열이 포함되어 있는지 확인
	printf("%s\n", strstr("Hello World", "wor"));

	//문자열이 포함되어 있는지 확인
	printf("%s\n", strstr("Hello World", "Wor"));




	return 0;
}

void fit_str(char* str, unsigned int size)
{
	if (strlen(str) > size)
		str[size] = '\0';
}