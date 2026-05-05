#include <stdio.h>
void main()
{
    int i = 1, sum = 0;
    while (i < 10)
    {
        sum += i;
        i = i + 2;
    }
    printf("%d\n", sum);
}