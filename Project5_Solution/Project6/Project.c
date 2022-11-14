#include <stdio.h>


int main()
{	
	/* ex01 */
	//int a = 0;
	//a++;
	//printf("%d\n", a);

	//++a;
	//printf("%d\n", a);

	/* ex02 */
	//double b = 0;
	//b++;
	//printf("%lf\n", b);

	//++b;
	//printf("%lf\n", b);

	/* ex03 */
	//int count = 0;

	//while (count < 10)
	//{
	//	printf("%d ", count++);
	//	//++count;
	//}

	
	/* ex04 */
	//int i = 1, j = 1;
	//int i_post, pre_j;

	//i_post = i++;
	//pre_j = ++j;

	//printf("%d %d\n", i, j);
	//printf("%d %d\n", i_post, pre_j);


	
	/* ex05 */
	//int i = 3;
	//int l = 2 * --i;
	//printf("%d %d\n", i, l);

	//i = 1;
	//l = 2 * i--;
	//printf("%d %d\n", i, l);


	/* ex06 */
	//int x, y, z;
	//x = 3, y = 4;
	//z = (x + y++) * 5;
	//printf("%d %d %d\n", x, y, z);


	/* ex07 */
	//int x = 1, y = 1, z;
	//z = x * y++;


	/* ex08 */
	//안 좋은 방식
	int n = 1; //1 1, 16, 7
	printf("%d %d", n, n * n++);
	int x = n / 2 + 5 * (1 + n++);
	int y = n++ + n++;

	return 0;
}