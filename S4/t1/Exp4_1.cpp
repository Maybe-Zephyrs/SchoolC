#include <stdio.h>
int main()
{
    float a, b, c, average;
    printf("Please input a b c: ");
    scanf("%f%f%f", &a, &b, &c);
    average = (a + b + c) / 3;
    printf("The average valueis: %f\n", average);
    return 0;
}
