#include <stdio.h>


void count()
{
	int ct = 0;
	printf("count = %d %lld\n", ct, (long long)&ct);
	ct++;

	//count()가 호출되고 난 뒤 ct는 스택프레임에서 사라지므로 사용불가
	//return &ct;
}

int* static_count()
{
	//함수가 여러번 호출해도 처음 한번 초기화 됨
	static int ct = 0;
	printf("count = %d %lld\n", ct, (long long)&ct);
	ct++;

	//권장하지는 않지만 static 변수는 메모리에 고정된 주소를 가지고 있으므로 사용가능
	return &ct;
}

void counter_caller()
{
	count();
}

void static_counter_caller()
{
	static_count();
}

//warning : static 변수는 프로그램 내내 메모리가 유지되면서 한번 생성되면 그 변수를 scope 내에서
//프로그램 실행 내내 재사용할 수 있는데 함수가 호출될 때 마다 여러번 static 변수를 생성하므로 static 변수 쓰는 의미가 없음
void func(static int i)
{
	
}

int main()
{	
	//실행되는 함수가 count()밖에 없어서
	//스택에 올라갔다 빠졌다 다시 올라가서 메모리 주소가 같게 나옴
	count();
	count();
	counter_caller();

	static_count();
	static_count();
	static_counter_caller();

	return 0;
}