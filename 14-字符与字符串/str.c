#include <stdio.h>

int main()
{
	char c = ',';
	printf("%d\n", c);

	char string[3] = { 'a','b','\0' };
	char string2[3] = "ab";
	char string3[] = "ab";

	printf("%s\n", string3);

	return 0;
}