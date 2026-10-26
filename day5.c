//利用取余符号进行简单的时差换算
#include <stdio.h>
int hour1 = 0, minute1 = 0;
int hour2=0, minute2=0;
int time1 = 0, time2 = 0, span = 0;

int main()
{
	printf("请输入你的时间(二十四小时制，中间用空格分开）\n");
	scanf_s("%d %d", &hour1, &minute1);
	printf("请输入TA的时间（二十四小时制，中间用空格分开）\n");
	scanf_s("%d %d", &hour2, &minute2);
	int time1 = hour1 * 60 + minute1;
	int time2 = hour2 * 60 + minute2;
	if (time1 > time2) 
	{
		int	span = time1 - time2;
		int hour3 = span / 60, minute3 = span % 60;
		printf("你们的时差为%d小时%d分钟", hour3, minute3);
	}
	else if(time1<time2)
	{
		int span = time2 - time1;
		int hour3 = span / 60, minute3 = span % 60;
		printf("你们的时差为%d小时%d分钟", hour3, minute3);
	}
	else
	{
		printf("天涯共此时");
	}
	
}