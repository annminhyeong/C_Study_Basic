#include <stdio.h>
#include <stdlib.h>


void test_function()
{
	int j;
	printf("Stack high \t%llu\n", (unsigned long long) & j);
}

int main()
{	
	//포인터로 문자열 리터럴을 저장하면 첫 문자를 읽기 전용 메모리에 저장함
	//따라서 문자열 수정 불가능
	//포인터로 문자열 리터럴을 저장할 때 문자열 리터럴이 같으면 메모리 주소가 같음

	const char* pt2 = "I am a string!.";
	const char* pt3 = "I am a string!.";
	const char* pt4 = "I am a string!!!!!!.";
	
	const char ar1[] = "I am a string!.";
	const char ar2[] = "I am a string!.";
	const char ar3[] = "I am a string!!.";

	printf("rodata memory low \t%llu %llu %llu %llu\n",
		(unsigned long long)pt2, (unsigned long long)pt3, (unsigned long long)pt4,
		(unsigned long long)"I am a string!.");

	printf("Stack memory high \t%llu %llu %llu\n", (unsigned long long)ar1,
		(unsigned long long)ar2, (unsigned long long)ar3);

	printf("Stack high \t%llu %llu %llu\n",
		(unsigned long long)&pt2, (unsigned long long)&pt3, (unsigned long long)&pt4);

	int i;
	printf("Stack high \t%llu\n", (unsigned long long)&i);

	test_function();

	char* p5 = (char*)malloc(sizeof(char) * 100);
	printf("Heap middle \t%llu\n", (unsigned long long)p5);

	char* p6 = (char*)malloc(sizeof(char) * 100);
	printf("Heap middle \t%llu\n", (unsigned long long)p6);

	
	//ar1은 포인터의 이름이 아니라 배열의 이름이므로 증가연산자 불가능
	//ar1++;
	
	pt2++;
	//puts()는 문자열을 출력해줌 맨 끝에 \n이 자동으로 붙음
	puts(pt2); 

	char heart[] = "I love Kelly!";
	const char* head = "I love Helly!";

	for (int i = 0; i < 6; i++)
		putchar(heart[i]);
	putchar('\n');

	for (int i = 0; i < 6; i++)
		putchar(head[i]);
	putchar('\n');

	for (int i = 0; i < 6; i++)
		putchar(*(head + i));
	putchar('\n');

	while (*(head) != '\0')
		putchar(*(head++));

	
	//head는 포인터에 heart는 배열이름(배열의 첫주소)를 저장
	head = heart;
	
	//heart는 포인터가 아니기때문에 주소값 저장불가
	//heart = head; 

	heart[7] = 'H';
	*(heart + 7) = 'K';
	putchar('\n');

	//문자열 리터럴을 포인터에 저장하면 읽기 전용 메모리 주소에 저장됨
	char* word = "Goggle";

	//런타임에러 : 읽기 전용 메모리에 저장되어있는 값을 수정 시도해서 발생 
	//word[2] = '0';
	puts(word); 

	const char* str1 = "When all the lights are low, ...";
	const char* copy;

	copy = str1;

	printf("%s %p %p\n", str1, str1, &str1);
	printf("%s %p %p\n", copy, copy, &copy);

	return 0;
}