#include <stdio.h>


int main()
{	
	int ch;
	long cur;

	FILE* fp = fopen("test.txt", "r");

	//ftell() : ���Ͽ����� ������ġ�� �˷���
	cur = ftell(fp);
	printf("ftell() = %ld\n", cur);

	//fseek(SEEK_SET) : ���������� ���� 2byte ������ ������ �̵�
	fseek(fp, 2L, SEEK_SET);
	
	cur = ftell(fp);
	printf("ftell() = %ld\n", cur);

	//���Ͽ��� �ѱ����б�, ���Ͽ��� ���� ������ 1byte �̵���
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);

	cur = ftell(fp);
	printf("ftell() = %ld\n", cur);

	//fseek(SEEK_CUR) : ������ġ���� -2byte �̵�
	fseek(fp, -2L, SEEK_CUR);

	cur = ftell(fp);
	printf("ftell() = %ld\n", cur);
	
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);

	//fseek(SEEK_END) : ����������  0byte �̵�
	fseek(fp, 0L, SEEK_END);

	ch = fgetc(fp);
	printf("%d %c\n", ch, ch); //������ ��(EOF) -1 ��µ�

	fseek(fp, -1L, SEEK_END);

	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);

	fseek(fp, -2L, SEEK_END);

	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);


	fpos_t pt;
	pt = 10;

	//fsetpos() : ���������� 10byte ������ ������ �̵�
	fsetpos(fp, &pt);

	//���Ͽ��� ���� ������ 1byte �̵���
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);

	//fgetpos() : ���Ͽ����� ������ġ�� �˷���
	fgetpos(fp, &pt);
	printf("%lld\n", pt);


	return 0;
}