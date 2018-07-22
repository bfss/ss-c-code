#include <stdio.h>
#include <conio.h>

int main()
{
	/*char c;
	while ((c = getche()) != '\r')
	{
		printf("%c", c);
	}*/

	/*char str[100];
	gets(str);
	puts(str);*/

	char fstr[100];
	fgets(fstr, 4, stdin);
	puts(fstr);

	return 0;
}