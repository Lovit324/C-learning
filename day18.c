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

struct U1
{
    unsigned int u1:1;
    unsigned int u2:2;
    unsigned int u3:3;
    unsigned int u4:4;
    unsigned int uu:22;
}   u1;
struct U2
{
    unsigned int U1 : 1;
    unsigned int U2 : 2;
    unsigned int U3 : 3;
    unsigned int U4 : 4;
    unsigned int UU : 23;
}   u2;






int main()
{   
	myenum();

    u1.u1 = 1;
    u1.u2 = 3;
    u1.u3 = 5;
    u1.u4 = 6;
    u1.uu = 0;
    printf("%d", sizeof(u1));       //32位是四个字节，一个int
	printf("\n");
    printf("%d", sizeof(u2));       //33位是八个字节，两个int
    printf("\n");
    _10to2(*(int*)&u1);             //从左到右依次按照位来输出
    printf("\n");







}
    