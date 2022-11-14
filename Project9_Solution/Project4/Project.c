#include <stdio.h>


//전역변수
//int a; 

int int_max(int i, int j);

int int_max(int i, int j)
{
	int m;
	m = i > j ? i : j;
	return m;
}

int main()
{	
	int a;

	a = int_max(1, 2);

	printf("%d\n", a);
	printf("%p\n", &a);

	{
		//int a;
		a = int_max(4, 5);

		printf("%d\n", a);
		printf("%p\n", &a);
		
		int b = 123;
	}

	//b = 456;

	printf("%d\n", a);
	printf("%p\n", &a);


	return 0;
}