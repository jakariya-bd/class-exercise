#include <stdio.h>

int main(void)
{
    double d, f, m;

    printf("Distance traveled: ");
    scanf("%lf", &d);
    printf("Fuel consumed: ");
    scanf(" %lf", &f);

    m = d / f;

    printf("Mileage: %0.2lf\n", m);

    return 0;
}
