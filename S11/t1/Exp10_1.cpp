#include <stdio.h>

int f(int x)
{
    int original = x;
    int reversed = 0;
    int remainder;

    while (x > 0)
    {
        remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x = x / 10;
    }

    if (original == reversed)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);

    if (f(num) == 1)
        printf("%d 是回文数\n", num);
    else
        printf("%d 不是回文数\n", num);

    return 0;
}