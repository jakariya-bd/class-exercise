#include <stdio.h>
#include <math.h>

int main(void)
{
    int d_rate, s_cost, h_cost;
    double EOQ, TBO;

    printf("Enter demand rate, setup cost and holding cost respectively:\n");
    scanf("%d %d %d", &d_rate, &s_cost, &h_cost);

    EOQ = sqrt( (2.0 * d_rate * s_cost) / h_cost );
    TBO = sqrt( (2.0 * s_cost) / (d_rate * h_cost) );

    printf("EOQ = %.2lf\nTBO = %.2lf\n", EOQ, TBO);

    return 0;
}
