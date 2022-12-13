#include <stdio.h>
#include <stdlib.h>

struct my_data
{
	int a;
	char c;
	float arr[2];
};

int main()
{	
	struct my_data d1 = { 1234, 'a', };

	d1.arr[0] = 1.1f;
	d1.arr[1] = 2.2f;

	printf("%d %c %lld\n", d1.a, d1.c, (long long)d1.arr);
	printf("%f %f\n", d1.arr[0], d1.arr[1]);
	printf("%lld %lld\n\n", (long long)&d1.arr[0], (long long)&d1.arr[1]);

	//구조체는 다른 구조체를 대입하면 값이 깊은복사가 됨
	struct my_data d2 = d1;
	
	printf("%d %c %lld\n", d2.a, d2.c, (long long)d2.arr);
	printf("%f %f\n", d2.arr[0], d2.arr[1]);
	printf("%lld %lld\n\n", (long long)&d2.arr[0], (long long)&d2.arr[1]);
	return 0;
}