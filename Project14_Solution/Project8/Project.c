#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FUNDLEN 50

struct fortune
{
	char bank_name[FUNDLEN];
	double bank_saving;
	char fund_name[FUNDLEN];
	double fund_invest;
	//float* arr;
};

double sum(struct fortune *my_fortune);

int main()
{	
	struct fortune my_fortune = {
		"Wells-Fargo",
		4032.27,
		"JPMorgan Chase",
		8543.94
	};

	//my_fortune.arr = (float*)malloc(sizeof(float) * 10000000000);

	//printf("Total : $%.2f.\n", sum(&my_fortune.bank_saving, &my_fortune.fund_invest));
	//printf("Total : $%.2f.\n", sum(my_fortune));
	printf("Total : $%.2f.\n", sum(&my_fortune));

	//struct fortune my_fortune2;
	//my_fortune2 = my_fortune;

	return 0;
}

//구조체 맴버의 크기가 클 경우 느려지므로 보통 구조체의 포인터를 많이 씀
double sum(const struct fortune *my_fortune)
{
	return my_fortune->bank_saving + my_fortune->fund_invest;
}

////구조체의 값이 깊은 복사됨 (동적할당 메모리는 주소만 복사함)
//double sum(struct fortune my_fortune)
//{
//	return my_fortune.bank_saving + my_fortune.fund_invest;
//}

//double sum(const double* x, const double* y)
//{
//	return *x + *y;
//}