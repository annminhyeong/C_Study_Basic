#include <stdio.h>


int main()
{	
	//문자열 배열 만드는 법
	const char* mythings[5] = {
		"Dancing in the rain",
		"Couting Apple",
		"Watching movie with friend",
		"Writing sad letters",
		"Studying the C language",
	};

	char yourthings[5][40] = {
		"Studying the C++ language",
		"Eating",
		"Watching Netflix",
		"Walking around till dark",
		"Deleting spam email",
	};

	const char* temp1 = "Dancing in the rain";
	const char* temp2 = "Studying the C++ language";

	//mythings는 포인터로 가리키고 있기만 하기때문에 주소가 같음
	printf("%s %llu %llu\n", mythings[0], (unsigned long long)mythings[0], (unsigned long long)temp1);
	//yourthings는 스택에 문자열을 저장했기 때문에 주소가 같지 않음
	printf("%s %llu %llu\n", yourthings[0], (unsigned long long)yourthings[0], (unsigned long long)temp2);
	printf("\n");


	printf("%-30s %-30s\n", "My Things:", "Your Things:");
	for (int i = 0; i < 5; i++)
		printf("%-30s %-30s\n", mythings[i], yourthings[i]);

	//mythings : 8byte 포인터 5개, yourthings : 40 * 5
	printf("\nsizeof mythings: %zd, sizeof your yourthings: %zd\n",
		sizeof(mythings), sizeof(yourthings));


	//2차원배열도 결국 1차원배열 형태로 저장되므로 인덱스를 넘어가면 다음값이 출력됨
	for (int i = 0; i < 100; i++)
		printf("%c", mythings[0][i]);
	printf("\n");
	printf("\n");


	for (int i = 0; i < 200; i++)
		printf("%d", (int)yourthings[0][i]);
	printf("\n");
	printf("\n");


	for (int i = 0; i < 200; i++)
		printf("%c", yourthings[0][i]);
	printf("\n");
	printf("\n");


	return 0;
}