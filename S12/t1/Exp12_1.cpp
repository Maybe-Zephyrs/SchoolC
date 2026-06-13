#include <stdio.h>
void f(int j);
void main()
{
    int i;
    for (i = 1; i < 4; i++)
        f(i);
}
void f(int j)
{
    static int a = 10;
    int b = 1;
    b++;
    printf("%d+%d+%d=%d\n", a, b, j, a + b + j);
    a += 10;
}