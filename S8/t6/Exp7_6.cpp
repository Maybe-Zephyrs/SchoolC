#include <stdio.h>
int main()
{
    int n = 0, i = 2;
    printf("请输入一个正整数：");
    scanf("%d", &n);
    while (i < n)
    {
        if (n % i == 0)
        {
            printf("%d不是素数\n", n);
            break;
        }
        else
        {
            i++;
        }
    }
    if (i >= n)
    {
        printf("%d是素数\n", n);
    }
}