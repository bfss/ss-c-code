#include <stdio.h>
#include <stdlib.h>

// ��������Ľṹ��
struct data
{
	int count;
	int num[2];
}person = { 2,{ 1,2 } };

// ����ԭ��
void display(struct data d);

int main()
{
	

	for (int i = 0; i < person.count; i++)
	{
		printf("%d\n", person.num[i]);
	}

	// �ṹ����
	struct gra 
	{
		int num;
		double grade;
	};

	struct gra list[2];
	for (int i = 0; i < 2; i++)
	{
		printf("����ѧ��:");
		scanf("%d", &list[i].num);
		printf("�������:");
		scanf("%lf", &list[i].grade);
	}
	for (int i = 0; i < 2; i++)
	{
		printf("ѧ��Ϊ%d��ͬѧ�ķ���Ϊ��%lf\n",list[i].num,list[i].grade);
	}

	// �ṹ�����ָ��
	struct strs 
	{
		char *str;
	}mystr;

	// ��̬�����ڴ�
	mystr.str = (char*)malloc(21 * sizeof(char));
	puts("����һ��С��20���ַ����ַ���");
	scanf("%s", mystr.str);
	puts(mystr.str);
	free(mystr.str);

	// ָ��ָ��ṹ�壨�洢�ṹ���ַ��
	struct mystruct
	{
		int num;
	}first = {1};

	
	struct mystruct *p_ms;
	p_ms = &first;

	// ʹ��.���ʳ�Ա
	printf("*:%d\n", (*p_ms).num);
	// ʹ��->���ʳ�Ա
	printf("->:%d\n", p_ms->num);

	// ���ṹ�崫�ݸ�����
	display(person);
	return 0;
}

void display(struct data d)
{
	printf("count:%d\n", d.count);
}