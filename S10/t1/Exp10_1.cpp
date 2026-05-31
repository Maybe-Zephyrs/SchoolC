#include <stdio.h>
#include <math.h>

int main()
{
    int count = 0;
    int largest = -1;
    for (int n = 1; n <= 100; ++n)
    {
        int dcount = 0;
        for (int i = 1; i * i <= n; ++i)
        {
            if (n % i == 0)
            {
                if (i * i == n)
                    dcount += 1;
                else
                    dcount += 2;
            }
        }
        if (dcount % 2 == 1)
        {
            count++;
            largest = n;
        }
    }
    printf("共有符合要求的整数%d个\n", count);
    if (largest != -1)
        printf("最大的数是 %d\n", largest);
    return 0;
}
