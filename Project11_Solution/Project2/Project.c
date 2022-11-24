#include <stdio.h>
#include <stdlib.h>


void test_function()
{
	int j;
	printf("Stack high \t%llu\n", (unsigned long long) & j);
}

int main()
{	
	//�����ͷ� ���ڿ� ���ͷ��� �����ϸ� ù ���ڸ� �б� ���� �޸𸮿� ������
	//���� ���ڿ� ���� �Ұ���
	//�����ͷ� ���ڿ� ���ͷ��� ������ �� ���ڿ� ���ͷ��� ������ �޸� �ּҰ� ����

	const char* pt2 = "I am a string!.";
	const char* pt3 = "I am a string!.";
	const char* pt4 = "I am a string!!!!!!.";
	
	const char ar1[] = "I am a string!.";
	const char ar2[] = "I am a string!.";
	const char ar3[] = "I am a string!!.";

	printf("rodata memory low \t%llu %llu %llu %llu\n",
		(unsigned long long)pt2, (unsigned long long)pt3, (unsigned long long)pt4,
		(unsigned long long)"I am a string!.");

	printf("Stack memory high \t%llu %llu %llu\n", (unsigned long long)ar1,
		(unsigned long long)ar2, (unsigned long long)ar3);

	printf("Stack high \t%llu %llu %llu\n",
		(unsigned long long)&pt2, (unsigned long long)&pt3, (unsigned long long)&pt4);

	int i;
	printf("Stack high \t%llu\n", (unsigned long long)&i);

	test_function();

	char* p5 = (char*)malloc(sizeof(char) * 100);
	printf("Heap middle \t%llu\n", (unsigned long long)p5);

	char* p6 = (char*)malloc(sizeof(char) * 100);
	printf("Heap middle \t%llu\n", (unsigned long long)p6);

	
	//ar1�� �������� �̸��� �ƴ϶� �迭�� �̸��̹Ƿ� ���������� �Ұ���
	//ar1++;
	
	pt2++;
	//puts()�� ���ڿ��� ������� �� ���� \n�� �ڵ����� ����
	puts(pt2); 

	char heart[] = "I love Kelly!";
	const char* head = "I love Helly!";

	for (int i = 0; i < 6; i++)
		putchar(heart[i]);
	putchar('\n');

	for (int i = 0; i < 6; i++)
		putchar(head[i]);
	putchar('\n');

	for (int i = 0; i < 6; i++)
		putchar(*(head + i));
	putchar('\n');

	while (*(head) != '\0')
		putchar(*(head++));

	
	//head�� �����Ϳ� heart�� �迭�̸�(�迭�� ù�ּ�)�� ����
	head = heart;
	
	//heart�� �����Ͱ� �ƴϱ⶧���� �ּҰ� ����Ұ�
	//heart = head; 

	heart[7] = 'H';
	*(heart + 7) = 'K';
	putchar('\n');

	//���ڿ� ���ͷ��� �����Ϳ� �����ϸ� �б� ���� �޸� �ּҿ� �����
	char* word = "Goggle";

	//��Ÿ�ӿ��� : �б� ���� �޸𸮿� ����Ǿ��ִ� ���� ���� �õ��ؼ� �߻� 
	//word[2] = '0';
	puts(word); 

	const char* str1 = "When all the lights are low, ...";
	const char* copy;

	copy = str1;

	printf("%s %p %p\n", str1, str1, &str1);
	printf("%s %p %p\n", copy, copy, &copy);

	return 0;
}