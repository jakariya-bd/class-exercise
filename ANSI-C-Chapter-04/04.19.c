#include <stdio.h>

int main(void)
{
    int d, m, y;

    printf("Enter day, month and year respectively:\n");
    scanf("%d %d %d", &d, &m, &y);

    int valid = 1;
    if( y < 0 ) valid = 0;
    else if( m < 0 || m > 12 ) valid = 0;
    else if( d < 0 || d > 31 ) valid = 0;
    else{
        switch(m){
        case 4:
        case 6:
        case 9:
        case 11:
            if( d == 31 ) valid = 0;
            break;
        case 2:
            if( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0) ){
                if( d > 29 ) valid = 0;
            }
            else if( d > 28 ) valid = 0;
            break;
        }
    }

    printf("%d/%d/%d ", d, m, y);
    if( valid ){
        printf("is a valid date.\n");
    }
    else{
        printf("is NOT a valid date.\n");
    }

    return 0;
}
