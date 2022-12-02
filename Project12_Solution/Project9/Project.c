#include <stdio.h>

//extern는 파일 스코프에 위치하면 변수 초기화 가능 (extern이 붙어 있는 곳에서는 초기화 하는것 권장 안함)
//단 extern하는 대상과 extern 당하는 대상 둘 중 하나가 초기화하고 있다면 다른 곳에서는 초기화 불가능
int g_int;
double g_arr[1000];

int x = 5;
int y = 1 + 2;
size_t z = sizeof(int);

//전역변수에 변수 사용불가
//int x2 = 2 * x;

void fun()
{
	printf("g_int in fun() %d %p\n", g_int, &g_int);
	g_int += 10;
}

//함수 선언만 해주면 컴파일러가 다른파일에 있는 함수를 찾아줌
void fun_sec();

int main()
{	
	//extern : 현재(다른) 파일의 전역변수를 안에서 사용하고 싶을 때 사용

	//extern : 스코프 바깥 전역 변수를 사용할 때 쓰임
	//extern int g_int;
	
	//에러 : extern는 블록 스코프의 위치하면 변수 초기화 불가능함
	//extern int g_int = 1024;
	
	//int g_int = 123;

	
	//배열같은 경우 extern을 할 경우 배열사이즈 필요 없음 (사이즈는 위에서 결정되었으므로)
	extern double g_arr[];

	printf("g_int in main() %d %p\n", g_int, &g_int);
	g_int += 1;
	fun();
	fun_sec();

	return 0;
}