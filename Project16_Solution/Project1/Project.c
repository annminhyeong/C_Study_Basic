#include <stdio.h>


int main()
{	
	/*
		Trigraph          Replacement
		??=               #
		??/               \
		??'               ^
		??(               [
		??)               ]
		??!               |
		??<               {
		??>               }
		??-               ~
	*/
	puts("안녕하세요? 한글을 사랑합니다.\n");
	int arr[3] = { 1, 2, 3 };

	//printf("arr??(0??) == %d\n", arr??(0??));
	//printf("arr[0] == %d\n", arr[0]);

	/*
		Digraph          Equivalent
		<:               [
		:>               ]
		<%               {
		%>               }
		%:               #
	*/

	printf("arr<:1:> == %d\n", arr<:1:>);
	//printf("arr[1] == %d\n", arr[1]);

	// \로 코드의 가독성을 높일 수 있음 
	printf("This is very very very very very very \
very very long long long long long long line.\n");

	//주석은 space로 취급됨
	int/*a variable to count a number*/n = 1;
	//int n = 1;
	return 0;
}