#include <stdio.h>
#include <time.h>


int main()
{	
	typedef unsigned char BYTE;

	BYTE x, y[10] = { 0, }, * z = &x;
	
	{
		typedef unsigned char byte;

		size_t s = sizeof(byte); //unsigned int (x86), : unsigned long long (x64)

	}

	time_t t = time(NULL);
	printf("%lld\n", t);

	typedef char* STRING;
	STRING name = "John Wick", sign = "World";

	typedef struct complex
	{
		float real;
		float imag;
	} COMPLEX;
	
	typedef struct { double width; double height; } rect;

	rect r1 = { 1.1, 2.2 };
	rect r2 = r1;
	printf("%f %f\n", r2.width, r2.height);

	return 0;
}