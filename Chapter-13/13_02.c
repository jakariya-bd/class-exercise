// 13.2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *data1, *data2, *data3;

    data1 = fopen("data1.txt", "r");
    data2 = fopen("data2.txt", "r");
    data3 = fopen("data3.txt", "w");

    if( data1 == NULL || data2 == NULL || data3 == NULL ){
        printf("Error opening file\n");
        return EXIT_FAILURE;
    }

    int A[101], B[101];
    int i, k, n, m;

    i = 0;
    while( fscanf(data1, "%d", &A[i++] ) != EOF );
    n = i - 1;

    k = 0;
    while( fscanf(data2, "%d", &B[k++]) != EOF );
    m = k - 1;

    i = 0, k = 0;
    while( i < n && k < m ){
        if( A[i] < B[k] ){
            fprintf(data3, "%d\n", A[i ++ ] );
        }
        else{
            fprintf(data3, "%d\n", B[k ++] );
        }
    }
    while( i < n ) fprintf(data3, "%d\n", A[i++]);
    while( k < m ) fprintf(data3, "%d\n", B[k++]);

    fclose(data1);
    fclose(data2);
    fclose(data3);

    return 0;
}
