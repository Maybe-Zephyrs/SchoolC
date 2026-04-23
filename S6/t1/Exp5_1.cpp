#include <stdio.h>
void main()
{
    int a, b, t;
    scanf("%d%d", &a, &b);
    printf("a=%db=%d\n", a, b);
    t = a;
    a = b;
    b = t;
    printf("a=%db=%d\n", a, b);
}