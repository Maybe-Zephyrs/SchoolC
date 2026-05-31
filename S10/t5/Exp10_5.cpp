#include <stdio.h>

long m(int k);
void main()
{
    long s = 0;
    int i;
    for (i = 1; i <= 10; i++)
        s = s + m(i);
    printf("%ld\n", s);
}

long m(int k)
{
    long t = 1;
    int j;
    for (j = 1; j <= k; j++)
        t = t * j;
    return t;
}