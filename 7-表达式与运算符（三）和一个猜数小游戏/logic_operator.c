#include <stdio.h>

int main()
{
	// �߼����������
	printf("������ͬ��Ϊ�棺%d\n", (3 < 2) && (4 == 4));
	printf("������ͬ��Ϊ�٣�%d\n", (3 == 2) || (4 > 4));
	printf("��������ٻ�����%d\n", !(3 > 2) );

	int a = 5, b = 6, c = 5, d = 1;

	printf("%d\n", a < b || a < c&&c < d);
	printf("%d\n", a > b || !a < c&&c < d);

	int x = 1;
	printf("x+5=%d\n", x += 5);

	printf("�����������%d\n", 1 ? 3 : 5);
	printf("�����������%d\n", 0 ? 3 : 5);

	int y = 0, z = 4;
	printf("�����������%d\n", (y++, z++));

	return 0;
}