#include <stdio.h>


int main()
{	
	char ch;
	
	//getchar() : 한글자 입력받기
	//putchar() : 한글자 출력하기

	//ch = getchar(); //buffer
	//putchar(ch);
	

	while ((ch = getchar()) != '\n')
	{
		if ('0' <= ch && ch <= '9')
			ch = '*';
		else if ('A' <= ch && ch <= 'Z')
			ch += 32;
		else if ('a' <= ch && ch <= 'z')
			ch -= 32;

		//getchar()함수가 한글자만 입력받을 것 처럼보이지만 
		// 실제로는 임시저장소(buffer)에 여러문자를 저장한다

		//putchar()함수가 한글자만 출력할 것 처럼 보이지만
		//실제로는 임시저장소(buffer)에 저장된 문자를 한번에 출력한다.
		putchar(ch); 
	}

	return 0;
}