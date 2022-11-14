#include <stdio.h>
#include <limits.h>

int main()
{	
	printf("%10i\n", 1234567);
	printf("%-10i\n", 1234567);
	printf("%+i %+i\n", 123, -123);
	printf("% i \n% i\n", 123, -123); //�÷����϶� ��ĭ, ���̳ʽ��϶� -
	printf("%X\n", 17);
	printf("%#X\n", 17);
	printf("%05i\n", 123);
	printf("%*i\n", 7, 456); //*�ڸ��� 7�̵� -> %7i�� ���� �ǹ�


	printf("\nPrecision\n");
	printf("%.3d\n", 1024);
	printf("%.5d\n", 1024);
	printf("%.3f\n", 123456.1234567); //�Ҽ��� ���� 3�ڸ� ���
	printf("%.3f\n", 123456.1235); //�Ҽ��� ���� 3�ڸ� �ݿø� �� ���
	printf("%10.3f\n", 123.45678); //10 : ������+�Ǽ��� �ڸ���, .3f�̹Ƿ� �Ҽ��� �ݿø��� 3�ڸ� ���
	printf("%010.3f\n", 123.45678); //������ ����, �߰��� ��ĭ�� 0���� ä��
	printf("%.5s\n", "ABCDEFGHIJKLMN"); //5���ڷ� ���� ����
	printf("%.s\n", "ABCDEFGHIJKLMN"); //%.s�� %0.s�� �����Ƿ� ��¾ȵ�


	printf("\nLength\n");
	printf("%hhd %hd %d\n", 257, 257, 257);
	printf("%d %ld %lld\n", INT_MAX + 1, INT_MAX + 1, 2147483648LL);
	return 0;
}