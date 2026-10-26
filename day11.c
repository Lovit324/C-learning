/*//数组与指针练习
#include<stdio.h>
int i = 0, j = 0, k = 0;
int max=0, min=0;
#define length 10
int a[length];
int b[3][3];
int c[length];
char A = 0;
char* p = &A;
int B = 0;
int* q = &B;
void clearInputBuffer(void);
void MIXorMIN(int c[length],int LENGTH ,int *max,int *min)
{
	*max = c[0];
	*min = c[0];
	for (int i = 0; i < length; i++)
	{
		if (c[i] < *min)
		{
			*min = c[i];
		}
		if (c[i] > *max)
		{
			*max = c[i];
		}
	}


}



int	main(void)
{
	printf("输入10个数字\n");
	for (int i = 0; i < length; i++)
	{
		scanf_s("%d", &a[i]);	//赋值ing
		if (i == 9)
		{
			for (i = 0;i < length;i++)
			{
				printf("%d\t", a[i]);	//打印数组的数字
			}
		}
	}
	
	clearInputBuffer();
	//清理多余数据
	printf("\n输入9个数字\n");
	for (int j = 0;j < 3;j++)
	{
		for (int k = 0;k < 3;k++)
		{
			scanf_s("%d", &b[j][k]);	//赋值ing

		}
	}
	
	for (int j = 0;j < 3;j++)
	{
		for (int k = 0;k < 3;k++)
		{
			printf("%4d", b[j][k]);	//输出数组

		}
		printf("\n");
	}
	
	clearInputBuffer();
	//清理多余数据
	printf("输入10个数字\n");
	for (int i = 0; i < length; i++)
	{
		scanf_s("%d", &c[i]);	//赋值ing
	}
	//利用指针改写变量值
	MIXorMIN(c, length, &max, &min);
	printf("数组C中的最大值为%d，最小值为%d\n", max, min);
	
	//指针的运算
	printf("%p %p\n",p ,p + 1);
	printf("%p %p\n", q, q + 1);



}*/
