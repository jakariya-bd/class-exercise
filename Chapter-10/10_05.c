// 10.5
#include <stdio.h>

int fibo(int n)
{
    if( n == 1 || n == 2 ) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main(void)
{
    int n, i;
    scanf("%d", &n);

    printf("Fibonacci numbers:\n");
    for(i=1; i <= n; ++i){
        printf("%d\n", fibo(i) );
    }

    return 0;
}
