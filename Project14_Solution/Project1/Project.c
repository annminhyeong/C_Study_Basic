#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 41

struct person
{
	//����ü �ȿ��� �ɹ��� �����ϴ� �͸����δ� �޸𸮸� ���� ����
	char name[MAX]; //member
	int age;        //member
	float height;   //member
};

int main()
{	
	int flag;

	//����ü ���� ������
	struct person genie;

	strcpy(genie.name, "Will Smith");
	genie.age = 1000;
	flag = scanf("%f", &genie.height);
	printf("%f\n", genie.height);

	//����ü ���� �ʱ�ȭ ���
	struct person princess = { "Naomi Scott", 18, 160.0f };

	struct person princess2 = { 
		"Naomi Scott",
		18,
		160.0f
	};

	strcpy(princess.name, "Naomi Scott");
	princess.age = 18;
	princess.height = 160.0f;


	//����ü ���� �ʱ�ȭ ���
	struct person beauty = {
		.age = 19,
		.name = "Bell",
		.height = 150.0f
	};

	//����ü ������
	struct person* someone;
	
	someone = &genie;
	//someone = (struct person*)malloc(sizeof(struct person));

	//�����ͷ� �ɹ��� �����Ҷ��� �� ��� ȭ��ǥ�� �����
	someone->age = 1001;
	printf("%s %d\n",someone->name, (*someone).age);

	struct book
	{
		char title[MAX];
		float price;
	};

	struct {
		char farm[MAX];
		float price;
	} apple, apple2;

	strcpy(apple.farm, "Trade Joe");
	apple.price = 1.2f;

	strcpy(apple2.farm, "Safeway");
	apple2.price = 5.6f;


	//typedef�� �ڷ������� �����ϴ� ���̹Ƿ� struct�� typedef�� ���̸�
	//struct �Ⱥٿ��� ��

	//person�̶�� Ÿ���� my_person���� �����Ѵٶ�� �ǹ�
	typedef struct person my_person;
	my_person p3;

	typedef struct person person;
	person p4;

	//����ü�� ������ �� typedef�� ���� �� �� ����
	typedef struct {
		char name[MAX];
		char hobby[MAX];
	} friend;

	friend f4;

	return 0;
}