#include <stdio.h>

#define MONTHS 12

int main()
{	
	//int high[MONTHS] = { 2, 5, 11, 18, 23, 27, 29, 30, 26, 20, 12, 4 };

	//for (int i = 0; i < MONTHS; ++i)
	//	printf("%d ", high[i]);
	//printf("\n");


	//float avg = 0.0;
	//for (int i = 0; i < MONTHS; ++i)
	//	avg += high[i];
	//printf("Average = %f\n", avg / (float)MONTHS);

	//high[0] = 1;
	//high[1] = 2;

	//printf("%p %p\n", high, &high[0]);
	//for (int i = 0; i < MONTHS; ++i)
	//	//10���� ������ ��ȯ (x64�� 8byte�̹Ƿ� long long���� ����ȯ)
	//	printf("%lld\n", (long long)&high[i]); 
	//printf("\n");

	//high[12] = 4; //error : out of index
	//high[-1] = 123; //error : bound of index


	//const int temp = 0;
	//temp = 4; //error

	
	//const int low[MONTHS] = { -7, -5, 1, 7, 13, 18, 22, 22, 16, 9, 2, -5 };
	
	//const�迭�� �迭 �� ���� �Ұ�
	//low[0] = 123; //error


	//int not_init[4]; //TODO : try static (storage class)
	//for (int i = 0; i < 4; ++i)
	//	//�迭 �ʱ�ȭ ���ϸ� �����Ⱚ ��µ�
	//	printf("%d\n", not_init[i]);

	
	//int insuff[4] = { 2, 4 };
	//for (int i = 0; i < 4; ++i)
	//	//�迭ũ�⺸�� �۰� �ʱ�ȭ�ϸ� �ʱ�ȭ �ȵ� �κ��� 0���� ä����
	//	printf("%d\n", insuff[i]);


	//int over[2] = { 2, 4, 8, 16 }; //error


	////�迭ũ�� �������ϸ� �����Ϸ��� ���������� ũ�⿡ �°� ũ�� �Ҵ���
	//const int power_of_twos[] = { 1, 2, 4, 8, 16, 32, 64 };
	//printf("%d\n", sizeof(power_of_twos));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(power_of_twos[0]));


	//for (int i = 0; i < sizeof power_of_twos / sizeof power_of_twos[0]; ++i)
	//	printf("%d ", power_of_twos[i]);


	////[index] = �� : �ش� �ε����� �� ���, �ʱ�ȭ �ȵ� index�� 0���� �ʱ�ȭ��
	//int days[MONTHS] = { 31, 28, [4] = 31, 30, 31, [1] = 29 };
	//for (int i = 0; i < MONTHS; ++i)
	//	printf("%d ", days[i]);


	
	int arr1[MONTHS];
	double arr2[123];
	float arr3[3 * 4 + 1];
	float arr4[sizeof(int) + 1];
	//float arr5[-10] //error
	//float arr6[0] //error
	//float arr7[1.5] //error
	float arr8[(int)1.5];


	int n = 8;
	//float arr9[n]; //Variable-Length Array is optional from C11


	return 0;
}