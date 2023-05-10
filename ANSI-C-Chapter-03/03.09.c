#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter an integer between 0 and 128 : ");
    scanf("%d", &n);

    if( n < 0 || n > 128 ){
        printf("You have inputted an invalid integer\n");
    }
    else{
        printf("ASCII value of %d is %c\n", n, (char)n );
    }

    return 0;
}

