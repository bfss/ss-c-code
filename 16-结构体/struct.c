#include <stdio.h>

int main()
{
	// ����һ���ṹ�壬�����������ṹ�����
	struct coord
	{
		int x;
		int y;
	}first, second = {1,2};
	// �ֿ������붨��
	struct coord third, fourth = {5,6};

	printf("����Ϊ��(%d,%d)\n", second.x, second.y);
	printf("����Ϊ��(%d,%d)\n", fourth.x, fourth.y);

	// ���ṹ��Ա��ֵ
	first.x = 3;
	first.y = 4;
	// �������һ�½��
	printf("����Ϊ��(%d,%d)\n", first.x, first.y);

	// �ṹ�廥�ำֵ
	third = first;
	printf("����Ϊ��(%d,%d)\n", third.x, third.y);
	
	// һ����ʾ���εĽṹ��
	// ��Ա�ǶԽǶ��������
	struct rectangle
	{
		struct coord topleft;
		struct coord bottomright;
	}myrect;

	// ��ֵ
	myrect.topleft.x = 123;
	// ���
	printf("%d\n", myrect.topleft.x);

	return 0;
}