#include <stdio.h>
int main()
{
    int n;
    printf("请输入一个整数：");
    scanf("%d", &n);
    printf("该整数的逆序是：");
    while (n > 0)
    {
        printf("%d", n % 10);
        n = n / 10;
        if (n == 0)
        {
            break;
        }
    }
}