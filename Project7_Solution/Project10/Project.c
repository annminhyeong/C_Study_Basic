#include <stdio.h>


int main()
{	
	
	//for (int i = 0; i < 10; ++i)
	//{
	//	if (i == 5)
	//		continue;
	//
	//	printf("%d ", i);

	//	//if (i != 5)
	//	//	printf("%d ", i);
	//}



	//for (int i = 0; i < 10; ++i)
	//{
	//	if (i == 5)
	//		break;

	//	printf("%d ", i);
	//}
	


	//int count = 0;
	//while (count < 5)
	//{
	//	int c = getchar();
	//	if(c == 'a')
	//		continue;
	//	putchar(c);
	//	count++;
	//}



	//for (int count = 0; count < 10; ++count)
	//{
	//	int c = getchar();
	//	if (c == 'a')
	//		continue;
	//	putchar(c);
	//}



	//while (getchar() != '\n')
	//	continue; //아무기능도 안하는 코드 대신 사용


	//char c;
	//while ((c = getchar()) != '\n')
	//{
	//	if (c == 'a')
	//		continue;
	//	putchar(c);
	//}
	

	
	//char c;
	//while ((c = getchar()) != '.')
	//{
	//	putchar(c);
	//}
	

	//while (1)
	//{
	//	char c = getchar();
	//	
	//	if (c == '.')
	//		break;

	//	putchar(c);
	//}


	for (int i = 0; i < 10; i++) 
	{
		for (int j = 0; j < 10; j++) 
		{
			if (j == 5)
				break;
			printf("(%d %d)", i, j);
		}
		printf("\n");
	}

	return 0;
}