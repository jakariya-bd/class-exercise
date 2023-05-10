#include <stdio.h>

int main(void)
{
    double a,b,c, x;

    printf("Enter a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    x = a - b/3 + c*2 - 1;

    printf("x = %0.3lf\n", x);

    return 0;
}

