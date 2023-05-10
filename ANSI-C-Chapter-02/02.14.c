#include <stdio.h>
#include <math.h>

int main()
{
    double cx,cy, px,py, radius, perimeter, area;
    const double pie = 3.14159;

    cx = 0, cy = 0;
    px = 4, py = 5;

    radius = sqrt( pow(px-cx, 2) + pow(py-cy, 2) );

    perimeter = 2 * pie * radius;
    area = pie * pow(radius, 2);

    printf("Perimeter = %lf\nArea = %lf\n", perimeter, area);

    return 0;
}
