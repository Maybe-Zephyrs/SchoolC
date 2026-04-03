#include <stdio.h>
int main()
{
    double F, C;
    scanf("%lf", &F);
    C = (5.0 / 9.0) * (F - 32);
    printf("F=%2.2lf\nc=%2.2lf\n", F, C);
    return 0;
}