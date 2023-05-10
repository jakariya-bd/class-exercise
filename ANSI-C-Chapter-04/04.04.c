/* Let,
 * Depreciation = d
 * Purchase Price = p
 * Salvage Value = s
 * Years of Service = y

 Given formula d = (p - s)/y
 From this equation we get, s = p - (d*y)
 */

#include <stdio.h>

int main(void)
{
    double d, p, s, y;

    printf("Purchase Price: ");
    scanf("%lf", &p);

    printf("Years of service: ");
    scanf("%lf", &y);

    printf("Annual Depreciation: ");
    scanf("%lf", &d);

    s = p - d*y;

    printf("Salvage Value = %0.2lf\n", s);

    return 0;
}
