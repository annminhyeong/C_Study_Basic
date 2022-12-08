#include <stdio.h>
#include <stdlib.h>

int main()
{	
	struct Aligned
	{
		int a;
		float b;
		double c;
	};

	struct Aligned a1, a2;

	printf("struct Aligned a1\n");
	printf("Sizeof %zd\n", sizeof(struct Aligned));
	printf("%lld\n", (long long)&a1);
	printf("%lld\n", (long long)&a1.a);
	printf("%lld\n", (long long)&a1.b);
	printf("%lld\n", (long long)&a1.c);

	printf("\nstruct Aligned a2\n");
	printf("Sizeof %zd\n", sizeof(a2));
	printf("%lld\n", (long long)&a2);
	printf("%lld\n", (long long)&a2.a);
	printf("%lld\n", (long long)&a2.b);
	printf("%lld\n", (long long)&a2.c);


	//�޸� �е�
	struct Padded1
	{
		char a; //1byte
		float b; //4byte
		double c; //8byte
	};

	struct Padded1 p1;

	printf("\nstruct Padded1 p1\n");

	//float�� �ѹ��� �������� char�� 3byte�� �߰��� �޸𸮿� �Ҵ��ϹǷ� ũ�Ⱑ 16�� ����
	printf("Sizeof %zd\n", sizeof(p1));
	printf("%lld\n", (long long)&p1);
	printf("%lld\n", (long long)&p1.a);
	printf("%lld\n", (long long)&p1.b);
	printf("%lld\n", (long long)&p1.c);


	//�޸� �е�
	struct Padded2
	{
		float b; //4byte
		double c; //8byte
		char a; //1byte
	};

	struct Padded2 p2;

	printf("\nstruct Padded2 p2\n");

	//double�� �ѹ��� �������� float�� char�� ���� 4byte, 7byte�� �߰��� �޸𸮿� �Ҵ��ϹǷ� ũ�Ⱑ 24�� ����
	printf("Sizeof %zd\n", sizeof(p2)); // 8 + 8 + 8
	printf("%lld\n", (long long)&p2);
	printf("%lld\n", (long long)&p2.a);
	printf("%lld\n", (long long)&p2.b);
	printf("%lld\n", (long long)&p2.c);


	//�޸� �е�
	struct Padded3
	{
		char a; //1byte
		double b; //8byte
		double c; //8byte
	};

	struct Padded2 p3;

	printf("\nstruct Padded3 p3\n");

	//double�� �ѹ��� �������� char�� 7byte�� �߰��� �޸𸮿� �Ҵ��ϹǷ� ũ�Ⱑ 24�� ����
	printf("Sizeof %zd\n", sizeof(p3)); // 8 + 8 + 8
	printf("%lld\n", (long long)&p3);
	printf("%lld\n", (long long)&p3.a);
	printf("%lld\n", (long long)&p3.b);
	printf("%lld\n", (long long)&p3.c);


	struct Person
	{
		char name[41];
		int age;
		float heigth;
	};

	struct Person mommy;

	printf("\nstruct Person mommy\n");
	printf("%lld\n", (long long)&mommy.name[0]);
	printf("%lld\n", (long long)&mommy.age);
	printf("%lld\n", (long long)&mommy.heigth);
	
	//41 + 4 + 4 = 49 �� �ƴ϶� 41byte�� 3byte�� �߰��� �޸𸮿� �Ҵ��� ũ�Ⱑ 52�� ����
	printf("Sizeof %zd\n", sizeof(mommy));


	struct Person f[4];
	printf("\nSizeof a structure array %zd\n", sizeof(f));

	return 0;
}