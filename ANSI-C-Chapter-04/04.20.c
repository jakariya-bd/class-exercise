#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if( a+b <= c || a+c <= b || b+c <= a ){
        printf("The triangle is invalid\n");
    }
    else if( a == b || b == c || c == a ){
        printf("Isosceles\n");
    }
    else{
        printf("Not isosceles\n");
    }

    return 0;
}
