#include <stdio.h>

#define PI 3.14

typedef int integer;

int main()
{

	integer var3;
	int var,var2;
	int var4 = 2;
	var3 = 1;

	var = 3.91;

	// var2 = 0xG;
	
	printf("var = %d\n", var);

	printf("0.22占用 %d 个字节\n", sizeof(0.22));
	printf("1.2e5占用 %d 个字节\n", sizeof(1.2e5));

	int PIII;

	// PI
	printf("PI=%lf\n",PI);

	const int con = 8;
	// con = 9;

	return 0;
}