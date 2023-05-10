#include <stdio.h>
#include <math.h>

int main(void)
{
    double L, R, C, F;

    printf("Enter inductance L and resistance R respectively: ");
    scanf("%lf %lf", &L, &R);

    printf("Frequencies from 0.01 to 0.1 in steps of 0.01\n");
    printf("C \t F\n");

    for(C = 0.01; C <= 0.1; C += 0.01){
        F = sqrt( 1.0/(L*C) - R*R/(4*C*C) );
        printf("%0.2lf \t %0.2lf\n", C, F);
    }
    return 0;
}
