// 10.20
#include <stdio.h>
#include <math.h>

double round_2_dec(double x)
{
    x *= 100.0;
    x = round(x);
    x /= 100.0;
    return x;
}

int main(void)
{
    double x;

    scanf("%lf", &x);
    printf("%lf\n", round_2_dec(x) );

    return 0;
}
