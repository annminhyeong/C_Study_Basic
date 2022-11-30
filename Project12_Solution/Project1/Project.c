#include <stdio.h>


int main()
{	
	//object : 메모리공간 (주소값)
	//Identifiers : 식별자 (값)

	int var_name = 3;

	int* pt = &var_name;
	*pt = 1;

	int arr[100];
	arr[0] = 7;

	
	//변수이름은 메모리공간이 아님
	//변수가 내부적으로 가리키고 있는 메모리공간에 값을 복사함
	var_name = 3;
	int temp = var_name;
	temp = 1 + 2;

	
	//L-value : 메모리 공간을 가지고 있어서 값을 대입할 수 있다
	//R-value : 값, 변수가 오른쪽에 있으면 값으로 사용됨
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