#include <stdio.h>

int main(void)
{
    int a,b,c, sum, largest, smallest;
    double average;

    scanf("%d %d %d", &a, &b, &c);

    sum = a+b+c;
    average = (double) sum / 3;

    largest = a > b ? ( a > c ? a : c ) : ( b > c ? b : c );
    smallest= a < b ? ( a < c ? a : c ) : ( b < c ? b : c );

    printf("Sum     : %d\n", sum);
    printf("Average : %0.2lf\n", average);

    printf("Largest : %d\nSmallest: %d\n", largest, smallest);

    return 0;
}

