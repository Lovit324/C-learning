//结构练习
#include <stdio.h>
void clearInputBuffer(void);      //清理输入缓存区
int _10to2 (int a);      //将数字的二进制显示出来
struct myself
{
    long long int id;
    char name[20];
    int age;
    float height;
    float weight;
}somebody;
struct myself me =      //初始化赋值
{
    .id = 2604020813,
    .name = "lovit324",
    .age = 18,
    .height = 1.65,
    .weight = 47.8
};

struct AB
{
    int a;
    int b;
    int c;
}A,B;

struct teamnumber
{
    char num1[10];
    char num2[10];
    char num3[10];
}TEAM1,TEAM2,TEAM3;

struct studyteam
{
    struct teamnumber team1;
    struct teamnumber team2;
    struct teamnumber team3;
}CLASS1;



struct AB* getsruct(struct AB* p)           //返回结构体指针并赋值
{
    printf("输入三个数字：");
    scanf_s("%d %d %d",&p->a,&p->b,&p->c);
    clearInputBuffer();      //清理输入缓存区
    return p;
}

void outstruct(struct AB p)           //输出结构体变量的成员值
{
    printf("a:%d\n",p.a);
    printf("b:%d\n",p.b);
    printf("c:%d\n",p.c);
}

void mintomax(struct AB *p)           //从小到大排序a b c
{
    int temp;
    if(p->a>p->b)
    {
        temp=p->a;
        p->a=p->b;
        p->b=temp;
    }
    if(p->a>p->c)
    {
        temp=p->a;
        p->a=p->c;
        p->c=temp;
    }
    if(p->b>p->c)
    {
        temp=p->b;
        p->b=p->c;
        p->c=temp;
    }

    printf("排序后的结果为:%d %d %d\n",p->a,p->b,p->c);

}






int main()
{
    somebody = me;      //拷贝

    printf("id:%lld\n",me.id);
    printf("name:%s\n",me.name);
    printf("age:%d\n",me.age);
    printf("height:%.2f\n",me.height);
    printf("weight:%.1f\n",me.weight);  

    printf("\n");

    printf("id:%lld\n",somebody.id);
    printf("name:%s\n",somebody.name);
    printf("age:%d\n",somebody.age);
    printf("height:%.2f\n",somebody.height);
    printf("weight:%.1f\n",somebody.weight);  

    printf("\n");

    struct AB A={0,0,0};     //初始化赋值
    struct AB B={0,0,0};

    printf("%d %d %d\n",A.a,A.b,A.c);

    getsruct(&A);
    outstruct(A);           //赋值然后输出
    outstruct(*getsruct(&A));     //也是赋值然后输出
    mintomax(getsruct(&A));     //排序ing
    *getsruct(&A)=B;     //将B赋值给A
    printf("%d %d %d\n",A.a,A.b,A.c);

    struct teamnumber TEAM1={"me1","she1","he1"},TEAM2={"me2","she2","he2"},TEAM3={"me3","she3","he3"};
    struct studyteam CLASS1={ TEAM1, TEAM2, TEAM3};
    printf("team1:%s %s %s\n",CLASS1.team1.num1,CLASS1.team1.num2,CLASS1.team1.num3);
    printf("team2:%s %s %s\n",CLASS1.team2.num1,CLASS1.team2.num2,CLASS1.team2.num3);
    printf("team3:%s %s %s\n",CLASS1.team3.num1,CLASS1.team3.num2,CLASS1.team3.num3);

    _10to2(10);


}   