#include <stdio.h>


int main()
{	
	int c;

	//아스키코드는 unsigned int값만 가짐
	
	//steram : 입력한 데이터(콘솔입력, 파일내용)가 흘러서 우리 프로그램으로 들어감
	//EOF (end of file) : stream의 끝을 의미하고 값은 -1임

	//while ((c= getchar()) != EOF)
	//	putchar(c);
	


	//줄바꿈 아스키코드 : 10

	//ctrl + z를 맨앞에 입력하면 문자로 변환하지 않으므로 EOF가 리턴됨
	//문자뒤에 ctrl + z를 입력하면 문자로 변환해서  Ctrl + Z 의 아스키코드가 26이 리턴됨
	while (1)
	{
		c = getchar();
		printf("%d\n", c);
		if (c == EOF)
			break;
	}

	return 0;
}