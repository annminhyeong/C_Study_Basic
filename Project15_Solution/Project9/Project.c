#include <stdio.h>
#include <limits.h> //CHAR_BIT
#include <stdbool.h>

void char_to_binary(unsigned char uc)
{
	const int bits = CHAR_BIT * sizeof(unsigned char);
	for (int i = bits - 1; i >= 0; i--)
		printf("%d", (uc >> i) & 1);
}

void print_binary(char* data, int bytes)
{
	for (int i = 0; i < bytes; ++i)
		char_to_binary(data[bytes - 1 - i]);
	printf("\n");
}

int main()
{
	struct
	{
		//unsigned long long에서 패딩이 일어나  비트필드에 집어넣기 위해서 16byte를 할당함
		bool option1 : 1;
		unsigned long long         : 0; //메모리를 더 할당받고 싶을 때 사용
		bool option2 : 1;
		//unsigned long long option3 : 1; //8byte
	} bbf;

	//memset((char*)&bbf, 0x00, sizeof(bbf));
	//print_binary((char*)&bbf, sizeof(bbf));
	//bbf.option1 = 1;
	//bbf.option2 = 1;
	//bbf.option3 = 1;
	//print_binary((char*)&bbf, sizeof(bbf));
	printf("%zu bytes\n", sizeof(bbf));

	struct
	{
		//자료형에 따라서 비트필드의 크기가 지정됨
		unsigned short option1 : 1;
		unsigned short option2 : 1;
		unsigned short option3 : 1;
	} usbf;
	
	printf("%zu bytes\n", sizeof(usbf));

	struct
	{
		//크기는 1bit이지만 unsigned int 처럼 해석해서 4byte로 출력됨
		unsigned int option1 : 1;
		unsigned int option2 : 1;
	} uibf;

	printf("%zu bytes\n", sizeof(uibf));


	return 0;
}