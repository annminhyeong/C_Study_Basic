#include <stdio.h>


int main()
{	
	//object : �޸𸮰��� (�ּҰ�)
	//Identifiers : �ĺ��� (��)

	int var_name = 3;

	int* pt = &var_name;
	*pt = 1;

	int arr[100];
	arr[0] = 7;

	
	//�����̸��� �޸𸮰����� �ƴ�
	//������ ���������� ����Ű�� �ִ� �޸𸮰����� ���� ������
	var_name = 3;
	int temp = var_name;
	temp = 1 + 2;

	
	//L-value : �޸� ������ ������ �־ ���� ������ �� �ִ�
	//R-value : ��, ������ �����ʿ� ������ ������ ����
	pt = &var_name;
	int* ptr = arr;
	*pt = 7;


	int* ptr2 = arr + 2 * var_name;
	*(arr + 2 * var_name) = 456;


	const char* str = "Constant String";
	str = "Second String";
	//str[0] = 'A'; //error
	//puts(str);


	char str2[] = "String in an Array";
	str2[0] = 'A';
	puts(str2);


	return 0;
}