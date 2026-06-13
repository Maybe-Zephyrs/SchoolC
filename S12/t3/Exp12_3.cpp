#include <stdio.h>
#define EX(a, b) a = a + b, b = a - b, a = a - b;
void main()
{
    int x = 5, y = 9;
    EX(x, y);
    printf("x=%d,y=%d\n", x, y);
}