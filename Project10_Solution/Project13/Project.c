#include <stdio.h>


int main()
{	
	//int n = 5;
	//double x;

	//x = n;
	//int* p1 = &n;
	//double* pd = &x;

	////warning : ������ Ÿ�� �ȸ���, ������Ÿ���� ����ȯ �������
	////pd = p1;
	//
	//int* pt;
	//int(*pa)[3]; //3���� ���Ҹ� ���� �迭�� ���� ������
	//
	//int ar1[2][3] = { 3, };
	//int ar2[3][2] = { 7, };

	//int** p2;

	//pt = &ar1[0][0];
	//pt = ar1[0];

	////warning (error) : ar1�� �������迭�̱� ������ �׳� �����Ϳ��� ���� �� ����
	////pt = ar1;

	//pa = ar1; //���Ұ� 3��¥���� �迭�̹Ƿ� ����
	////warning (error) :���Ұ� 2���̹Ƿ� warning
	////pa = ar2;

	//p2 = &pt;
	//*p2 = ar2[0];
	////warning(error) : p2�� int �����Ϳ� ���� ��������,
	////ar2�� 2���� int�� ���� ���� �迭�� ���� �������̹Ƿ� �ȵ�
	////p2 = ar2;


	int x = 20;
	const int y = 23;
	int* p1 = &x;
	const int* p2 = &y;
	const int** pp2 = &p1;
	
	//warning (error) : p1�� ���ؼ� p2�� ����Ű�� ��(const int y)�� ������ �� �ֱ� ������ ���� ����
	//p1 = p2;

	//error : �����Ϳ� ����� ���� ����Ű�� �� ���� �Ұ���
	//*p2 = 123; 

	//�ּҰ� ���� ����
	p2 = p1;

	int x2 = 30;
	int* p3 = &x2;
	*pp2 = &p3;
	pp2 = &p1;

	//const int** pp2;
	//int* p1;
	//const int n = 13;
	//pp2 = &p1;
	//*pp2 = &n;
	//*p1 = 10;


	return 0;
}