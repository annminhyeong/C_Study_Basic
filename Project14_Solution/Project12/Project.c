#include <stdio.h>
#include <string.h>

#define MAXTITL 41
#define MAXAUTL 31

struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	//char* title; //not recommended
	//char* author; //not recommended
	float price;
};

struct rectangle
{
	double width;
	double height;
};

double rect_area(struct rectangle r)
{
	return r.width * r.height;
}

double rect_area_ptr(struct rectangle* r)
{
	return r->width + r->height;
}



int main()
{	
	struct book book_to_read = { "Crime and Punishment", "Fyodor Dostoyevsky", 11.25f };

	//error : 값을 재할당 할때는 불가능
	//book_to_read = { "Crime and Punishment", "Fyodor Dostoyevsky", 11.25f };

	//구조체 재할당 방법1
	strcpy(book_to_read.title, "Alice in Wonderland");
	strcpy(book_to_read.author, "Lewis Carroll");
	book_to_read.price = 20.3f;

	//구조체 재할당 방법2
	struct book book2 = { "Alice in Wonderland", "Lewis Carroll", 20.3f };
	book_to_read = book2;

	//구조체 재할당 방법3
	book_to_read = (struct book){ "Alice in Wonderland", "Lewis Carroll", 20.3f };
	printf("%s %s\n", book_to_read.title, book_to_read.author);


	struct rectangle rec1 = { 1.0, 2.0 };
	double area = rect_area(rec1);
	area = rect_area((struct rectangle) {1.0, 2.0});
	area = rect_area_ptr(&(struct rectangle) { .height = 1.0, .width = 2.0 });
	printf("%f\n", area);

	return 0;
}