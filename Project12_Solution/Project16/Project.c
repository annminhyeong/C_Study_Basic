#include <stdio.h>
#include <stdlib.h>

int main()
{
	////�����Ҵ� �޸� ����ó�� ���
	//int* ptr = NULL;

	//ptr = (int*)malloc(sizeof(int) * 1);

	////if(ptr == null) exit(1);
	//if (!ptr) exit(1);

	//*ptr = 1024 * 3;
	//printf("%d\n", *ptr);

	//free(ptr);
	//ptr = NULL;


	////�����Ҵ� �޸� 1���� �迭ó�� ���
	//int n = 3;
	//int* ptr = (int*)malloc(sizeof(int) * n);

	//ptr[0] = 123;
	//*(ptr + 1) = 456;
	//*(ptr + 2) = 789;

	//free(ptr);
	//ptr = NULL;


	////�����Ҵ� �޸� 2���� �迭ó�� ���
	//int row = 3, col = 2;
	//int(*ptr2d)[2] = (int(*)[2])malloc(sizeof(int) * row * col);
	//
	////vs���� VLA ���� ������
	////int(*ptr2d)[col] = (int(*)[2])malloc(sizeof(int) * row * col);

	//if (!ptr2d) exit(1);

	//for (int r = 0; r < row; r++)
	//	for (int c = 0; c < col; c++)
	//		ptr2d[r][c] = c + col * r;

	//for (int r = 0; r < row; r++)
	//{
	//	for (int c = 0; c < col; c++)
	//		printf("%d ", ptr2d[r][c]);
	//	printf("\n");
	//}


	////�����Ҵ� �޸� 2�����迭�� 1�����迭ó�� ���
	////�ε��� ��Ģ = c + col * r
	//int row = 3, col = 2;
	//int* ptr = (int*)malloc(sizeof(int) * row * col);
	//if (!ptr) exit(1);

	//for (int r = 0; r < row; r++)
	//	for (int c = 0; c < col; c++)
	//		ptr[c + col * r] = c + col * r;


	//for (int r = 0; r < row; r++)
	//{
	//	for (int c = 0; c < col; c++)
	//		printf("%d ", *(ptr + c + col * r));
	//	printf("\n");
	//}


	//�����Ҵ� �޸� 3�����迭�� 1�����迭 ó�� ��� (row, col, depth)
	//�ε��� ��Ģ = c + col * r + (col + row) * d
	int row = 3, col = 2, depth = 2;
	int* ptr = (int*)malloc(row * col * depth * sizeof(int));
	if (!ptr) exit(1);

	for (int d = 0; d < depth; d++)
		for (int r = 0; r < row; r++)
			for (int c = 0; c < col; c++)
				ptr[c + col * r + (col + row) * d] = c + col * r + (col + row) * d;


	//�γؽ� ��Ģ�� �Լ��� ����
	/*
		int idx2(int c, int r, int d)
		{
			static const int cr = col * row;
			return c + col * r + cr * d;
		}
	*/

	for (int d = 0; d < depth; d++)
	{
		for (int r = 0; r < row; r++)
		{
			for (int c = 0; c < col; c++)
				printf("%d ", *(ptr + c + col * r + (col + row) * d));
			printf("\n");
		}
		printf("\n");
	}
		
				


	//�����Ҵ� �޸� 4�����迭�� 1�����迭 ó�� ��� (row, col, depth, height)
	//�ε��� ��Ģ = c + col * r + (col + row) * d + (row * col * depth) * h

	return 0;
}