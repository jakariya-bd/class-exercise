#include <stdio.h>

int main(void)
{
    int a, b, c, largest;

    scanf("%d %d %d", &a, &b, &c);

    largest = a > b ? (a > c ? a : c ) : (b > c ? b : c );
    printf("Largest among the three numbers: %d\n", largest);

    return 0;
}
