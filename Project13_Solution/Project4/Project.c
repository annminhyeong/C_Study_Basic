#include <stdio.h>
#include <stdlib.h>

int main()
{	
	//fopen() binary mode
	//rb, wb, ab
	//rb+ == r+b
	//wb+ == w+b
	//ab+ == a+b

	//C11 : x는 덮어쓰기 못하게 함
	//wx, wbx, w+x, wb+x, w+bx


	//파일 쓰기
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


	//파일 읽기
	{
		FILE* fp = fopen("binary_file", "rb");
		
		double d;
		int n = 0;

		fread(&d, sizeof(d), 1, fp);
		fread(&n, sizeof(n), 1, fp);

		int* parr = (int*)malloc(sizeof(int) * n);
		if (!parr) exit(1);
		fread(parr, sizeof(int), n, fp);

		//feof는 EOF만났는지 확인
		printf("feof = %d\n", feof(fp));
		printf("%f\n", d);
		printf("%d\n", n);
		for (int i = 0; i < n; ++i)
			printf("%d ", *(parr + i));
		printf("\n");

		//feof는 EOF만났는지 확인
		printf("feof = %d\n", feof(fp));

		fread(&n, sizeof(n), 1, fp);

		//feof는 EOF만났는지 확인
		printf("feof = %d\n", feof(fp));

		//ferror() : 파일 스트림에 문제없으면 0 리턴
		printf("ferror = %d\n", ferror(fp));

		//읽기전용 모드에서 쓰기를 하면 에러 발생
		fwrite(&n, sizeof(n), 1, fp);

		//ferror() : 파일 스트림에서 에러가 발생하면 1리턴 
		printf("ferror = %d\n", ferror(fp)); 

		fclose(fp);
		free(parr);
	}

	return 0;
}