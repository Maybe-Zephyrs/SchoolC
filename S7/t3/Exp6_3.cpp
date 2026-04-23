#include <stdio.h>
int main()
{
    float x, y;
    printf("x=");
    scanf("%f", &x);
    if (x < 1)
        y = x;
    else if (x >= 1 && x < 10)
        y = 3 - x / 5;
    else
        y = 3 * x - 11;
    printf("y=%.2f\n", y);
    return 0;
}