#include <stdio.h>

struct names
{
	char first[20];
	char last[20];
};

struct person
{
	int id;
	struct names name;
};

struct person2
{
	int id;
	struct { char first[20]; char last[20]; };
};

int main()
{	
	struct person ted = { 123, {"Bill", "Gates"} };
	struct person ted3 = { 125, {"Robert", "Hands"} };

	puts(ted.name.first);
	puts(ted3.name.first);

	struct person2 ted2 = { 124, {"Steve", "wozniak"} };
	//struct person2 ted2 = { 124, "Steve", "wozniak" }; //°¡´É

	puts(ted2.first);

	return 0;
}