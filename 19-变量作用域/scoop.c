#include <stdio.h>

void print_vari();

int x=0;

int main()
{
	int y=10010;
	extern int x;
	// printf("main y=%d\n", y);
	printf("x=%d\n", x);
	print_vari();
	return 0;
}

void print_vari()
{
	extern int x;
	printf("x=%d\n", x);
	//printf("y=%d\n", y);
}