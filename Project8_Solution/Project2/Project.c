#include <stdio.h>


int main()
{	
	int c;

	//�ƽ�Ű�ڵ�� unsigned int���� ����
	
	//steram : �Է��� ������(�ܼ��Է�, ���ϳ���)�� �귯�� �츮 ���α׷����� ��
	//EOF (end of file) : stream�� ���� �ǹ��ϰ� ���� -1��

	//while ((c= getchar()) != EOF)
	//	putchar(c);
	


	//�ٹٲ� �ƽ�Ű�ڵ� : 10

	//ctrl + z�� �Ǿտ� �Է��ϸ� ���ڷ� ��ȯ���� �����Ƿ� EOF�� ���ϵ�
	//���ڵڿ� ctrl + z�� �Է��ϸ� ���ڷ� ��ȯ�ؼ�  Ctrl + Z �� �ƽ�Ű�ڵ尡 26�� ���ϵ�
	while (1)
	{
		c = getchar();
		printf("%d\n", c);
		if (c == EOF)
			break;
	}

	return 0;
}