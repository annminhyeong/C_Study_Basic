#include <stdio.h>
#include <stdlib.h>

//int형 반환자료형은 생략가능
//int int_min(int, int);
int_min(int, int);

//int형 반환자료형은 생략가능
//int main()
main()
{	
	int i1, i2;

	while (1)
	{
		printf("Input two integers : ");
		if (scanf("%d %d", &i1, &i2) != 2) break;

		int lesser = int_min(i1, i2);
		printf("The lesser of %d and %d is %d\n", i1, i2, lesser);
	}
	printf("End.\n");
	return 0;
}

//int형 반환자료형은 생략가능
//int int_min(int, int);
int_min(int i, int j)
{
	//int min;

	//if (i < j)
	//	min = i;
	//else
	//	min = j;
	//
	//return min;

	if (i < j)
		return i;
	else
		return j;
	
	printf("Error");
	exit(1);
}