#include <stdio.h>

int main(void)
{
    double d, u, t, a, st, et;
    char choice;

    while( 1 ){
        printf("Do you want to carry on calculation? y/n \n");
        scanf(" %c", &choice);

        if( choice == 'y' || choice == 'Y' ){
            printf("Starting time and ending time respectively:\n");
            scanf(" %lf %lf", &st, &et);

            printf("Initial velocity: ");
            scanf(" %lf", &u);

            printf("Acceleration: ");
            scanf(" %lf", &a);

            t = et - st;
            if( t <= 0.0 ){
                printf("Invalid time interval. Closing the program.\n");
                break;
            }

            d = u*t + (a*t*t)/2.0;

            printf("Distance: %0.2lf\n", d);
        }

        else break;
    }

    return 0;
}
