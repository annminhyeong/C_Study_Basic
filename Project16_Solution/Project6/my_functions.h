//#pragma once //�ߺ� include�� ������

//�ٸ� ���
#ifndef __MY_FUNCTIONS__
#define __MY_FUNCTIONS__



#include "my_functions.h"

extern int status;

static int si = 0;

extern int add(int a, int b);

//static�� ��쿡�� �Լ� ����θ� ���𰡴�
static int multiply(int a, int b)
{
	return a * b;
}

inline int substract(int a, int b)
{
	return a - b;
}

void print_status();
void print_address();

#endif