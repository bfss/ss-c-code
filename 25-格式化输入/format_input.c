#include <stdio.h>

int main()
{
	int i1=0,i2=0;
	double d = 0;
	float f = 0;
	scanf("%2d", &i1);
	fflush(stdin);
	scanf("%3d", &i2);
	printf("i1=%d,i2=%d\n", i1, i2);

	//scanf("%lf", &d);
	//printf("d = %lf\n", d);

	return 0;
}