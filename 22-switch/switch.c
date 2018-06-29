#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 2;
	// return 0;
	// exit(EXIT_SUCCESS);
	/*if (a == 1)
	{
		printf("1\n");
	}
	else if (a == 2)
	{
		printf("2\n");
	}
	else if (a == 3)
	{
		printf("3\n");
	}
	else
	{
		printf("4\n");
	}*/
	switch (a)
	{
	case 1:
		printf("1\n");
		break;
	case 2:
		printf("2\n");
		break;
	case 3:
		printf("3\n");
		break;
	default:
		printf("4\n");
		break;
	}

	// system("notepad");
	system("pause");
	return 0;
	
}

