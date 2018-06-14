#include <stdio.h>
#include <stdlib.h>

int main()
{
	// malloc()演示
	printf("生成前10个大写字母\n");  
	char *message,*ptr;
	// 分配空间大小为要存储的元素个数*每个元素大小,需要存储空字符，所以实际大小要+1
	// 获取输入时一定要预先分配存储空间，也可以使用字符数组
	message = (char *)malloc(11 * sizeof(char));      
	if (message == NULL)
	{
		printf("空间不够啦~\n");
		return 1;
	}
	// message始终指向字符串开头，不能改变，所以用p来赋值
	ptr = message;
	printf("那么开始生成咯~\n");
	for (int i = 65; i < 75; i++)
	{
		*ptr = i;
		*ptr++;
	}
	// 最后要有空字符
	*ptr = '\0';

	// 输出演示
	puts(message);
	printf("%s\n", message);

	// 最后要释放malloc()分配的资源，节约内存
	free(message);

	// 下面演示输入
	char *m,*m2;
	// 分配空间
	m=(char *)malloc(11 * sizeof(char));
	if (m == NULL)
	{
		printf("空间不够啦~");
		return 1;
	}
	// 使用gets()
	printf("输入一个小于等于10个字符的字符串");
	gets(m);
	puts(m);
	// 使用gets()返回值
	printf("再来一遍\n");
	m2 = gets(m);
	puts(m);
	puts(m2);
	// 使用scanf()
	printf("换个方式，走你\n");
	scanf("%s", m);
	puts(m);
	// 使用scanf()
	printf("还得再来一次~,试试这个\n");
	scanf("%3s", m);
	printf("%s\n", m);
	// 不要忘记释放内存
	free(m);
	return 0;
}