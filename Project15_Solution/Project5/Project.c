#include <stdio.h>

#define CHAR_BIT 8

void int_binary(const int num);

int main()
{	
	//비트를 통째로 이동
	printf("%hhd\n", 1 << 3); //00000001 -> 00001000 (1 * 2^3)
	printf("%hhd\n", 8 >> 1); //00001000 -> 00000100 (8 / 2^1)

	//signed 인 경우에 부호비트가 1인경우에는 right shift 하면 빈자리를 1로 채움
	printf("%hhd\n", -119 >> 3); //10001001 -> 11110001 (-15)
	//unsigned int는 빈자리를 0으로 채움
	printf("%hhu\n",  137 >> 3); //10001001 -> 00010001 (17)

	printf("%hhd\n", -119 << 4); //10001001 -> 10010000 (-112)
	printf("%hhu\n",  137 << 4); //10001001 -> 10010000 (144)

	int a = 1;
	a <<= 3;
	a >>= 2;

	printf("Unsigned int %u\n", 0xffffffff);
	printf("Signed int %d\n", 0xffffffff);
	int_binary(0xffffffff);
	printf("Right shift by 3\n");
	int_binary((signed)0xffffffff >> 3);
	int_binary((unsigned)0xffffffff >> 3);

	printf("\nUnsigned int %u\n", 0x00ffffff);
	printf("\nSigned int %u\n", 0x00ffffff);
	int_binary(0x00ffffff);
	printf("Right shift by 3\n");
	int_binary((signed)0x00ffffff >> 3);
	int_binary((unsigned)0x00ffffff >> 3);

	return 0;
}

void int_binary(const int num)
{
	printf("Decimal %12d == Binary ", num);
	const size_t bits = sizeof(num) * CHAR_BIT;
	for (size_t i = 0; i < bits; ++i)
	{
		const int mask = 1 << (bits - 1 - i);
		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	}
	printf("\n");
}