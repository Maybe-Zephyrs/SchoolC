#include <stdio.h>
int main()
{
    char a = 'z';
    int c = 5;
    switch (a++)
    {
    case 'z':
        c++;
    case 'x':
        c += 20;
        break;
    case 'y':
        c -= 15;
    }
    printf("%d\n", c);
    return 0;
}