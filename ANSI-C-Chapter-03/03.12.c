#include <stdio.h>

int main(void)
{
    int amount;
    int n500, n100, n50, n20, n10, n5, n2, n1;

    printf("Enter total amount of money: ");
    scanf("%d", &amount);

    n500 = amount / 500;
    amount %= 500;

    n100 = amount / 100;
    amount %= 100;

    n50 = amount / 50;
    amount %= 50;

    n20 = amount / 20;
    amount %= 20;

    n10 = amount / 10;
    amount %= 10;

    n5 = amount / 5;
    amount %= 5;

    n2 = amount / 2;
    amount %= 2;

    n1 = amount;
    /** Same as this-
    n1 = amount / 1;
    amount %= 1;
    */

    if( n500 > 0 ) printf("%d note(s) of %d rupee\n", n500, 500);
    if( n100 > 0 ) printf("%d note(s) of %d rupee\n", n100, 100);
    if( n50 > 0 ) printf("%d note of %d rupee\n", n50, 50);
    if( n20 > 0 ) printf("%d note(s) of %d rupee\n", n20, 20);

    if( n10 > 0 ) printf("%d note of %d rupee\n", n10, 10);
    if( n5 > 0 ) printf("%d note of %d rupee\n", n5, 5);
    if( n2 > 0 ) printf("%d note(s) of %d rupee\n", n2, 2);
    if( n1 > 0 ) printf("%d note of %d rupee\n", n1, 1);

    return 0;
}
