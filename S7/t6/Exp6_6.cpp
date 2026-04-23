#include <stdio.h>

int main(void)
{
    double weight, height, bmi;

    printf("请输入体重(kg)：");
    scanf("%lf", &weight);

    printf("请输入身高(m)：");
    scanf("%lf", &height);

    if (weight <= 0 || height <= 0)
    {
        printf("输入错误：体重和身高必须为正数。\n");
    }

    bmi = weight / (height * height);
    printf("BMI = %.2f\n", bmi);

    return 0;
}
