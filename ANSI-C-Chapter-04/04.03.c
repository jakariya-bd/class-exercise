#include <stdio.h>

int main(void)
{
    int n, k, i, t, d;
    scanf("%d", &n);

    for(k = 1; n/k > 0 ; k *= 10 );

    for( k /= 10; k > 0 ; k /= 10 ){
        t = n;
        for( i = k; i > 0; i /= 10){
            d = t / i;
            t %= i;

            printf("%d ", d);
        }
        printf("\n");

        n %= k;
    }

    return 0;
}
