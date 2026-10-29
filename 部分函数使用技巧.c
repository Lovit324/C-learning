#include<stdio.h>
void clearInputBuffer(void)
//清理输入缓存区
{
    int ch;
    ch = getchar();
    while (ch != '\n' && ch != EOF) 
    {
        ch = getchar();
    }
}

int takethefristnumber(void) 
//取出第一个数字
{
    int ch;
    printf("请输入一个数字：");

    while ((ch = getchar()) != EOF && (ch < '0' || ch > '9')) {}
    printf("首位数字是：%d\n", ch - '0');

    while ((ch = getchar()) != '\n' && ch != EOF) {}
    return 0;
}
int _10to2 (int a)
//将数字的二进制显示出来
{
 unsigned int i =1u<<31;
 while(i!=0)
 {
    if(a&i)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    i>>=1;
    
 }
 return 0;
}
