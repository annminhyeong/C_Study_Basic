#include <stdio.h>

//아래있는 함수 위로 끌어 올리기
void draw(int n);

int main()
{	
	int i = 5;
	char c = '#';
	float f = 7.1f;


	draw(i);
	draw((int)c);
	draw((int)f);

	return 0;
}

void draw(int n) {
	int i = 0;
	while (n-- > 0)
		printf("*");
	printf("\n");
}