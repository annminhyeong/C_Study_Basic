#include <stdio.h>

#include "DifferentFile.h"

void different_function();

int main()
{	
	printf("__FILE__ : %s\n", __FILE__); //메크로가 사용된 파일의 이름
	printf("__DATE__ : %s\n", __DATE__); //전처리 된 날짜
	printf("__TIME__ : %s\n", __TIME__); //전처리 된 시간
	printf("__LINE__ : %d\n", __LINE__); //몇번째 줄인지 확인
	printf("__func__ : %s\n", __func__); //함수이름

	different_function();
	
	different_func_in_different_file();

//#line 7 //라인을 강제로 7로 바꿔버림
//	printf("__LINE__ after #line %d\n", __LINE__);
//
//#line 1 "hello.txt" //파일 이름을 다른 파일 인 것 처럼 이름 바꿀 수 있음
//	printf("__LINE__ after #line %d\n", __LINE__);
//	printf("__FILE__ : %s\n", __FILE__);
	

//#if __LINE__ != 26
//#error Not line 26 //컴파일 에러 발생
//#endif

//#if defined(_WIN64) != 1 //원도우 64bit 아니면 에러 발생
//#error Not WIN64 platform
//#endif

//#if __STDC_VERSION__ != 201112L //C11 아니면 에러 발생
//#error Not C11
//#endif


	return 0;
}

void different_function()
{
	printf("This function is %s\n", __func__);
	printf("This is line %d\n", __LINE__);
}