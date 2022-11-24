#include <stdio.h>


int main()
{	
	//���ڿ� �迭 ����� ��
	const char* mythings[5] = {
		"Dancing in the rain",
		"Couting Apple",
		"Watching movie with friend",
		"Writing sad letters",
		"Studying the C language",
	};

	char yourthings[5][40] = {
		"Studying the C++ language",
		"Eating",
		"Watching Netflix",
		"Walking around till dark",
		"Deleting spam email",
	};

	const char* temp1 = "Dancing in the rain";
	const char* temp2 = "Studying the C++ language";

	//mythings�� �����ͷ� ����Ű�� �ֱ⸸ �ϱ⶧���� �ּҰ� ����
	printf("%s %llu %llu\n", mythings[0], (unsigned long long)mythings[0], (unsigned long long)temp1);
	//yourthings�� ���ÿ� ���ڿ��� �����߱� ������ �ּҰ� ���� ����
	printf("%s %llu %llu\n", yourthings[0], (unsigned long long)yourthings[0], (unsigned long long)temp2);
	printf("\n");


	printf("%-30s %-30s\n", "My Things:", "Your Things:");
	for (int i = 0; i < 5; i++)
		printf("%-30s %-30s\n", mythings[i], yourthings[i]);

	//mythings : 8byte ������ 5��, yourthings : 40 * 5
	printf("\nsizeof mythings: %zd, sizeof your yourthings: %zd\n",
		sizeof(mythings), sizeof(yourthings));


	//2�����迭�� �ᱹ 1�����迭 ���·� ����ǹǷ� �ε����� �Ѿ�� �������� ��µ�
	for (int i = 0; i < 100; i++)
		printf("%c", mythings[0][i]);
	printf("\n");
	printf("\n");


	for (int i = 0; i < 200; i++)
		printf("%d", (int)yourthings[0][i]);
	printf("\n");
	printf("\n");


	for (int i = 0; i < 200; i++)
		printf("%c", yourthings[0][i]);
	printf("\n");
	printf("\n");


	return 0;
}