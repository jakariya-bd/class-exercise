#include <stdio.h>
#include <math.h>

int main()
{
    double x1,y1, x2,y2, diameter, radius, area;
    const double pie = 3.14159;

    x1 = 2, y1 = 2;
    x2 = 5, y2 = 6;

    diameter = sqrt( pow( x2-x1, 2 ) + pow( y2-y1, 2 ) );

    radius = diameter / 2;

    area = pie * pow(radius, 2);

    printf("Area = %lf\n", area );

    return 0;
}
