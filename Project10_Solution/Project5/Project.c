#include <stdio.h>

#define MONTHS 12
#define YEARS 3

int main()
{	
	double year2016[MONTHS] = { -3.2, 0.2, 7.0, 14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2 };
	double year2017[MONTHS] = { -1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9 };
	double year2018[MONTHS] = { -4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6 };

	double year[YEARS][MONTHS] =
	{
		{ -3.2, 0.2, 7.0, 14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2 },
		{ -1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9 },
		{ -4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6 },
	};

	double yAvg[YEARS] = { 0.0, 0.0, 0.0 };
	double mAvg[MONTHS] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

	printf("[Temperature Data]\n");
	printf("Year index:");
	for (int i = 1; i <= MONTHS; i++)
		printf("\t%d", i);
	printf("\n");


	for (int i = 0; i < YEARS; i++)
	{
		printf("Year %d\t:", i);
		for (int j = 0; j < MONTHS; j++)
		{
			yAvg[i] += year[i][j];
			mAvg[j] += year[i][j];
			printf("\t%.1f", year[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	

	printf("[Yearly average temperatures of %d years]\n", YEARS);
	for (int i = 0; i < YEARS; i++)
		printf("Year %d : average temperature = %.1f\n", i, yAvg[i] / MONTHS);
	printf("\n");


	printf("[Monthly average temperatures for %d years\n", YEARS);
	printf("Year index:");
	for (int i = 1; i <= MONTHS; i++)
		printf("\t%d", i);
	printf("\n");


	printf("Year temps:");
	for (int i = 0; i < MONTHS; i++)
		printf("\t%.1f", mAvg[i] / YEARS);
	printf("\n");


	return 0;
}