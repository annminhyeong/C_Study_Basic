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
		//unsigned long long���� �е��� �Ͼ  ��Ʈ�ʵ忡 ����ֱ� ���ؼ� 16byte�� �Ҵ���
		bool option1 : 1;
		unsigned long long         : 0; //�޸𸮸� �� �Ҵ�ް� ���� �� ���
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
		//�ڷ����� ���� ��Ʈ�ʵ��� ũ�Ⱑ ������
		unsigned short option1 : 1;
		unsigned short option2 : 1;
		unsigned short option3 : 1;
	} usbf;
	
	printf("%zu bytes\n", sizeof(usbf));

	struct
	{
		//ũ��� 1bit������ unsigned int ó�� �ؼ��ؼ� 4byte�� ��µ�
		unsigned int option1 : 1;
		unsigned int option2 : 1;
	} uibf;

	printf("%zu bytes\n", sizeof(uibf));


	return 0;
}