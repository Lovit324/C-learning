//动态内存分配
#include<stdio.h>
#include<stdlib.h>
int num = 0, i = 0;
int* p=0;




int main(void)
{
	printf("输入数目\n ");
	scanf_s("%d", &num);
	p = (int*)malloc(num*sizeof(int));	//动态内存分配
	printf("输入数值\n");
	for(i = 0; i < num; i++)
	{
		scanf_s("%d", &p[i]);
	}
	printf("输出数值\n");
	for(i = 0; i < num; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");

	printf("逆序输入数值\n");
	for (i = num - 1;i >= 0;i--)
	{
		printf("%d ", p[i]);
	}
	printf("\n");

	free(p);			//归还内存（必须原样归还）

	return 0;
}
