#include <stdio.h>

int main(void)
{
    int code, call;
    double cost;

    while( 1 ){
        printf("\nEnter 0 and 0 to exit\n");
        printf("Enter codes and number of calls:\n");
        scanf(" %d %d", &code, &call);

        if( code == 0 && call == 0 ) break;

        cost = call * 250.0;
        if( call > 100 ) cost += (call-100) * 1.25;

        printf("Code = %d\nCost = %0.2lf\n", code, cost);
    }
    return 0;
}
