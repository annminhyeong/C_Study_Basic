#include <stdio.h>


int main()
{	
	//int arr0[3] = { 1, 2, 3 };
	//int arr1[3] = { 4, 5, 6 };

	////parr�� �����͹迭�� ������ �迭���� �� �迭�� �ּҰ��� �������
	//int* parr[2] = { arr0, arr1 };

	//for (int j = 0; j < 2; ++j)
	//{
	//	for (int i = 0; i < 3; ++i)
	//		//parr�� �� �迭�� �ּҰ��� �����Ƿ� parr�� * �� �ٿ��� ������ �迭�� �����Ѵ�.
	//		printf("%d=(==%d, %d, %d) ", parr[j][i], *(parr[j] + i), *(*(parr + j) + i), (*(parr + j))[i]);
	//	printf("\n");
	//}
	//printf("\n");



	//int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	//int* parr0 = arr[0];
	//int* parr1 = arr[1];

	//for (int i = 0; i < 3; ++i)
	//	printf("%d ", parr0[i]);
	//printf("\n");

	//for (int i = 0; i < 3; ++i)
	//	printf("%d ", parr1[i]);
	//printf("\n");



	//int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	//
	//int* parr[2];
	//parr[0] = arr[0];
	//parr[1] = arr[1];

	//for (int j = 0; j < 2; ++j)
	//{
	//	for (int i = 0; i < 3; ++i)
	//		//parr�� ������ ����Ǿ� �ִ� �� �ּҰ��� �����ϱ� ���� * ����
	//		printf("%d %d %d %d\n", arr[j][i], parr[j][i], *(parr[j] + i), *(*(parr + j) + i));
	//	printf("\n");
	//}
	//printf("\n");


	///* Note */
	//printf("%p\n", &parr[0]); //������ �迭 ��ü �ε��� 0���� �ּҰ���
	//printf("%p\n", parr[0]); //������ �迭 0�� �ε����� ����Ǿ� �ִ� ��(2�����迭�� 0�� �ε��� �ּҰ�)��
	//printf("%p\n", arr); //ù��° �迭�� �ּҰ�
	//printf("%p\n", &arr[0]); //ù��° �迭�� �ּҰ�
	//printf("%p\n", arr[0]); //2���� �迭�̹Ƿ� ù��° ���� �ּҰ���
	//printf("%p\n", &arr[0][0]); //ù��° �迭�� �ּҰ��� ù��° ���� �ּҰ��� ����


	//���ڿ��迭�� char Ÿ���� ������ �迭�� ������
	char* name[] = { "Aladdin", "Jasmine", "Magic Carpet", "Genie" };
	const int n = sizeof(name) / sizeof(char*);

	for (int i = 0; i < n; ++i)
		//���ڿ� �迭�� ũ�Ⱑ �ٸ��Ƿ� �ü���� �����Ϸ��� �˾Ƽ� �޸� ������ �Ҵ���
		printf("%s at %u\n", name[i], (unsigned long long)name[i]);
	printf("\n");

	//���ڿ��迭�� 2���� �迭�� ������
	char aname[][15] = {"Aladdin", "Jasmine", "Magic Carpet", "Genie"};
	const int an = sizeof(aname) / sizeof(char[15]);

	for (int i = 0; i < an; ++i)
		//���ڿ� �迭�� ũ�Ⱑ 15�� �������־ �������� �޸� ������ �Ҵ��
		printf("%s at %u\n", aname[i], (unsigned long long)& aname[i]);
	printf("\n");



	return 0;
}