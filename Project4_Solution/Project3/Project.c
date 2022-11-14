#include <stdio.h>


int main()
{	
	/* 1. 숫자배열 */
	int a = 1;
	int int_arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);
	//printf("%i\n", int_arr[10]);

	/* 2. 문자배열 */
	char c = 'a';
	char str1[10] = "Hello";
	char str2[10] = { 'H', 'i' };

	printf("%c\n", c);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%hhi %hhi %hhi %hhi %hhi\n", str2[0], str2[1], str2[2], str2[3], str2[4]);

	//배열넘침
	//char str3[10] = "Hello, World";

	//null character만나면 뒤에 값 출력안함
	char str3[20] = "Hello, \0World";
	printf("%s\n", str3);
	printf("%c\n", str3[10]);


	return 0;
}