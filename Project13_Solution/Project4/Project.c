#include <stdio.h>
#include <stdlib.h>

int main()
{	
	//fopen() binary mode
	//rb, wb, ab
	//rb+ == r+b
	//wb+ == w+b
	//ab+ == a+b

	//C11 : x�� ����� ���ϰ� ��
	//wx, wbx, w+x, wb+x, w+bx


	//���� ����
	{
		FILE* fp = fopen("binary_file", "wb");

		double d = 1.0 / 3.0;
		int n = 123;

		int* parr = (int*)malloc(sizeof(int) * n);
		if (!parr) exit(1);

		for (int n = 0; n < 123; ++n)
			*(parr + n) = n * 2;

		//address, size, count, file pointer
		fwrite(&d, sizeof(d), 1, fp);
		fwrite(&n, sizeof(n), 1, fp);
		fwrite(parr, sizeof(int), n, fp);

		fclose(fp);
		free(parr);
	}


	//���� �б�
	{
		FILE* fp = fopen("binary_file", "rb");
		
		double d;
		int n = 0;

		fread(&d, sizeof(d), 1, fp);
		fread(&n, sizeof(n), 1, fp);

		int* parr = (int*)malloc(sizeof(int) * n);
		if (!parr) exit(1);
		fread(parr, sizeof(int), n, fp);

		//feof�� EOF�������� Ȯ��
		printf("feof = %d\n", feof(fp));
		printf("%f\n", d);
		printf("%d\n", n);
		for (int i = 0; i < n; ++i)
			printf("%d ", *(parr + i));
		printf("\n");

		//feof�� EOF�������� Ȯ��
		printf("feof = %d\n", feof(fp));

		fread(&n, sizeof(n), 1, fp);

		//feof�� EOF�������� Ȯ��
		printf("feof = %d\n", feof(fp));

		//ferror() : ���� ��Ʈ���� ���������� 0 ����
		printf("ferror = %d\n", ferror(fp));

		//�б����� ��忡�� ���⸦ �ϸ� ���� �߻�
		fwrite(&n, sizeof(n), 1, fp);

		//ferror() : ���� ��Ʈ������ ������ �߻��ϸ� 1���� 
		printf("ferror = %d\n", ferror(fp)); 

		fclose(fp);
		free(parr);
	}

	return 0;
}