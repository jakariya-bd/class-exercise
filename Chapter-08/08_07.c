#include <stdio.h>

#define MX 10

int main(void)
{
    int n, A[MX][MX], B[MX][MX], C[MX][MX];
    int row, col, i, k;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Input matrix A\n");
    for(i=0; i < n; ++i)
        for(k=0; k < n; ++k)
            scanf("%d", &A[i][k] );

    printf("Input matrix B\n");
    for(i=0; i < n; ++i)
        for(k=0; k < n; ++k)
            scanf("%d", &B[i][k] );

    for(row=0; row < n; ++row){
        for(col=0; col < n; ++col){
            C[row][col] = 0;
            for(k=0; k < n; ++k){
                C[row][col] += A[row][k] * B[k][col];
            }
        }
    }

    printf("The product matrix C\n");
    for(i=0; i < n; ++i){
        for(k=0; k < n; ++k)
            printf("%d ", C[i][k] );
        printf("\n");
    }

    return 0;
}
