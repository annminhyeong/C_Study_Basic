#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{	
	//10진수만 변환 가능
	//atoi() : 문자열을 int로 변환
	//atof() : 문자열을 double로 변환
	//atol() : 문자열을 long으로 변환

	//if (argc < 3)
	//	printf("Wrong Usage of %s\n", argv[0]);
	//else
	//{
	//	///* example 1 */
	//	//int times = atoi(argv[1]);

	//	//for (int i = 0; i < times; i++)
	//	//	puts(argv[2]);

	//	/* example 2 */
	//	printf("Sum = %d\n", atoi(argv[1]) + atoi(argv[2]));
	//}


	//다양한 진수 변환가능
	//strtol()  : string to long
	//strtoul() : string to unsigned long
	//strtod()  : string to double (10진수만 가능)

	//char str1[] = "1024Hello";
	//char* end;
	////변환할수 없는 문자를 만나면 해당주소를 포인터에 저장
	//long l = strtol(str1, &end, 10);
	//printf("%s %ld %s %d\n", str1, l, end, (int)*end);


	//char str2[] = "10FFHello";
	////변환할수 없는 문자를 만나면 해당주소를 포인터에 저장
	//l = strtol(str2, &end, 16);
	//printf("%s %ld %s %d\n", str2, l, end, (int)*end);

	
	//_itoa() : int to string
	//_ftoa() : float to stirng
	

	char temp[100];

	//10을 16진수로 변환한뒤 문자열로 출력
	puts(_itoa(10, temp, 16));

	sprintf(temp, "%x", 10);
	puts(temp);

	return 0;
}