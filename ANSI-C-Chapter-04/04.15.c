#include <stdio.h>

int main(void)
{
    int n, root, square;

    printf("Number\tSquare-root\t Square\n");
    for(n = 0; n <= 100; n += 10){
        printf("%4d \t%8.3lf\t %d\n", n, sqrt((double)n), n*n);
    }
    return 0;
}
