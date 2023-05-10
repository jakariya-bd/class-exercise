#include <stdio.h>
#include <math.h>

#define PIE 3.14159
// A symbolic constant of pie value as PIE defined here

int main(void)
{
    double r, d, A;
    int choice;

    printf("Welcome to my calculator for measuring a circular area.\n");
    printf("You just have to give diameter or radius of the desired field.\n\n");

    while( 1 ){
        printf("Which way do you want to calculate?\n1 : Diameter\n2 : Radius\n0 : Exit\n");
        scanf(" %d", &choice);

        if( choice < 0 || choice > 2 ){
            printf("\nPlease enter a valid choice ( 0 to 2 ).\n");
        }
        else{
            switch(choice){
            case 0:
                return 0; // End the main function
            case 1:
                printf("Enter the diameter: ");
                scanf(" %lf", &d);
                r = d/2.0;
                break;
            case 2:
                printf("Enter the radius: ");
                scanf(" %lf", &r);
                break;
            }

            break; // for breaking the loop
        }
    }

    A = PIE * r * r; // Here we use the symbolic constant PIE defined earlier

    printf("You need nearly %lf square unit area.\n", ceil(A) );

    return 0;
}

