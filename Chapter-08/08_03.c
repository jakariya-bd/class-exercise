#include <stdio.h>

int main(void)
{
    int n, count[5+1], spoilt_count, v, i;

    printf("Enter the number of votes(ballots): ");
    scanf("%d", &n);

    // initializing...
    for(i=1; i <= 5; ++i) count[i] = 0;
    spoilt_count = 0;

    printf("Enter the marked candidates on the ballots:\n");
    for(i=1; i <= n; ++i){
        scanf("%d", &v);

        if( v >= 1 && v <= 5 ) count[v] ++;
        else spoilt_count ++;
    }

    printf("Count of votes cast for the candicates\n");
    for(i=1; i <= 5; ++i){
        printf("Candidate No. %d: %d\n", i, count[i] );
    }
    printf("Count of spoilt ballots: %d\n", spoilt_count);

    return 0;
}
