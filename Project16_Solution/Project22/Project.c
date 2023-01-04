#include <stdio.h>
#include <string.h>
#include <stdarg.h> //Variable Arguments


double average(int, ...);
double average2(char* format_string, ...);

int main()
{	
	double a, b;
	
	//a = average(3, 1.1, 2.2, 3.3);
	//b = average(6, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6);
	a = average2("d", 1.1, 2.2, 3.3);
	b = average2("ddd", 1.1, 2.2, 3.3, 4.4, 5.5, 6.6);

	printf("%lf\n%lf\n", a, b);

	return 0;
}

//가변인자는 맨 뒤에 와야 함
double average(int num, ...)
{
	va_list ap;
	double sum = 0.0;
	//첫번째 인자에는 va_list 타입의 변수를 두번째 인자에는 가변인자 앞에 있는 마지막 파라미터를 입력
	va_start(ap, num);
	for (int i = 0; i < num; i++)
		sum += va_arg(ap, double); //가변인자로 들어오는 타입 명시하기
	va_end(ap);
	return sum / (double)num;
}

double average2(char* format_string, ...)
{
	int num = strlen(format_string);

	va_list ap;
	double sum = 0.0;
	int i;
	
	va_start(ap, format_string);
	for (i = 0; i < num; i++)
		sum += va_arg(ap, double);
	va_end(ap);

	return sum / (double)num;
}