#include <stdio.h>
#include <conio.h> //windows

int main()
{	
	char c;

	//���ۻ����ϰ� �ѱ��ھ� �Է¹��� �� ���
	//_getch() : ����ڰ� ������ �Է��ϰ� �ִ��� �ֿܼ� ǥ�þȵ�
	//_getche() : ����ڰ� ������ �Է��ϰ� �ִ��� �����ְ� �ѱ����Է��Ҷ����� �����
	while ((c = _getch()) != '.')
		putchar(c);
	
	
	//�ֿܼ��� getchar() �ѱ��ھ� �Է¹�����
	//\n������ �Ǵ� Buffer�� ���� �������� �ϴ� Buffer�� ���� ������
	//putchar()�� Buffer�� ����� ���� Buffer�� ���� ���� �� ���� Buffer�� ���� ���ʴ�� �����
	//while ((c = getchar()) != '.')
	//	putchar(c);

	return 0;
}