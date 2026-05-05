#include <stdio.h>
int main()
{
    int k = 1;
    int sum1 = 0, sum2 = 0, sum = 0;

    while (k <= 100)
    {
        sum1 = sum1 + k;
        sum2 = sum2 + k * k;
        sum = sum1 + sum2;
        k++;
    }
    printf("ԭʽ=%d\n", sum);

    return 0;
}