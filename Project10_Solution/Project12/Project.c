#include <stdio.h>


int main()
{	
	//float arr2d[2][4] = { {1.0f, 2.0f, 3.0f, 4.0f}, {5.0f, 6.0f, 7.0f, 8.0f} };

	////arr2d�� ����Ű�� �ּҴ� arr2d[0][0]�� �ƴ϶� arr2d[0]��
	//printf("%u\n", (unsigned long long)arr2d);
	//printf("%u\n", (unsigned long long)arr2d[0]);
	//printf("\n");


	//printf("%u\n", (unsigned long long)* arr2d);
	//printf("%u\n", (unsigned long long)& arr2d[0]);
	//printf("%u\n", (unsigned long long)& arr2d[0][0]);
	//printf("%f %f\n", arr2d[0][0], **arr2d);
	//printf("\n");


	//printf("%u\n", (unsigned long long)(arr2d + 1));
	//printf("%u\n", (unsigned long long)(&arr2d[1]));
	//printf("%u\n", (unsigned long long)(arr2d[1]));
	//printf("%u\n", (unsigned long long)(*(arr2d + 1)));
	//printf("%u\n", (unsigned long long)(&arr2d[0] + 1));
	//printf("%u\n", (unsigned long long)(&arr2d[1][0]));
	//printf("\n");

	//printf("%f\n", *(*(arr2d + 1)+2));
	//printf("\n");



	//for (int j = 0; j < 2; ++j)
	//{
	//	//���� �����Ҷ����� �ּҰ��� 16byte�� ������
	//	printf("[%d] = %u, %u\n", j, (unsigned long long)(arr2d[j]), (unsigned long long) * (arr2d + j));
	//	for (int i = 0; i < 4; ++i)
	//	{
	//		printf("[%d][%d] = %f, %f\n", j, i, arr2d[j][i], *(*(arr2d + j) + i));
	//		*(*(arr2d + j) + i) += 1.0f;
	//	}
	//}
	//printf("\n");



	/* ������ �迭 ������ ���� */
	float arr2d[2][4] = { {1.0f, 2.0f, 3.0f, 4.0f}, {5.0f, 6.0f, 7.0f, 8.0f} };

	float(*pa)[4]; //4���� float�� ���� �迭�� ����Ű�� ������
	float* ap[2]; //������ �迭

	printf("%zu\n", sizeof(pa)); //8byte
	printf("%zu\n", sizeof(ap)); //16byte
	printf("\n");

	
	pa = arr2d;
	//pa[0] = arr2d[0]; //error
	//pa[1] = arr2d[1]; //error

	
	//ap = arr2d //error;
	ap[0] = arr2d[0];
	ap[1] = arr2d[1];

	
	printf("%u %u\n", (unsigned long long)pa, (unsigned long long)pa + 1);
	printf("%u %u\n", (unsigned long long)arr2d[0], (unsigned long long)arr2d[1]);
	printf("%u %u\n", (unsigned long long)pa[0], (unsigned long long)(pa[0] + 1));
	printf("%f\n", pa[0][0]);
	printf("%f\n", *pa[0]);
	printf("%f\n", **pa);
	printf("%f\n", pa[1][3]);
	printf("%f\n", *(*(pa + 1) + 3));
	printf("\n");


	printf("%u %u\n", (unsigned long long)ap, (unsigned long long)ap + 1);
	printf("%u %u\n", (unsigned long long)arr2d[0], (unsigned long long)arr2d[1]);
	printf("%u %u\n", (unsigned long long)ap[0], (unsigned long long)(ap[0] + 1));
	printf("%f\n", ap[0][0]);
	printf("%f\n", *ap[0]);
	printf("%f\n", **pa);
	printf("%f\n", ap[1][3]);
	printf("%f\n", *(*(ap + 1) + 3));
	printf("\n");

	return 0;
}