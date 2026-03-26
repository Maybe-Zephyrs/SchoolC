#include <stdio.h>
int main()
{
    int i = 10, j = 20;
    float x = 3.5;
    printf("%d\n", -i / j + x);
    printf("%d\n", (float)i / j + x);
    printf("%d\n", i * j++ + x / 7 * 2);
    printf("%d\n", i += j / 5 - x, i * i + 20);
    printf("%d\n", i %= (j %= 3));
    printf("%d\n", i += i -= i *= i);
    printf("%d\n", (float)(i + j) / 2 + (int)x % (-5));
}