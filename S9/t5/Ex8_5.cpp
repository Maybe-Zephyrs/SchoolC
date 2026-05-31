#include <stdio.h>

int main()
{
    long n;
    printf("请输入一个正整数: ");
    if (scanf("%ld", &n) != 1 || n <= 0)
    {
        return 0;
    }
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    printf("有%d位数字", count);
    return 0;
}
