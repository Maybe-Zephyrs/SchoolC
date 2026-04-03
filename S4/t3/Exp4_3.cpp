#include <stdio.h>
void main()
{
    int a = 5, b = 7;
    float x = 67.8564, y = -789.124;
    char c = 'A';
    printf("%3d%3d\n", a, b);
    printf("%10f,%-10f\n", x, y);
    printf("%8.2f,%4f,%e,%10.2e\n", x, y, x, y);
    printf("%c,%d,%o,%x\n", c, c, c, c);
}