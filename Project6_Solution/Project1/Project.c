#include <stdio.h>


int main()
{	
	int num, sum = 0;

	printf("Enter an integer (q to quit) : ");
	
	//scanf에 정수가 입력되면 리턴값으로 매개변수 개수 1개가 입력됨
	//문자가 입력되면 리턴값 은 0이됨
	while (scanf("%d", &num) == 1)
	{
		sum = sum + num;
		printf("Enter next integer (q to quit) : ");
	}

	printf("Sum = %d\n", sum);



	return 0;
}