#include <stdio.h>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

#define OFFSETOF(TYPE, ELEMENT) ((size_t)&(((TYPE *)0)->ELEMENT))

typedef struct PodTag
{
	int   i;
	double d;
	char  c;
} PodType;

int main()
{
	printf("%d", OFFSETOF(PodType, c));

	_getch();
	return 0;
}
