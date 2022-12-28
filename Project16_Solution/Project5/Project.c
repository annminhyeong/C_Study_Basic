#include <stdio.h>
#include <math.h>


//가변 인수 메크로 (...)
#define PRINT(X, ...) printf("Message " #X ": " __VA_ARGS__);
//... : ellipes
//__VA_ARGS__ : one of the predefined macros

int main()
{	
	double x = 48;
	double y;

	y = sqrt(x);
	PRINT(1, "x = %g\n", x);
	printf("Message " "1" ": " "x = %g\n", x);

	PRINT(2, "x = %.2f, y = %.4f\n", x, y);
	printf("Message " "2" ": " "x = %.2f, y = %.4f\n", x, y);
	return 0;
}