#include <stdio.h>

#define ROWS 3
#define COLS 4

//������ �����Ϸ��� �迭�� ROWS������ COLS���� ����ؼ� �Լ� �Ķ���Ϳ� �����ص�
//COLS������ ROWS������ ������ (����� �� ����)
//�Լ��Ķ���ͷ� ���޵� �迭�� �迭�� ù �ּ�(������)��
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
	
	//2�����迭�� ���� �޷θ����� ���������� �����
	//2�����迭�� ó���ּҿ� 3�� ���ϸ� data[0][3]��
	//�ű⿡ COLS * 2�� ���ϸ� 8�̹Ƿ� data[2][3]��
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
			//+ c�� ������, col * r�� ������
			tot += *(ar + c + col * r);
	return tot;
}