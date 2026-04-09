#include <stdio.h>

int main()
{
    float height, weight, bmi;

    printf("请输入您的身高（米）：");
    scanf("%f", &height);

    printf("请输入您的体重（千克）：");
    scanf("%f", &weight);

    bmi = weight / (height * height);

    printf("您的BMI指数为：%.2f\n", bmi);

    return 0;
}