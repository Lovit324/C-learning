//位段与枚举
#include <stdio.h>

enum color{red,bule,black,white,numofcolor};
void myenum(void)
{
	enum color c1 = red;
	enum color c2 = bule;
	enum color c3 = black;
	enum color c4 = white;
    enum color c5 = numofcolor;
	printf("%d %d %d %d\n", c1, c2, c3, c4);
    printf("the number of colors is %d\n", c5);
}
int _10to2(int a);

struct U
{
    unsigned int u1:1;
    unsigned int u2:2;
    unsigned int u3:3;
    unsigned int u4:4;
    unsigned int UU:22;
}   u0;






int main()
{   
	myenum();

    u0.u1 = 1;
    u0.u2 = 3;
    u0.u3 = 5;
    u0.u4 = 6;
    u0.UU = 0;
    printf("%d", sizeof(u0));       //32位是四个字节
    printf("\n");
    _10to2(*(int*)&u0);
    printf("\n");







}
    