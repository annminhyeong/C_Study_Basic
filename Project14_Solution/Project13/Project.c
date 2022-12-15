#include <stdio.h>
#include <stdlib.h>



int main()
{	
	struct flex
	{
		size_t count;
		double average;
		double values[]; //�迭�� ���̰� ���� ������ �ɹ����� ��
	};

	const size_t n = 3;

	struct flex* pf = (struct flex*)malloc(sizeof(struct flex) + n * sizeof(double));
	if (pf == NULL) exit(1);

	printf("\nFlexable array member\n");
	printf("Sizeof struct flex %zd\n", sizeof(struct flex));
	printf("Sizeof *pf %zd\n", sizeof(*pf));
	printf("Sizeof malloc %zd\n", sizeof(struct flex) + n * sizeof(double));

	printf("%lld\n", (long long)pf);
	printf("%lld\n", (long long)&pf->count);
	printf("%zd\n", sizeof(pf->count));
	printf("%lld\n", (long long)&pf->average);
	printf("Address of pf->values %lld\n", (long long)&pf->values);
	printf("Value of pf->values %lld\n", (long long)pf->values);
	printf("Sizeof pf->values %zd\n", sizeof(pf->values));

	pf->count = n;
	pf->values[0] = 1.1;
	pf->values[1] = 2.1;
	pf->values[2] = 3.1;

	pf->average = 0.0;

	for (unsigned i = 0; i < pf->count; ++i)
		pf->average += pf->values[i];

	pf->average /= (double)pf->count;
	
	printf("Average = %f\n", pf->average);



	////���ǻ���
	//struct nonflex
	//{
	//	size_t count;
	//	double average;
	//	double* values; //�����ʹ� �����ͺ��� ũ�⸸ŭ �޸� ������ �����ϱ� ������ ���ӵ� ������ �Ҵ� �ȵ�
	//};

	//struct nonflex nf;
	//nf.values = (double*)malloc(sizeof(double) * n);

	//struct flex* pf2 = (struct flex*)malloc(sizeof(struct flex) + n * sizeof(double));
	//if (pf2 == NULL) exit(1);

	//*pf2 = *pf; //don't copy flexable members, use memcpy()
	//free(pf);
	//free(pf2);

	return 0;
}