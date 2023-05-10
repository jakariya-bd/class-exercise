#include <stdio.h>

int main(void)
{
    double n;
    int d;

    scanf("%lf", &n);

    d = (int) n % 10;

    printf("%d\n", d);

    return 0;
}
