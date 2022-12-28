#include <stdio.h>

/*
#define ONE 1 //Object-like macros
#define SQUARE(X) X * X //Function-like macros (권장 안함)
*/

#define PI 3.141592
#define GRAVITY 9.8

#define THREE 3
#define MESSAGE "The greatest glory int living lies not in never falling, \
but in rising every time we fall."

#define NINE THREE * THREE
#define SAY_HELLO  for(int i=0; i<10; i++) printf("Hello World!\n");
#define FORMAT "Number is %d.\n"

  # define WITH_BLANK 1 //가능

#define MY_CH 'Z'
#define MY_ST "Z" //Z\0

#define LIMIT 20
const int LIM = 50;
static int arr1[LIMIT];
//static int arr2[LIM]; //clang, C++
const int LIM2 = 2 * LIMIT;
//cosnt int LIM3 = 2 * LIM; //clang, C++

/*
Tokens

#define SIX 3*2
#define SIX 3 * 2
#define SIX 3       *        2
*/

//중복정의 상수 (토근이 일치 하지 않으면 에러 발생)
#define SIX 2*3
#define SIX 2*3 // accept
//#define SIX 2* 3 //warning
#undef SIX //정의 취소
#define SIX 2* 3

int main()
{	
	int n = THREE;

	SAY_HELLO;
	n = NINE;

	printf(FORMAT, n);
	printf("%s\n", MESSAGE);
	printf("SAY_HELLO NINE\n");

	return 0;
}