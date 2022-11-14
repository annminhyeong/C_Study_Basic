#include <stdio.h>


int main()
{	
	//c언어 콘솔 실행: 프로젝트명.exe
	//c언어 콘솔 파일 입력: 프로젝트명.exe < 파일명
	//c언어 콘솔 파일 출력: 프로젝트명.ext > 파일명
	//c언어 콘솔 파일 출력추가: 프로젝트명.ext >> 파일명

	//c언어 프로젝트 복사 : copy 프로젝트명.exe 복사한프로젝트이름.exe
	//c언어 프로젝트1 출력값 프로젝트2 입력값으로 쓰기 : 프로젝트1.exe | 프로젝트2.exe

	//printf("Programming");


	char str[100];
	scanf("%s", str);
	printf("I love %s\n", str);

	return 0;
}