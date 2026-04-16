#include <stdio.h>
int main()
{
    int a;
    printf("请输入一个三位数：");
    scanf("%d", &a);
    int A = a / 100, B = a / 10 % 10, C = a % 10;
    A = A * A * A;
    B = B * B * B;
    C = C * C * C;
    if (a == A + B + C)
        printf("%d是水仙花数\n", a);
    else
        printf("%d不是水仙花数\n", a);
}