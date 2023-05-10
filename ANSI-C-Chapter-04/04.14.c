#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, rad;

    const double pie = acos(-1.0);

    printf("x(degrees)\tsin(x)\t\tcos(x)\n");
    for(x = 0.0; x <= 180.0; x += 15){

        rad = x * pie / 180.0;

        printf("%0.0lf\t\t%0.3lf\t\t%0.3lf\n", x, sin(rad), cos(rad) );
    }

    return 0;
}
