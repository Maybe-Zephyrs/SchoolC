#include <stdio.h>

int main()
{
    float c, f;

    printf("请输入摄氏温度：");
    scanf_s("%f", &c);
    f = c * 9 / 5 + 32;
    printf("该摄氏温度对应的华氏温度为%.2f\n", f);

    return 0;
}