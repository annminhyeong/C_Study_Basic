#include <stdio.h>
#include "my_functions.h"
#include "my_structures.h"
#include "my_macros.h"
//#include "my_headers/my_macros.h" //�����
//#include <my_macros.h> //ȯ�漳���� ����

extern int status;

int main()
{	
#include "hello_world.h" //���� ����

	printf("PI = %f\n", PI);
	printf("%p %d\n", &status, status);

	print_status();

	printf("%d\n", multiply(51, 2));

	printf("main()\n");
	printf("Static function address %p\n", multiply);
	printf("Static variable address %p\n", &si);

	print_address();




	return 0;
}