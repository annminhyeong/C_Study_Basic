#include <stdio.h>


int main()
{	
	//for (int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n)
	//	printf("%d %d\n", n, nsqr);


	//int i, j;
	//i = 1;
	//i++, j = i;
	//printf("%d %d\n", i, j);


	//int x, y, z;
	//z = x = 1, y = 2;
	//printf("x=%d, y=%d, z=%d\n", x, y, z);

	//z = (x = 1), (y = 2);
	//printf("x=%d, y=%d, z=%d\n", x, y, z);

	////, 연산자는 제일 오른쪽 값을 변수에 대입해줌 (1, 2) 이므로 z = 2
	//z = ((x = 1), (y = 2));
	//printf("x=%d, y=%d, z=%d\n", x, y, z);



	//int my_money = 123,456; //error
	int my_money = (123, 456);
	printf("%d\n", my_money);


	return 0;
}