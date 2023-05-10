#include <stdio.h>

int main()
{
    float a,b,c, x;

    // (a)
    a = 250, b = 85, c = 25;
    x = a / (b-c);
    printf("%f\n", x); // 4.166667

    // (b)
    a = 300, b = 70, c = 70;
    x = a / (b-c); // b - c = 0 :-|
    printf("%f\n", x); // 1.#INF00

    return 0;
}
