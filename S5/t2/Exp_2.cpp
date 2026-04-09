#include <stdio.h>

int main()
{
    double a, v0, t;
    double v, s;

    printf("请输入加速度a：");
    scanf("%lf", &a);
    printf("请输入初始速度v0：");
    scanf("%lf", &v0);
    printf("请输入时间t：");
    scanf("%lf", &t);

    v = v0 + a * t;
    s = v0 * t + 0.5 * a * t * t;
    printf("t时刻的速度为：%.2f\n", v);
    printf("行驶的距离为：%.2f\n", s);

    return 0;
}