#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{	
	//10������ ��ȯ ����
	//atoi() : ���ڿ��� int�� ��ȯ
	//atof() : ���ڿ��� double�� ��ȯ
	//atol() : ���ڿ��� long���� ��ȯ

	//if (argc < 3)
	//	printf("Wrong Usage of %s\n", argv[0]);
	//else
	//{
	//	///* example 1 */
	//	//int times = atoi(argv[1]);

	//	//for (int i = 0; i < times; i++)
	//	//	puts(argv[2]);

	//	/* example 2 */
	//	printf("Sum = %d\n", atoi(argv[1]) + atoi(argv[2]));
	//}


	//�پ��� ���� ��ȯ����
	//strtol()  : string to long
	//strtoul() : string to unsigned long
	//strtod()  : string to double (10������ ����)

	//char str1[] = "1024Hello";
	//char* end;
	////��ȯ�Ҽ� ���� ���ڸ� ������ �ش��ּҸ� �����Ϳ� ����
	//long l = strtol(str1, &end, 10);
	//printf("%s %ld %s %d\n", str1, l, end, (int)*end);


	//char str2[] = "10FFHello";
	////��ȯ�Ҽ� ���� ���ڸ� ������ �ش��ּҸ� �����Ϳ� ����
	//l = strtol(str2, &end, 16);
	//printf("%s %ld %s %d\n", str2, l, end, (int)*end);

	
	//_itoa() : int to string
	//_ftoa() : float to stirng
	

	char temp[100];

	//10�� 16������ ��ȯ�ѵ� ���ڿ��� ���
	puts(_itoa(10, temp, 16));

	sprintf(temp, "%x", 10);
	puts(temp);

	return 0;
}