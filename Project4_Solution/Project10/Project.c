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
	//i�� �ּҰ��� �ٷ� �����ؼ� �Է¹��� ���� �Ÿ𸮿� ������
	//unsigned ���� �޸𸮿� �������ٿ��� -���� �ִ� ���̹Ƿ�
	//unsigned i�� ���̳ʽ� ���� ����� 
	//scanf("%i", &i); 
	//printf("%i\n", i);
	
	/* ex04 */
	//unsigned i2;
	//scanf("%u", &i2);
	//printf("%u\n", i2);

	/* ex05 */
	//double d = 0.0;
	//%lf = long flout = double 
	//scanf�� �Է¹��� ���� �ݵ�� %lf�� �޾ƾ� ��
	//scanf("%lf", &d); 
	//������ prinf�� ����Ҷ��� %f�� ��°���
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
	//scanf("%i", &i); //���ڸ� ������ ������ �޸𸮿� ������
	//printf("%i\n", i);


	/* ex09 */
	//intmax_t i;
	//scanf("%ji", &i);
	//printf("%ji", i);

	/* ex10 */
	//int a, b;
	////scanf("%d,%d", &a, &b);//���Խ��� ,�� �Է��������
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
	//int i = scanf("%d%d", &a, &b); //�����۰��� ������
	//printf("%d\n", i);

	/* ex13 */
	//int i = 123;
	//int width = 5;
	//printf("Input width : ");
	//scanf("%d", &width);
	//printf("%*d\n", width, i);


	/* ex14 */
	int i;
	//scanf�� ��ĭ �Ǵ� �ٹٲ��� ã�Ƽ� ���� �޸𸮿� ������
	scanf("%*d%*d%d", &i); //%*�� ������ �ش��Է°��� �ǳ� ��
	printf("Your third input = %d", i);

	return 0;
}