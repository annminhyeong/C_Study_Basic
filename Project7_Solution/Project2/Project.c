#include <stdio.h>


int main()
{	
	char ch;
	
	//getchar() : �ѱ��� �Է¹ޱ�
	//putchar() : �ѱ��� ����ϱ�

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

		//getchar()�Լ��� �ѱ��ڸ� �Է¹��� �� ó���������� 
		// �����δ� �ӽ������(buffer)�� �������ڸ� �����Ѵ�

		//putchar()�Լ��� �ѱ��ڸ� ����� �� ó�� ��������
		//�����δ� �ӽ������(buffer)�� ����� ���ڸ� �ѹ��� ����Ѵ�.
		putchar(ch); 
	}

	return 0;
}