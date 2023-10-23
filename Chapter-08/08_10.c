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
    printf("Sorted array\n");
    for(i=0; i < n; ++i) printf("%d ", A[i] );
    printf("\n");

    int target, mid, low, high;
    printf("Enter the target element: ");
    scanf("%d", &target);

    // binary search
    low = 0, high = n-1;
    while( low <= high ){
        mid = (low+high)/2;
        if( A[ mid ] == target ) break; // found it
        if( target > A[mid] ) low = mid + 1;
        else high = mid - 1;
    }

    if( low <= high ){
        printf("%d found at %d\n", target, mid);
    }
    else{
        printf("Not found\n");
    }

    return 0;
}
