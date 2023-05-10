#include <stdio.h>

int main()
{
    int x, y, sum, dif, product, div;

    printf("x = ");
    scanf("%d", &x);

    printf("y = ");
    scanf("%d", &y);

    sum = x + y;
    dif = x - y;
    product = x * y;
    div = x / y; // y must be a non-zero value

    printf("\n");
    printf("Sum = \t\t%d \tDifference = \t%d \n", sum , dif);
    printf("Product = \t%d \tDivision = \t%d \n", product, div);

    return 0;
}
