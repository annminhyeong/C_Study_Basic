#include <stdio.h>

#define MESSAGE "A symbolic string contant"
#define MAXLENGTH 81

int main()
{	
	//�迭�� �б�/���Ⱑ ������ �޸𸮸� �����
	//���ڿ� �������� ���α׷��� �Ϻ��̱� ������ �б����� �޸𸮿� ������

	char words[MAXLENGTH] = "A string in an array";
	
	//���ڿ��迭�� ù�ּҸ� ������ ������ ������
	const char* pt1 = "A pointer to a string.";

	//puts() �Լ��� ���ڿ��� �������
	puts("Puts() adds a newline at the end:");
	puts(MESSAGE);
	
	//���ڿ��� MAXLENGTH���� ���⶧���� \0�ڿ��� �ʱ�ȭ�� ���� �ʾƼ� warning
	puts(words);
	puts(pt1);
	words[3] = 'p';
	puts(words);
	
	//Runtime Error : �б� ���� �޸𸮿� ����� ������ ���� �ٲܷ��� �õ��ؼ� ���� �߻�
	//pt1[8] = 'A'; 

	
	//����ǥ�� �������� ���� ���� �ᵵ ��系���� char�迭�� ������
	//char greeting[50] = "Hello, and How are you today!"; �� ����
	char greeting[50] = "Hello, and"" How are" " you"
		" today!";
	puts(greeting); //���ڿ��� ���̰� 50���� �۾Ƽ� \0 �ڰ� �ʱ�ȭ ���� �ʾƼ� warning

	
	printf("\" To be, or not to  be\" Hamlet said.\n");

	//"are"�� �ּҴ� ù���� 'a'�� ����Ǿ��ִ� �ּҰ��̴�
	//*���ڿ��� ù���� 'e'�� ����� �ּҰ��� ����Ű�� ���̴�.
	printf("%s %p %c\n", "We", "are", *"excellent programmers");


	const char m1[15] = "Love you!";

	for (int i = 0; i < 15; ++i)
		//���ڼ��� �����ؼ� \0 �ڰ� �ʱ�ȭ ���� �ʾƼ� warning
		printf("%d ", (int)m1[i]); 
	printf("\n");

	
	//�� �ڿ� ��ĳ���͸� �������� �־������
	const char m2[15] = { 'L', 'o', 'v', 'e', ' ', 'y', 'o', 'u', '!', '\0' };
	
	for (int i = 0; i < 15; ++i)
		printf("%d ", (int)m2[i]);
	printf("\n");

	const char m3[] = "Love you, too!";


	int n = 8;
	char cookies[1] = { 'A', };
	char cakes[2 + 5] = { 'A', };
	char pies[2 * sizeof(long double) + 1] = { 'A', };
	//char crumbs[n]; //vs������ ������ �迭���� �����Ұ�

	
	char truth[10] = "Truths is ";
	if (truth == &truth[0]) puts("ture!");
	if (*truth == 'T') puts("ture!");
	if (*(truth + 1) == 'r') puts("ture!");
	if (truth[1] == 'r') puts("ture!");

	return 0;
}