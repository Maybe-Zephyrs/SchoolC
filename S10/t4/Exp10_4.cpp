#include <stdio.h>

int mul(int a, int b);
void main()
{
    int x, y, z;
    printf(" ‰»Î x, y :");
    scanf("%d %d", &x, &y);
    while (x != 0)
    {
        z = mul(x, y);
        printf("%d * %d = %d\n", x, y, z);
        scanf("%d %d", &x, &y);
    }
}
int mul(int a, int b)
{
    int c;
    c = a * b;
    return c;
}
