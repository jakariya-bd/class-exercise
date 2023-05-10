#include <stdio.h>

int main(void)
{
    double a, b, c, d;
    double r;

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    if( d == 0.0 ){
        printf("Error: Division by zero\n");
    }
    else{
        r = (a + b) * (c / d);
        printf("(a+b)*(c/d) = %.3lf\n", r);

        r = (a + b) * c / d;
        printf("(a+b)*c/d = %.3lf\n", r);

        r = a + (b * c) / d;
        printf("a+(b*c)/d = %.3lf\n", r);
    }

    return 0;
}
