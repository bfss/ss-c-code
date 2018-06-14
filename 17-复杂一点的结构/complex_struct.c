#include <stdio.h>
#include <stdlib.h>

// 包含数组的结构体
struct data
{
	int count;
	int num[2];
}person = { 2,{ 1,2 } };

// 函数原型
void display(struct data d);

int main()
{
	

	for (int i = 0; i < person.count; i++)
	{
		printf("%d\n", person.num[i]);
	}

	// 结构数组
	struct gra 
	{
		int num;
		double grade;
	};

	struct gra list[2];
	for (int i = 0; i < 2; i++)
	{
		printf("输入学号:");
		scanf("%d", &list[i].num);
		printf("输入分数:");
		scanf("%lf", &list[i].grade);
	}
	for (int i = 0; i < 2; i++)
	{
		printf("学号为%d的同学的分数为：%lf\n",list[i].num,list[i].grade);
	}

	// 结构体包含指针
	struct strs 
	{
		char *str;
	}mystr;

	// 动态分配内存
	mystr.str = (char*)malloc(21 * sizeof(char));
	puts("输入一个小于20个字符的字符串");
	scanf("%s", mystr.str);
	puts(mystr.str);
	free(mystr.str);

	// 指针指向结构体（存储结构体地址）
	struct mystruct
	{
		int num;
	}first = {1};

	
	struct mystruct *p_ms;
	p_ms = &first;

	// 使用.访问成员
	printf("*:%d\n", (*p_ms).num);
	// 使用->访问成员
	printf("->:%d\n", p_ms->num);

	// 将结构体传递给函数
	display(person);
	return 0;
}

void display(struct data d)
{
	printf("count:%d\n", d.count);
}