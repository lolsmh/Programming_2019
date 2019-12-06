#include <stdio.h>
#include <math.h>

int main() {
    double a;
    double z1, z2;
    a = (a * M_PI) / 180;
    scanf("%lf", &a);
    z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) + 1 - 2 * sin(2 * a) * sin(2 * a));
    z2 = 2 * sin(a);
    printf("%lf\n%lf", z1, z2);
    return 0;
}