#include <stdio.h>

int main(void)
{
    int a, b, c;
    int count = 0;
    for (a = 0; a <= 20; ++a)
    {
        if ((100 - 5 * a) % 3 != 0)
            continue;
        b = (100 - 5 * a) / 3;
        if (b < 0)
            continue;
        c = 100 - a - b;
        if (c < 0)
            continue;
        if (3 * a + 2 * b + c * 0.5 != 100.0)
            continue;
        printf("大马=%d, 中马=%d, 小马=%d\n", a, b, c);
        ++count;
    }
    printf("共有以上 %d 种驮法\n", count);
    return 0;
}
