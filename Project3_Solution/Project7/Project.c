#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{	
	int i;
	int32_t i32; //32��Ʈ ����
	int_least8_t i8; //��� 8��Ʈ�� ���� �ִ� ����
	int_fast8_t f8; //8��Ʈ �߿��� ������� ����
	intmax_t imax; //���� ��Ʈ���� ���� ��ȣ�ִ� ����
	uintmax_t uimax; //���� ��Ʈ���� ���� ��ȣ���� ����

	i32 = 1004;

	printf("me32 = %d\n", i32);
	printf("me32 = %" "d" "\n", i32);
	printf("me32 = %" PRId32 "\n", i32);

	return 0;
}