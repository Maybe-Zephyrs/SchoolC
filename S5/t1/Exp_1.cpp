#include <stdio.h>
#define PI 3.1415926

int main()
{
    double r, area, volume;
    printf("请输入球体的半径: ");
    scanf("%lf", &r);
    area = 4 * PI * r * r;
    volume = (4.0 / 3) * PI * r * r * r;
    printf("球体的表面积为: %.2f\n", area);
    printf("球体的体积为: %.2f\n", volume);
    return 0;
}
