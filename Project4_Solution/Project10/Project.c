#include <stdio.h>
#include <inttypes.h>

int main()
{	
	/* ex01 */
	//int i;
	//float f;
	//char str[30];
	//scanf("%d %f %s", &i, &f, str);
	//printf("%d %f %s\n", i, f, str);


	/* ex02 */
	//char c;
	//scanf("%c", &c);
	//printf("%i\n", c);


	/* ex03 */
	//unsigned i;
	//i에 주소값에 바로 접근해서 입력받은 값을 매모리에 저장함
	//unsigned 여도 메모리에 직접접근에서 -값을 넣는 것이므로
	//unsigned i에 마이너스 값이 저장됨 
	//scanf("%i", &i); 
	//printf("%i\n", i);
	
	/* ex04 */
	//unsigned i2;
	//scanf("%u", &i2);
	//printf("%u\n", i2);

	/* ex05 */
	//double d = 0.0;
	//%lf = long flout = double 
	//scanf로 입력받을 때는 반드시 %lf로 받아야 함
	//scanf("%lf", &d); 
	//하지만 prinf로 출력할때는 %f로 출력가능
	//printf("%f\n", d);

	/* ex06 */
	//char str[30];
	//scanf("%5s", str);
	//printf("%s\n", str);

	/* ex07 */
	//char i;
	//scanf("%hhd", &i);
	//printf("%i\n", i);

	/* ex08 */
	//int i;
	//scanf("%i", &i); //문자를 만나기 전까지 메모리에 저장함
	//printf("%i\n", i);


	/* ex09 */
	//intmax_t i;
	//scanf("%ji", &i);
	//printf("%ji", i);

	/* ex10 */
	//int a, b;
	////scanf("%d,%d", &a, &b);//정규식임 ,를 입력해줘야함
	////scanf("%d ,%d", &a, &b);
	////scanf("%d, %d", &a, &b);
	////scanf("%d-%d", &a, &b);
	////scanf("%dA%d", &a, &b);
	//
	//printf("%d %d\n", a, b);

	/* ex11 */
	//int a, b;
	//char c;
	//scanf("%d%c%d", &a, &c, &b);
	//printf("%d|%c|%d", a, c, b);


	/* ex12 */
	//int a, b;
	//int i = scanf("%d%d", &a, &b); //아이템개수 리턴함
	//printf("%d\n", i);

	/* ex13 */
	//int i = 123;
	//int width = 5;
	//printf("Input width : ");
	//scanf("%d", &width);
	//printf("%*d\n", width, i);


	/* ex14 */
	int i;
	//scanf는 빈칸 또는 줄바꿈을 찾아서 값을 메모리에 저장함
	scanf("%*d%*d%d", &i); //%*이 붙으면 해당입력값은 건너 뜀
	printf("Your third input = %d", i);

	return 0;
}