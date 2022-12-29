//#pragma once //중복 include를 방지함

//다른 방식
#ifndef __MY_FUNCTIONS__
#define __MY_FUNCTIONS__



#include "my_functions.h"

extern int status;

static int si = 0;

extern int add(int a, int b);

//static인 경우에는 함수 실행부를 선언가능
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