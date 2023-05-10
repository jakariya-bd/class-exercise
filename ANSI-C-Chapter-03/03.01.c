#include <stdio.h>

int main(void)
{
    int n;
    double sum;

    scanf("%d", &n);

    sum = 0.0;
    for(int i=1; i <= n; ++i){
        sum += 1.0/i;
    }

    printf("%lf\n", sum);

    return 0;
}
