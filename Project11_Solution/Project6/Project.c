#include <stdio.h>
#include <string.h>

void fit_str(char*, unsigned int);

int main()
{	
	////strlen() : ���ڿ� ���� �˷���

	//char msg[] = "Just,"" do it!";
	//
	//puts(msg);
	//printf("Length %d\n", strlen(msg));
	//fit_str(msg, 4);
	//puts(msg);
	//printf("Length %d\n", strlen(msg));

	
	////strcat(), strncat() : ���ڿ� ������

	//char str1[100] = "First string";
	//char str2[] = "Second string";

	////strcat(str1, ", ");
	////strcat(str1, str2);
	//
	////str1 \0�ڰ� �ʱ�ȭ �ȵǼ� warning
	////ù��° ���ڿ��� 2���ڸ� ������
	//strncat(str1, str2, 2); 
	//puts(str1);
	

	////strcmp(), strncmp() : ���ڿ� �� �Լ�
	////������ 0, ���� ���� ������ -1, �ڿ����� ������ 1
	//printf("%d\n", strcmp("A", "A"));
	//printf("%d\n", strcmp("A", "B"));
	//printf("%d\n", strcmp("B", "A"));
	//printf("%d\n", strcmp("Hello", "Hello"));
	//printf("%d\n", strcmp("Banana", "Bananas"));
	//printf("%d\n", strcmp("Bananas", "Banana"));
	////���� 6���ڸ� ��
	//printf("%d\n", strncmp("Bananas", "Banana", 6));

	
	////strcpy(), strncpy() : ���ڿ� ���� ����, \0�� ���� ����
	//char dest[100] = "";
	//char source[] = "Start programming!";
	//
	////dest �迭�����̹Ƿ� ������ ���� �Ұ���
	////dest = source; //error
	////dest = "Start something!"; //error

	//strcpy(dest, source);
	////Start���� �����
	//strncpy(dest, source, 5);
	//
	////������ ������ �̿��ؼ� 6�� �ε��� �ּҺ��� ���ڿ� ������
	////strcpy(dest, source + 6);
	//
	////strcpy(dest, source);
	//
	////������ ������ �̿��ؼ� 6�� �ε����� coding�� ������
	////strcpy(dest + 6, "coding!");
	//puts(dest); //\0�� �����Ƿ� �ʱ�ȭ �ȵȰ��� ��µ�

	
	////sprintf() : printf ����� 1��° ���ڿ� ���� ����
	//char str[100] = "";
	//int i = 123;
	//double d = 3.14;

	//sprintf(str, "%05d.png%f", i, d);
	//puts(str);


	//W�� ���۵Ǵ� �ּҰ��� �����ͷ� ��ȯ��
	printf("%s\n", strchr("Hello World", 'W'));

	//ABCDE�� �� �ϳ��� ���۵Ǵ� �κ��� ã�� �ּҰ��� �����ͷ� ��ȯ
	printf("%s\n", strpbrk("Hello World", "ABCDE"));
	
	//abcde�� �� �ϳ��� ���۵Ǵ� �κ��� ã�� �ּҰ��� �����ͷ� ��ȯ
	printf("%s\n", strpbrk("Hello World", "abcde"));
	
	//l�� ��Ÿ���� ���� ������ �ּҰ��� ������
	printf("%s\n", strrchr("Hello, World, Hello, World", 'l'));
	
	//���ڿ��� ���ԵǾ� �ִ��� Ȯ��
	printf("%s\n", strstr("Hello World", "wor"));

	//���ڿ��� ���ԵǾ� �ִ��� Ȯ��
	printf("%s\n", strstr("Hello World", "Wor"));




	return 0;
}

void fit_str(char* str, unsigned int size)
{
	if (strlen(str) > size)
		str[size] = '\0';
}