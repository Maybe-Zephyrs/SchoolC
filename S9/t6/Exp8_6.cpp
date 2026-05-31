#include <stdio.h>

int main(void)
{
    double grains_per_cubic_meter = 142000000.0;

    unsigned long long current = 1;
    unsigned long long total = 0;

    int square;

    for (square = 1; square <= 64; square++)
    {
        total = total + current;
        current = current * 2;
    }

    double volume = total / grains_per_cubic_meter;

    printf("棋盘上麦子的总粒数：%llu\n", total);
    printf("每立方米约有 %.0f 粒麦子\n", grains_per_cubic_meter);
    printf("国王需要麦子的体积约为：%.2f 立方米\n", volume);
    return 0;
}