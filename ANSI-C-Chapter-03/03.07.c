#include <stdio.h>

int main(void)
{
    int n, i, r;
    printf("Enter the integer to see its table: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++ ){
        printf("%d x %2d = %d\n", n, i, n*i );
    }

    return 0;
}
