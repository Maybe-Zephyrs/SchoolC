#include <stdio.h>

#define EX(a, b)
{
    int t = a;
    a = b;
    b = t;
}

void main()
{
    int x = 5, y = 9;
    EX(x, y);
    printf("x=%d, y=%d\n", x, y);
}