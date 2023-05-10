#include <stdio.h>

int main(void)
{
    double n;
    int f, d1, d2;

    scanf("%lf", &n);

    f = (int) n ;

    d1 = f % 10;
    f /= 10;
    d2 = f % 10;

    printf("Two rightmost digits from the right: %d %d\n", d1, d2);

    return 0;
}
