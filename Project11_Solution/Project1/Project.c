#include <stdio.h>

#define MESSAGE "A symbolic string contant"
#define MAXLENGTH 81

int main()
{	
	//배열은 읽기/쓰기가 가능한 메모리를 사용함
	//문자열 리터털은 프로그램의 일부이기 때문에 읽기전용 메모리에 저장함

	char words[MAXLENGTH] = "A string in an array";
	
	//문자열배열의 첫주소만 포인터 변수에 저장함
	const char* pt1 = "A pointer to a string.";

	//puts() 함수는 문자열을 출력해줌
	puts("Puts() adds a newline at the end:");
	puts(MESSAGE);
	
	//문자열이 MAXLENGTH보다 적기때문에 \0뒤에는 초기화가 되지 않아서 warning
	puts(words);
	puts(pt1);
	words[3] = 'p';
	puts(words);
	
	//Runtime Error : 읽기 전용 메모리에 저장된 데이터 값을 바꿀려고 시도해서 에러 발생
	//pt1[8] = 'A'; 

	
	//따옴표를 여러번에 걸쳐 나눠 써도 모든내용을 char배열에 저장함
	//char greeting[50] = "Hello, and How are you today!"; 와 같음
	char greeting[50] = "Hello, and"" How are" " you"
		" today!";
	puts(greeting); //문자열의 길이가 50보다 작아서 \0 뒤가 초기화 되지 않아서 warning

	
	printf("\" To be, or not to  be\" Hamlet said.\n");

	//"are"의 주소는 첫글자 'a'가 저장되어있는 주소값이다
	//*문자열은 첫글자 'e'가 저장된 주소값이 가르키는 값이다.
	printf("%s %p %c\n", "We", "are", *"excellent programmers");


	const char m1[15] = "Love you!";

	for (int i = 0; i < 15; ++i)
		//글자수가 부족해서 \0 뒤가 초기화 되지 않아서 warning
		printf("%d ", (int)m1[i]); 
	printf("\n");

	
	//맨 뒤에 널캐릭터를 수동으로 넣어줘야함
	const char m2[15] = { 'L', 'o', 'v', 'e', ' ', 'y', 'o', 'u', '!', '\0' };
	
	for (int i = 0; i < 15; ++i)
		printf("%d ", (int)m2[i]);
	printf("\n");

	const char m3[] = "Love you, too!";


	int n = 8;
	char cookies[1] = { 'A', };
	char cakes[2 + 5] = { 'A', };
	char pies[2 * sizeof(long double) + 1] = { 'A', };
	//char crumbs[n]; //vs에서는 변수로 배열길이 지정불가

	
	char truth[10] = "Truths is ";
	if (truth == &truth[0]) puts("ture!");
	if (*truth == 'T') puts("ture!");
	if (*(truth + 1) == 'r') puts("ture!");
	if (truth[1] == 'r') puts("ture!");

	return 0;
}