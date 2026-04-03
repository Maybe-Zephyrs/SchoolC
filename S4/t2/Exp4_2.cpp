#include <stdio.h>
void main()
{
    int a = 10, x = 5, y = 6;
    a += a *= 6;
    x = y++;
    y = ++x;
    a = x++ + y;
    printf("%d,%d,%d\n", a, x, y);
}