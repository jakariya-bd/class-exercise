#include <stdio.h>

int main(void)
{
    int n, sum;

    printf("Enter a four digit-number: ");
    scanf("%d", &n);

    sum = 0;
    while( n > 0 ){
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}
