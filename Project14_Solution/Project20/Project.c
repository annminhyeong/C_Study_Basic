#include <stdio.h>

//열거형이 생긴이유
int c = 0; // red : 0, orange : 1, yellow : 2, green : 3, ...

//if (c == 0)
//	printf("red");
//else if (c == 1)
//	printf("orange");
//else if (c == 1)
//	printf("yellow");
//else
//	printf("green");

int main()
{	
	//열거형 : 정수형 상수에게 기호적인 이름을 붙여주는 것
	enum spectrum { red, orange, yellow, green, blue, violet };
	//               0      1      2       3     4       5

	
	enum spectrum color;
	color = blue;

	if (color == yellow)
		printf("yellow\n");

	for (color = red; color <= violet; color++) //c++에서는 열거형에서 증감연산자 지원안함
		printf("%d\n", color);

	printf("red = %d, orange = %d\n", red, orange);

	
	enum kids { jackjack, dash, snoopy, nano, pitz };
	enum kids my_kid = nano;
	printf("nano %d %d\n", my_kid, nano);


	enum levels { low = 100, medium = 500, high = 1000 };
	
	int score = 800;

	if (score > high)
		printf("High score!\n");
	else if (score > medium)
		printf("Good job\n");
	else if (score > low)
		printf("Not bad\n");
	else
		printf("Do your best\n");


	enum pet { cat, dog = 10, lion, tiger };
	printf("%d\n", cat);
	printf("%d\n", lion);

	return 0;
}