#ifndef H_CIRCLE
#define H_CIRCLE

#include <math.h>
#include <stdio.h>

double circle_area(double x1, double y1, double o1, double o2) {
    double radius = sqrt(pow(x1 - o1, 2) + pow(y1 - o2, 2));
    double area = M_PI * pow(radius, 2);
    return area;
}

double circle_perimeter(double x1, double y1, double o1, double o2) {
    double radius = sqrt(pow(x1 - o1, 2) + pow(y1 - o2, 2));
    double l = M_PI * 2 * radius;
    return l;
}

#endif