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

struct car_data
{
	char model[15];
	int status; // 0 = personal, 1 = compony
	union {
		struct personal_owner po;
		struct personal_company co;
	};

};

void print_car(struct car_data car)
{
	printf("--------------------------------------\n");
	printf("Car model : %s\n", car.model);

	if (car.status == 0)
		printf("Personal onwer : %s-%s\n",
			car.po.rrn1, car.po.rrn2);
	else
		printf("Personal onwer : %s-%s-%s\n",
			car.co.rrn1, car.co.rrn2, car.co.rrn3);
	printf("--------------------------------------\n");
}

int main()
{
	struct car_data my_car = {
		.model = "Avante",
		.status = 0,
		.po = {"830422", "1185600"}
	};

	struct car_data company_car = {
		.model = "Sonata",
		.status = 1,
		.co = {"111", "22", "33333"}
	};

	print_car(my_car);
	print_car(company_car);
	

	struct Vector2D {
		union {
			struct { double x, y; };
			struct { double i, j; };
			struct { double arr[2]; };

		};
	};

	typedef struct Vector2D vec2;
	vec2 v = { 3.14, 2.99 };

	printf("%.2f %.2f\n", v.x, v.y);
	printf("%.2f %.2f\n", v.i, v.j);
	printf("%.2f %.2f\n", v.arr[0], v.arr[1]);

	for (int d = 0; d < 2; d++)
		printf("%.2f ", v.arr[d]);

	return 0;
}