#include <stdio.h>

int main()
{
	// ����һ��������
	// ����һ���������������ʼ����һ����Ա
	union share
	{
		char c;
		int i;
	}mys = {'a'};

	// �����������ֿ�
	union share mys2 = { 'b' };

	printf("mys.c=%c\n", mys.c);

	// ����һ��ָ��
	union share *p_s;
	p_s = &mys2;
	printf("mys2.c=%c\n", p_s->c);

	// ��Ҫ��ͼͬʱʹ�ò�ͬ��Ա
	// ����ֵ���า�ǵ����
	// V��ASCIIֵΪ86
	mys.i = 86;
	printf("mys.i=%d\n", mys.i);
	printf("mys.c=%c\n", mys.c);

	// b��ASCIIֵΪ98
	mys.c = 'b';
	printf("mys.i=%d\n", mys.i);
	printf("mys.c=%c\n", mys.c);
	
	// �������С
	printf("share�Ĵ�СΪ��%d�ֽ�\n", sizeof(union share));

	// ʹ��typedef, ��struct������union����
	
	typedef struct
	{
		int x;
		int y;
	}coord;

	struct mys
	{
		int i;
	}m2 = {2};

	typedef struct mys m;

	m m1 = { 1 };

	coord mycoord = {1,2};
	printf("mucoord.x=%d\n", mycoord.x);

	return 0;
}