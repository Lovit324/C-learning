//枚举练习：输入数字，输出对应的星期名
#include <stdio.h>

enum week
 {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

// 枚举值本身就是 0~6，直接当下标查名字
const char *weekName[] = 
{
    "Monday", "Tuesday", "Wednesday", "Thursday",
    "Friday", "Saturday", "Sunday"
};

void traslation(enum week day)
{
    printf("%s\n", weekName[day]);
}

int main(void)
{
    int n = 0;
    printf("请输入 1~7 的数字: ");
    scanf_s("%d", &n);

    if (n < 1 || n > 7)
    {
        printf("输入无效，请输入 1~7\n");
        return 0;
    }

    enum week day = (enum week)n-1;
    n=n-1;
    printf("数字 %d 对应: ", n+1);
    traslation(day);
    return  0;
}