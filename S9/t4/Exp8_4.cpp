#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    double s = 0.0;
    double best_s = 0.0;
    int best_n = 0;
    double best_diff = 1e18;

    for (n = 1; n <= 1000000; n++) {
        s += 1.0 / n;
        double diff = fabs(s - 8.0);
        if (diff < best_diff) {
            best_diff = diff;
            best_s = s;
            best_n = n;
        }
        if (s > 8.0 && diff > best_diff) {
            break;
        }
    }

    printf("最接近8的s值是: %.12f\n", best_s);
    printf("对应的n值是: %d\n", best_n);

    return 0;
}
