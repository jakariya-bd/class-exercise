#include <stdio.h>

#define MX 100

int main(void)
{
    int A[MX], B[MX], C[2*MX];
    int nA, nB, nC;
    int ai, bi, ci;

    printf("Enter the size of A and its elements:\n");
    scanf("%d", &nA);
    for(ai=0; ai < nA; ++ai ) scanf("%d", &A[ai] );

    printf("Enter the size of B and its elements:\n");
    scanf("%d", &nB);
    for(bi=0; bi < nB; ++bi ) scanf("%d", &B[bi] );

    nC = nA + nB;

    ai = bi = ci = 0;
    while( ai < nA && bi < nB ){
        if( A[ai] < B[bi] ) C[ ci++ ] = A[ ai++ ];
        else C[ ci++ ] = B[ bi++ ];
    }

    while( ai < nA ){
        C[ci++] = A[ai++];
    }
    while( bi < nB ){
        C[ci++] = B[bi++];
    }

    printf("Size of C: %d\n", nC);
    for(ci=0; ci < nC; ++ci){
        printf("%d ", C[ci] );
    }
    printf("\n");

    return 0;
}
