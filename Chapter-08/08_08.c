#include <stdio.h>

int main(void)
{
    int mat[5][5], i,k, n=5;

    for(i=0; i < n; ++i){
        for(k=0; k < n; ++k){
            if( i+k+1 < n ) mat[i][k] = 1;
            else if( i+k+1 > n ) mat[i][k] = -1;
            else mat[i][k] = 0;
        }
    }

    for(i=0; i < n; ++i){
        for(k=0; k < n; ++k){
            printf("%2d ", mat[i][k] );
        }
        printf("\n");
    }

    return 0;
}
