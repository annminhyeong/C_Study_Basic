#include <stdio.h>


int main()
{	
	int i;
	
	//i = 0;
	//while (i < 5)
	//	printf("Hi!\n", i);
	

	//i = 1;
	//while (--i < 5)
	//	printf("Hi!\n");
	

	//i = 1;
	//while (i < 5)
	//{
	//	printf("i before = %d\n", i);
	//	i++;
	//	printf("i after = %d\n", i);
	//}


	//i = 10;
	//while (i++ < 5)
	//{
	//	printf("Hi!\n");
	//}
	

	/* Common mistake */
	//i = 0;
	//while (i < 3)
	//	printf("%i\n", i);
	//	i++;
	
	
	//i = 0;
	//while (i++ < 3);
	//	printf("%i\n", i);

	
	//숫자인 값 입력받기
	while (scanf("%d", &i) == 1);
	return 0;
}