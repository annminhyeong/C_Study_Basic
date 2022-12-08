#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 41

struct person
{
	//구조체 안에서 맴버를 선언하는 것만으로는 메모리를 갖지 않음
	char name[MAX]; //member
	int age;        //member
	float height;   //member
};

int main()
{	
	int flag;

	//구조체 변수 선언방법
	struct person genie;

	strcpy(genie.name, "Will Smith");
	genie.age = 1000;
	flag = scanf("%f", &genie.height);
	printf("%f\n", genie.height);

	//구조체 변수 초기화 방법
	struct person princess = { "Naomi Scott", 18, 160.0f };

	struct person princess2 = { 
		"Naomi Scott",
		18,
		160.0f
	};

	strcpy(princess.name, "Naomi Scott");
	princess.age = 18;
	princess.height = 160.0f;


	//구조체 지정 초기화 방법
	struct person beauty = {
		.age = 19,
		.name = "Bell",
		.height = 150.0f
	};

	//구조체 포인터
	struct person* someone;
	
	someone = &genie;
	//someone = (struct person*)malloc(sizeof(struct person));

	//포인터로 맴버에 접근할때는 점 대신 화살표를 사용함
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


	//typedef는 자료형으로 선언하는 것이므로 struct에 typedef를 붙이면
	//struct 안붙여도 됨

	//person이라는 타입을 my_person으로 선언한다라는 의미
	typedef struct person my_person;
	my_person p3;

	typedef struct person person;
	person p4;

	//구조체를 선언할 때 typedef로 선언 할 수 있음
	typedef struct {
		char name[MAX];
		char hobby[MAX];
	} friend;

	friend f4;

	return 0;
}