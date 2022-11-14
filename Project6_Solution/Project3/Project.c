#include <stdio.h>
#include <math.h>


int main()
{	
	//int n = 0;
	//while (n++ < 5)
	//	printf("%d", n);
	//printf("\n");


	//char c = 'A';
	//while (c != 'Z')
	//	printf("%c", c++);


	const double PI = 3.1415926535897932384626433832795;
	double guess = 0.0;

	printf("Input PI :");
	scanf("%lf", &guess);
	//while (guess != PI)
	//fabs는 :절대값 함수
	while (fabs(guess - PI) > 0.001)
	{
		printf("Fool! Try again.\n");
		scanf("%lf", &guess);
	}
	printf("Good!\n");
	


	return 0;
}