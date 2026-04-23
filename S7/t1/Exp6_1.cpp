#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d,%d", &a, &b);
    if (a == 0)
    {
        if (b == 0)
            printf("error\n");
        else
            return 0;
    }
    else
    {
        a++;
    }
    return 0;
}