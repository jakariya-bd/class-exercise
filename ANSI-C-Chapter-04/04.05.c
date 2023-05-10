/* Let n be a real number.
 * The smallest number not less than n equals to n itself.
 * The largest number not greater than n equals to n itself by the same way.
 */

#include <stdio.h>

int main(void)
{
    double n;
    scanf("%lf", &n);

    printf("%lf %lf %lf\n", n, n, n);

    return 0;
}
