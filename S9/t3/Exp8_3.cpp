#include <stdio.h>
void main()
{
    int i;
    for (i=100;i>=1;i--)
    if (i%13==0)break;
        printf("%d\n", i);
}