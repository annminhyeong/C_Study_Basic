#include <stdio.h>
#include <float.h>
#include <math.h>

int main()
{	
	//round-off error (ex1)
	float a, b;
	a = 1.0E20f + 1.0f;
	b = a - 1.0E20f;

	printf("%f\n", b);

	//round-off error (ex2)
	float c = 0.0f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;
	c = c + 0.01f;

	printf("%f\n", c);


	//overflow
	float max = 3.402823466e+38F;
	printf("%f\n", max);
	max = max * 100.0f;
	printf("%f\n", max);


	//underflow
	float f = 1.401298464e-45F;
	printf("%e\n", f);
	f = f / 2.0;
	printf("%e\n", f);


	//
	float f2 = 104.0f;
	printf("%f\n", f2);
	f2 = f2 / 0.0;
	printf("%f\n", f2);


	//
	float f3 = asinf(1.0f);
	printf("%f\n", f3);

	f3 = asinf(2.0f);
	printf("%f\n", f3);

	return 0;
}