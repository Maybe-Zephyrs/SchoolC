#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("请输入一个四位整数: ");
    scanf("%d", &num);

    int temp = num;
    for (int i = 0; i < 4; i++)
    {
        int digit = temp % 10;
        sum += digit * digit;
        temp /= 10;
    }

    printf("%d的各位数码的平方和为: %d\n", num, sum);
    return 0;
}