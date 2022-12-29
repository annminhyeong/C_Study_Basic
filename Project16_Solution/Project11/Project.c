#include <stdio.h>

void say_hello()
{
#ifdef _WIN64 //#if defined (_WIN64)
	printf("Hello WIN64");
#elif _WIN32
	printf("Hello WIN32");
#elif __linux__
	printf("Hello Linux");
#endif // _WIN64
}

int main()
{	
	say_hello();
	return 0;
}