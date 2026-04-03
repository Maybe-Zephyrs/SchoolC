#include <stdio.h>
#include <math.h>
#define pi 3.1415926
int main()
{
    long d;
    double x;
    scanf("%ld", &d);
    x = 0.5 * sin(d * PI / 180.0);
    printf("x=%lf\n", x);
    return 0;
}