#include <stdio.h>
#include <math.h>
float main()
{
    float a, b, c;
    float x, y, z;
    float p;

    printf("请输入三角形三边长：");
    scanf("%f%f%f", &a, &b, &c);

    x = (a > b ? a : b);
    x = (x > c ? x : c);
    z = (a < b ? a : b);
    z = (z < c ? z : c);
    y = a + b + c - x - z;

    p = (x + y + z) / 2;

    if (y + z > x)
        printf("%.2f,%.2f,%.2f可以组成三角形,面积为%.2f\n", a, b, c, sqrt(p * (p - x) * (p - y) * (p - z)));
    else
        printf("不能组成三角形\n");
}