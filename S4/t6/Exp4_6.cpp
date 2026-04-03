#include <stdio.h>
#include <math.h>

int main()
{
    double a = 6.4, x = 3.4;
    double y;

    y = sin(sqrt(a * x)) + log(a + x);

    printf("y = %lf\n", y);
    return 0;
}