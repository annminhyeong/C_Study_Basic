#include <stdio.h>
#include <conio.h> //windows

int main()
{	
	char c;

	//버퍼사용안하고 한글자씩 입력받을 때 사용
	//_getch() : 사용자가 무엇을 입력하고 있는지 콘솔에 표시안됨
	//_getche() : 사용자가 무엇을 입력하고 있는지 보여주고 한글자입력할때마다 출력함
	while ((c = _getch()) != '.')
		putchar(c);
	
	
	//콘솔에서 getchar() 한글자씩 입력받을때
	//\n전까지 또는 Buffer가 가득 찰때까지 일단 Buffer에 전부 저장함
	//putchar()는 Buffer에 저장된 값을 Buffer에 값이 없을 때 까지 Buffer의 값을 차례대로 출력함
	//while ((c = getchar()) != '.')
	//	putchar(c);

	return 0;
}