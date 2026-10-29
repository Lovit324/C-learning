//字符串以及相关函数练习
#include <stdio.h>
#include<string.h>
char arr1[]="hello world";
char arr2[100]="bey world";
char A1[]="abc";
char A2[]="ABC";
char A3[]="Abc";
int len1=0;
int len2=0;
//自定义字符串长度函数
int my_strlen(const char *str,int *LEN)
{
    *LEN=0;
    while(str[*LEN]!='\0')
    {
        (*LEN)++;
    }

}



int main(void) 
{   
    //输出字符串与每个字符以及字符串的长度
    printf("%s",arr1);  //输出字符串arr1
    printf("\n");
     for(int i=0;i<strlen(arr1);i++)  //输出字符串arr1的每个字符
    {
        putchar(arr1[i]);
        printf("\n");
    }
    my_strlen(arr1,&len1);
    printf("\n");
    printf("%d",len1);
    printf("\n");
    printf("%d",sizeof(arr1));  //输出字符串的字节数（包含空字符）
    printf("\n");
    printf("%d",strlen(arr1));  //输出字符串的长度（不包含空字符）
    printf("\n");
    
    //字符串比较函数strcmp（似乎我只能返回0、1、-1）
    printf("%d",strcmp(arr1,arr2));  //输出字符串arr1和arr2的比较结果
    printf("\n");
    printf("%d",strcmp(arr2,arr1));  //输出字符串arr2和arr1的比较结果
    printf("\n");
    printf("%d",strcmp(arr1,arr1));  //输出字符串arr1和arr1的比较结果
    printf("\n");
    printf("%d",strcmp(arr2,arr2));  //输出字符串arr2和arr2的比较结果
    printf("\n");
    printf("%d",strcmp(A1,A2));  //输出字符串A1和A2的比较结果
    printf("\n");
    printf("%d",strcmp(A2,A1));  //输出字符串A2和A1的比较结果
    printf("\n");
    printf("%d",strcmp(A1,A1));  //输出字符串A1和A1的比较结果
    printf("\n");
    printf("%d",strcmp(A2,A2));  //输出字符串A2和A2的比较结果
    printf("\n");
    printf("%d",strcmp(A3,A1));  //输出字符串A3和A1的比较结果
    printf("\n");
    printf("%d",strcmp(A1,A3));  //输出字符串A1和A3的比较结果
    printf("\n");
    //字符串拷贝函数strcpy（后面的字符串会覆盖前面的字符串）
    strcpy_s(arr2,sizeof(arr2),arr1);
    printf("%s",arr2);  //输出字符串arr2
    printf("\n");
    printf("%d",strcmp(arr2,arr1));  //输出字符串arr2和arr1的比较结果
    printf("\n");
    //字符寻找函数strchr（返回字符的指针，如果不存在则返回NULL）
    printf("%s\n",strchr(arr1,'l'));  //输出字符串arr1中第一个字符l的指针
    printf("%s\n",strchr(arr1,'L'));  //输出字符串arr1中第一个字符L的指针
    printf("%s\n",strchr(arr1,'z'));  //输出字符串arr1中第一个字符z的指针
    printf("%s\n",strrchr(arr1,'l'));  //输出字符串arr1中最后一个字符l的指针
    printf("%s\n",strrchr(arr1,'L'));  //输出字符串arr1中最后一个字符L的指针
    printf("%s\n",strrchr(arr1,'z'));  //输出字符串arr1中最后一个字符z的指针
    printf("\n");



}