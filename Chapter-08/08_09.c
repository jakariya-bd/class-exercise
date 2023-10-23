#include <stdio.h>

int main(void)
{
    int A[1001], n, i, k, mi, temp;

    // input
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter all elements:\n");
    for(i=0; i < n; ++i){
        scanf("%d", &A[i] );
    }

    // selection sort
    for(i = n-1; i > 0; --i){
        mi = i;
        for(k=i-1; k >= 0; --k){
            if( A[mi] < A[k] ) mi = k;
        }

        if( mi != i ){ // swapping
            temp = A[i];
            A[i] = A[mi];
            A[mi] = temp;
        }
    }

    // output sorted element
    printf("Sorted Array\n");
    for(i=0; i < n; ++i) printf("%d ", A[i] );
    printf("\n");

    return 0;
}
