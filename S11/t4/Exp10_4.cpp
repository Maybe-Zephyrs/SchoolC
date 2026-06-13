#include <stdio.h>
int main()
{
    int F[11];
    int i;
    int max, min, zero_count;
    F[0] = 1;
    F[1] = 1;
    F[2] = 0;
    for (i = 3; i <= 10; i++)
    {
        F[i] = F[i - 1] - 3 * F[i - 2] + 2 * F[i - 3];
    }
    max = F[0];
    min = F[0];
    zero_count = 0;
    for (i = 0; i <= 10; i++)
    {
        if (F[i] > max)
        {
            max = F[i];
        }
        if (F[i] < min)
        {
            min = F[i];
        }
        if (F[i] == 0)
        {
            zero_count++;
        }
    }
    printf("最大值：%d\n", max);
    printf("最小值：%d\n", min);
    printf("值等于0的个数：%d\n", zero_count);

    return 0;
}