#include <stdio.h>
#include <limits.h>

int main()
{	
	printf("%10i\n", 1234567);
	printf("%-10i\n", 1234567);
	printf("%+i %+i\n", 123, -123);
	printf("% i \n% i\n", 123, -123); //플러스일때 빈칸, 마이너스일때 -
	printf("%X\n", 17);
	printf("%#X\n", 17);
	printf("%05i\n", 123);
	printf("%*i\n", 7, 456); //*자리에 7이들어감 -> %7i랑 같은 의미


	printf("\nPrecision\n");
	printf("%.3d\n", 1024);
	printf("%.5d\n", 1024);
	printf("%.3f\n", 123456.1234567); //소수점 이하 3자리 출력
	printf("%.3f\n", 123456.1235); //소수점 이하 3자리 반올림 후 출력
	printf("%10.3f\n", 123.45678); //10 : 정수부+실수부 자릿수, .3f이므로 소수부 반올림후 3자리 출력
	printf("%010.3f\n", 123.45678); //위에와 동일, 추가로 빈칸을 0으로 채움
	printf("%.5s\n", "ABCDEFGHIJKLMN"); //5글자로 개수 제한
	printf("%.s\n", "ABCDEFGHIJKLMN"); //%.s는 %0.s와 같으므로 출력안됨


	printf("\nLength\n");
	printf("%hhd %hd %d\n", 257, 257, 257);
	printf("%d %ld %lld\n", INT_MAX + 1, INT_MAX + 1, 2147483648LL);
	return 0;
}