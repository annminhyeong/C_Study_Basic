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
	puts("�ȳ��ϼ���? �ѱ��� ����մϴ�.\n");
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

	// \�� �ڵ��� �������� ���� �� ���� 
	printf("This is very very very very very very \
very very long long long long long long line.\n");

	//�ּ��� space�� ��޵�
	int/*a variable to count a number*/n = 1;
	//int n = 1;
	return 0;
}