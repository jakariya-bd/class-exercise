#include <stdio.h>

int main(void)
{
    double rice_price, sugar_price;

    printf("Enter the unit prices of rice and sugar respectively:\n");
    scanf("%lf %lf", &rice_price, &sugar_price);

    printf("***LIST OF ITEMS***\n");
    printf("Item\tPrice\n");

    printf("Rice\t%0.2lf\n", rice_price);
    printf("Sugar\t%0.2lf\n", sugar_price);

    return 0;
}
