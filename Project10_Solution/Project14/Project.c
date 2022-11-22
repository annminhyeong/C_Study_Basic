#include <stdio.h>

#define ROWS 3
#define COLS 4

//실제로 컴파일러는 배열의 ROWS개수와 COLS개수 명시해서 함수 파라미터에 전달해도
//COLS개수와 ROWS개수를 무시함 (사용할 수 없음)
//함수파라미터로 전달된 배열은 배열의 첫 주소(포인터)임
int sum2d_1(int ar[ROWS][COLS]);
int sum2d_2(int ar[][COLS], int row);
//int sum2d_2(int [][COLS], int row);
//int sum2d_2(int (*ar)[COLS], int row);
int sum2d_3(int* ar, int row, int col);
//int sum2d_3(int*, int, int);

int main()
{
	int data[ROWS][COLS] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 0, 1, 2}
	};

	printf("%d\n", data[2][3]);

	int* ptr = &data[0][0];
	
	//2차원배열은 실제 메로리에는 일차원으로 저장됨
	//2차원배열의 처음주소에 3을 더하면 data[0][3]임
	//거기에 COLS * 2를 더하면 8이므로 data[2][3]임
	printf("%d\n", *(ptr + 3 + COLS * 2));

	printf("Sum of all elements = %d\n", sum2d_1(data));
	printf("Sum of all elements = %d\n", sum2d_2(data, ROWS));
	printf("Sum of all elements = %d\n", sum2d_3(&data[0][0], ROWS, COLS));

	return 0;
}

int sum2d_1(int ar[ROWS][COLS])
{
	int r, c, tot = 0;
	for (r = 0; r < ROWS; r++)
		for (c = 0; c < COLS; c++)
			tot += ar[r][c];
	return tot;
}
int sum2d_2(int ar[][COLS], int row)
{
	int r, c, tot = 0;
	for (r = 0; r < row; r++)
		for (c = 0; c < COLS; c++)
			tot += ar[r][c];
	return tot;
}
int sum2d_3(int* ar, int row, int col) 
{
	int r, c, tot = 0;
	for (r = 0; r < row; r++)
		for (c = 0; c < col; c++)
			//tot += ar[c + col * r];
			//+ c는 열증가, col * r는 행증가
			tot += *(ar + c + col * r);
	return tot;
}