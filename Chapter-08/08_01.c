#include <stdio.h>

#define MX 101

int main(void)
{
    int n;
    int x[MX], y[MX];
    int i, total_x, total_y, total_xy, total_x2;
    int m, c;

    printf("Enter n : " );
    scanf("%d", &n);

    printf("Enter x_i y_i from 1 to n:\n");
    for(i=1; i <= n; ++i) scanf(" %d %d", &x[i], &y[i] );

    total_x = total_y = total_xy = total_x2 = 0;
    for(i=1; i <= n; ++i){

        total_xy += x[i]*y[i];

        total_x += x[i];
        total_y += y[i];

        total_x2 += x[i]*x[i]; // x_i^2
    }

    m = ( n*total_xy - total_x*total_y ) / ( n*total_x2 - (total_x*total_x) ) ;
    c = (total_y - m*total_x) / n;

    printf("m = %d\nc = %d\n", m, c);

    return 0;
}
