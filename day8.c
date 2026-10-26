//switch判断与简单的循环练习
#include<stdio.h>
int main()

{
	//switch判断（整型）case（里面的值必须为常量）break（结束流程，否则会按顺序继续）default
	int grade, A=0;
	printf("输入你的成绩（百分制）\n");
	scanf_s("%d", &grade);
	int num = grade / 10;
	char level = 65;
	switch (num)
	{
	case 10:
		level += 18;
		 A = 1;
		break;
	case 9:
		level = level;
		break;
	case 8:
		level += 1;
		break;
	case 7:
		level += 2;
		break;
	case 6:
		level += 3;
		break;
	default:
		level = 'F';
		A = 2;
	}
	printf("你的成绩等级为%c\n", level);
	if (A == 1)
	{
		printf("好极了，继续保持\n");
	}
	else if(A==0)
	{
		printf("还不错\n");
	}
	else
	{
		printf("需要努力了\n\n\n\t");
	}

	
	printf("请输入一串数字\n\t");
	//清空前面所留下的enter键
	void clearInputBuffer(void);
		clearInputBuffer();
	//利用getchar取出输入区的数字
		int ch, size = 0;
		while ((ch = getchar()) != '\n' && ch != EOF)
	{
		size++;
	}
	printf("这是一个%d位数\n",size);

	//取出数组的所有数字
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int	i = 0;
	while (i < 10)
	{
		printf("\t%d\n", arr[i]);
		i++;
	}





}