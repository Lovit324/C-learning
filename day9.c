//练习for循环
#include<stdio.h>


int main()
//利用for循环计算阶乘
{
	int	num = 0, result = 1;
	printf("请输入一个数字\n");
	scanf_s("%d",& num);
	for (int i = 1;i <= num;i++)
	{
		result *= i;
	}
	printf("这个数字的阶乘为%d\n",result);

	int NUM = 0, RESULT = 1;
	printf("请输入一个数字\n");
	scanf_s("%d", &NUM);
	for (;NUM > 1;NUM--)
	{
		RESULT = RESULT * NUM;
	}
	printf("这个数字的阶乘为%d\n\n\n",RESULT);

//取数组里的偶数项（不包含0）
	int	arr[10] = { 1,2,3,4,5,6,7,8,9,10 }, I =1;
	printf("数组里的偶数项为\n");
	for (I = 1;I <= 10;I++)
	{
		if(I%2==1)
		{
			printf(" %d,", arr[I]);
		}
	}
	printf("\n\n\n");
//for循环的计数规则
	int	x = 0, X = 0;
	for ( x = 0; x < 5; x++)
	{
		printf("x=%d\n", x);
	}
	printf("x最终等于%d\n\n\n", x);
	for ( X = 0; X <=5; X++)
	{
		printf("X=%d\n", X);
	}
	printf("X最终为%d", X);

}