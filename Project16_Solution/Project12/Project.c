#include <stdio.h>

#include "DifferentFile.h"

void different_function();

int main()
{	
	printf("__FILE__ : %s\n", __FILE__); //��ũ�ΰ� ���� ������ �̸�
	printf("__DATE__ : %s\n", __DATE__); //��ó�� �� ��¥
	printf("__TIME__ : %s\n", __TIME__); //��ó�� �� �ð�
	printf("__LINE__ : %d\n", __LINE__); //���° ������ Ȯ��
	printf("__func__ : %s\n", __func__); //�Լ��̸�

	different_function();
	
	different_func_in_different_file();

//#line 7 //������ ������ 7�� �ٲ����
//	printf("__LINE__ after #line %d\n", __LINE__);
//
//#line 1 "hello.txt" //���� �̸��� �ٸ� ���� �� �� ó�� �̸� �ٲ� �� ����
//	printf("__LINE__ after #line %d\n", __LINE__);
//	printf("__FILE__ : %s\n", __FILE__);
	

//#if __LINE__ != 26
//#error Not line 26 //������ ���� �߻�
//#endif

//#if defined(_WIN64) != 1 //������ 64bit �ƴϸ� ���� �߻�
//#error Not WIN64 platform
//#endif

//#if __STDC_VERSION__ != 201112L //C11 �ƴϸ� ���� �߻�
//#error Not C11
//#endif


	return 0;
}

void different_function()
{
	printf("This function is %s\n", __func__);
	printf("This is line %d\n", __LINE__);
}