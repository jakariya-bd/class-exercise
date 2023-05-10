#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    if( b != 0 ){
        printf("%d / %d = %0.3lf\n", a, b, (double)a/b);
    }
    else{
        printf("Error: Division not possible\n");
    }

    return 0;
}

