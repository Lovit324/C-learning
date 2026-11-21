/*//部分运算符号的简单练习
#include<stdio.h>
int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, a = 97;
double NUM1 = 0.0, NUM2 = 0.0, NUM3 = 0.0;
char A = 'A', B = 'B', C = 'C';
int arr[6] = { 1,2,3,4,5,6 };
int main(void)
{	//数据类型强制转换
	double NUM1 = (int)4.6;			
	printf("%.1lf\n", NUM1);			//结果不为4.6,而是4.0
	int num1 = 2, num2 = 3;
	int result1 = num2 / num1;		
	double result2 = num2/ (double)num1;	//变为浮点型，保留精度
	printf("3/2的错误结果为%d\n", result1);
	printf("3/2的正确结果为%.1lf\n",result2);
	
	//利用字符常量的ASCII值进行整型、字符型的转换
	int A_to_ASCII= (int)A;
	char ASCII_to_a = (char)a;

	printf("%c的ASCII值为%d\n", A, A_to_ASCII);	
	printf("ASCII值%d所对应的字符为%C\n",a,ASCII_to_a );
	
	//取出数组中的数
	printf("%d,%d,%d\n",arr[0],arr[3], arr[6]);			//arr[6]并不表示第六个数字，而是表示第七个数字，即取0

	//自增与自减
	num3=0;num4 = num3++;
	printf("num3=%d,num4=%d\n", num3, num4);			//先赋值再自增
	
	num3=0;num4 = ++num3;
	printf("num3=%d,num4=%d\n", num3, num4);			//先自增再赋值
	
	num3 = 0;num4 = ++num3 + num3++;
	printf("num3=%d,num4=%d\n", num3, num4);			//第一次使用num3时，值为1，第二次为1，则num4为2
	
	num3 = 0;num4 = num3++ + ++num3;
	printf("num3=%d,num4=%d\n", num3, num4);			//第一次使用num3时，值为0，第二次为2，则num4为2
	
	num3 = 0;num4 = ++num3 * ++num3;
	printf("num3=%d,num4=%d\n", num3, num4);			//两次使用num3时，num3已经自增两次，则num4为4
	
	num3 = 0;num4 = num3++ * num3++;
	printf("num3=%d,num4=%d\n", num3, num4);			//两次使用num3时，num3没有完成自增，则num4为0
	
	num3 = 0;num4 = ++num3 * num3++;
	printf("num3=%d,num4=%d\n", num3, num4);			//进行计算时，num3只自增了一次，则1*1为1
	
	num3 = 0; num4 = num3++ * ++num3;
	printf("num3=%d,num4=%d\n", num3, num4);			//同上
	
	num3 = 0;num4 = ++num3 * ++num3;
	printf("num3=%d,num4=%d\n", num3, num4);			//进行计算时，num3自增了两次
	
	num3 = 0;num4 = num3++ * num3++;
	printf("num3=%d,num4=%d\n", num3, num4);			//进行计算时，num3未自增

	//取余的注意事项
	printf("%d,%d,%d,%d\n", 5 % 2, -5 % 2, 5 % -2, -5 % -2);		//取余只对整数有效，且符号跟随第一个数字

	//位运算符：& | ^ ~ << >>
	printf("%d,%d,%d,%d,%d,%d\n", 7 & 5,2|5,0^4,~7,1<<3,8>>3);
	//&表示转换为二进制后，都为1才取1，111&101=101
	//|表示转换为二进制后，有1则取1，010|101=111
	//^表示转换为二进制后，不同才取1，000^100=100
	//~表示转换为二进制后，包括符号位取反，~0111=1000.~x=-x-1
	//<<或者>>表示扩大或者缩小为2的N次方
	

	//三目运算符：用于简单的二选一
	printf("输入一个整数\n");
	scanf_s("%d",&num5);
	num6 = -num5;
	int abs = num5 > num6 ? num5 : num6;	//如果num5大于num6，取num5；否则取num6
	printf("它的绝对值为%d",abs);

}*/