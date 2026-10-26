/*#include <stdio.h>
int x = 0, one = 0, two = 0, five = 0;
int main()
{
	//嵌套循环练习

	printf("输入一个金额（最好小于十）\n");
	scanf_s("%d", &x);
	while (five <= 2 * x)
	{
		two = 0;
		while (two <= 5 * x)
		{
			one = 0;
			while (one <= 10 * x)
			{
				if (5 * five + 2 * two + one == x * 10)
				{
					printf("\n可以由%d个五角，%d个二角，%d个一角组成", five, two, one);
				}

				one++;
			}
			two++;
		}
		five++;


	}
	//只输出一个方案
	five = 0;
	printf("\n输入一个金额（最好小于十）\n");
	scanf_s("%d", &x);
	while (five <= 2 * x)
	{
		two = 0;
		while (two <= 5 * x)
		{
			one = 0;
			while (one <= 10 * x)
			{
				if (5 * five + 2 * two + one == x * 10)
				{
					printf("\n可以由%d个五角，%d个二角，%d个一角组成", five, two, one);
					goto	out;
				}

				one++;
			}
			two++;
		}
		five++;


	}out:;



}

*/
