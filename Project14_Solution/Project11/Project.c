#include <stdio.h>
#include <string.h> //strlen(), strcmp()
#include <stdlib.h> //malloc(), free()

#define SLEN 81

struct namect
{
	char* fname;
	char* lname;
	int letters;
};

void getinfo(struct namect*);
void makeinfo(struct namect*);
void showinfo(struct namect*);
void cleanup(struct namect*);
char* s_gets(char* st, int n);

int main()
{	
	//struct namect p = {"Jeong-MO", "Hong"};
	//printf("%s %s\n", p.fname, p.lname);

	//////텍스트 세그먼트 메모리(읽기 전용)를 수정할려고 하면 런타임 에러 발생
	////int f1 = scanf("%[^\n]%*c", p.lname);
	////printf("%s %s\n", p.lname, p.fname);

	//char buffer[SLEN] = { 0, };
	//int f2 = scanf("%[^\n]%*c", buffer);
	//p.fname = (char*)malloc(strlen(buffer) + 1);

	//if (p.fname != NULL)
	//	strcpy(p.fname, buffer);
	//printf("%s %s\n", p.fname, p.lname);


	struct namect person;
	
	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
	cleanup(&person);
	
	return 0;
}

void getinfo(struct namect* pst)
{
	int flag = 0;
	char temp[SLEN] = { 0, };
	
	printf("Please enter your first name.\n");
	flag = scanf("%[^\n]%*c", temp);
	if (flag != 1)
		printf("Wrong Input");
	else
	{
		pst->fname = (char*)malloc(strlen(temp) + 1);
		if (pst->fname != NULL)
			strcpy(pst->fname, temp);
		else
			printf("Malloc() faild");
	}

	printf("Please enter your last name.\n");
	flag = scanf("%[^\n]%*c", temp);

	if (flag != 1)
	{
		pst->lname = (char*)malloc(strlen(temp) + 1);
		if (pst->lname)
			strcpy(pst->lname, temp);
		else
			printf("Malloc() faild");
	}
}

void makeinfo(struct namect* p)
{
	p->letters = strlen(p->fname) + strlen(p->lname);
}

void showinfo(struct namect* p)
{
	printf("%s %s, your name cotains %d letters.", p->lname, p->fname, p->letters);
}

void cleanup(struct namect* p)
{
	free(p->fname);
	free(p->lname);
}

char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);
	find = strchr(st, '\n');
	if (find)
		*find = '\0';
	else
		while (getchar() != '\n')
			continue;

	return ret_val;
}