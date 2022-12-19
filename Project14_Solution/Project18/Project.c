#include <stdio.h>

struct personal_owner
{
	//개인 등록번호 자리수 ex) 830422-1185600
	char rrn1[7];
	char rrn2[8];
};

struct personal_company
{
	//회사 등록번호 자리수 ex) 111-22-33333 
	char rrn1[7];
	char rrn2[8];
	char rrn3[8];
};

union data
{
	struct personal_owner po;
	struct personal_company co;
};

struct car_data
{
	char model[15];
	int status; // 0 = personal, 1 = compony
	union data ownerinfo;

};

void print_car(struct car_data car)
{
	printf("--------------------------------------\n");
	printf("Car model : %s\n", car.model);

	if (car.status == 0)
		printf("Personal onwer : %s-%s\n",
			car.ownerinfo.po.rrn1, car.ownerinfo.po.rrn2);
	else
		printf("Personal onwer : %s-%s-%s\n",
			car.ownerinfo.co.rrn1, car.ownerinfo.co.rrn2, car.ownerinfo.co.rrn3);
	printf("--------------------------------------\n");
}

int main()
{	
	struct car_data my_car = {
		.model = "Avante",
		.status = 0,
		.ownerinfo.po = {"830422", "1185600"}
	};

	struct car_data company_car = {
		.model = "Sonata",
		.status = 1,
		.ownerinfo.co = {"111", "22", "33333"}
	};

	print_car(my_car);
	print_car(company_car);

	return 0;
}