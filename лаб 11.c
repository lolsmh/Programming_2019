#include <stdio.h>
#include "circle.h"

struct circle {
    double ox;
    double oy;
    double rx;
    double ry;
};

int main() {
    struct circle C;
    printf("Введите координаты центра окружности: ");
    scanf("%lf", &C.ox);
    scanf("%lf", &C.oy);
    printf("Введите координаты любой точки, лежащей на окружности (конечная точка радиуса): ");
    scanf("%lf", &C.rx);
    scanf("%lf", &C.ry);
    double perimeter, area;
    perimeter = circle_perimeter(C.rx, C.ry, C.ox, C.oy);
    area = circle_area(C.rx, C.ry, C.ox, C.oy);
    printf("Площадь = %lf, Периметр = %lf", perimeter, area);
}