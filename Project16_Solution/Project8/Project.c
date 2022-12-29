#include <stdio.h>

#include "Header_B.h"
//#include "Header_A.h" //중복 include 됨, 방지하기 위해서는 #progma once 사용 귄장

int main()
{	
	test_function_A();
	test_function_B();

	return 0;
}