#include <stdio.h>

//stringizing operator # : #을 붙이면 전처리기에서 문자열로 치환함

#define SQUARE(X) (X)*(X)
#define PRINT_SQR1(x) printf("The square of %d is %d.\n", x, SQUARE(x))
#define PRINT_SQR2(x) printf("The square of " #x " is %d.\n", SQUARE(x)) //#x는 문자열 리터럴로 변환되서 들어감


#define XNAME(n) x ## n
#define PRT_XN(n) printf("x" #n " = %d\n", x ## n);
int main()
{	
	PRINT_SQR1(10);
	PRINT_SQR2(10);
	printf("\n");

	int XNAME(1) = 1; //int x1 = 1;
	int XNAME(2) = 2; //int x2 = 2;

	PRT_XN(1); //printf("x1 " = %d\n", x1);
	PRT_XN(2); //printf("x2 " = %d\n", x2);

	return 0;
}

#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))
#define MIN(X, Y) ((X) < (Y) ? (X) : (Y))
#define ABS(X) ((X) < 0 ? -(X) : (X))