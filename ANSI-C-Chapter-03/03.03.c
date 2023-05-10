#include <stdio.h>

int main(void)
{
    int a, pc, nc;

    pc = nc = 0;

    printf("Enter the elements of the set (0 to terminate):\n");

    scanf("%d", &a);
    while( a != 0 ){
        if( a > 0 ) pc ++;
        else nc ++;

        scanf(" %d", &a);
    }

    printf("Number of elements: %d\n", nc+pc);
    printf("Positive numbers: %d\nNegative numbers: %d\n", pc, nc);

    return 0;
}
