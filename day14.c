//字符串练习
#include<stdio.h>
#include<string.h>
char str1[20]="hello world";
char str2[20]= "bey! world";
char *q[12]={"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
char *r[31] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth", "thirteenth", "fourteenth", "fifteenth", "sixteenth", "seventeenth", "eighteenth", "nineteenth", "twentieth", "twenty-first", "twenty-second", "twenty-third", "twenty-fourth", "twenty-fifth", "twenty-sixth", "twenty-seventh", "twenty-eighth", "twenty-ninth", "thirtieth", "thirty-first"};
int i = 0, day = 0, month = 0;
char* p = str1;


void data(void)
{
	printf("请输入月份和日期（1-12和1-31，中间用空格分隔）：\n");
	scanf_s("%d %d", &month, &day);
	printf("您输入的日期是：%s %s\n", q[month - 1], r[day - 1]);
}



int main(void)
{		
	for (size_t i = 0; i < 20; i++)
	{


		if (str1[i] != '\0')
		{

			printf("%c", str1[i]);
		}
	}
	//替换字符串   !!!若定义数组时用了*str1[20]这种形式，就不可以替换字符串了，因为*str1[20]是指针数组，不能直接赋值给它
	for (size_t i = 0; i < 20; i++)
	{
		str1[i] = '\0';

		if (str2[i] != '\0')
		{
			*p++ = str2[i];
		}
	}

	printf("\n");

	for (size_t i = 0; i < 20; i++)
	{


		if (str1[i] != '\0')
		{

			printf("%c", str1[i]);
		}
	}

	printf("\n");

	data();

	printf("\n");



}