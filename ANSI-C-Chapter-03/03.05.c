#include <stdio.h>

typedef long long int LL;
// Here we use long long int type by denoting it as LL only.
// We have just redefined a type.

int main(void)
{
    long long int x; // Original form
    LL y; // Our new defined form

    x = 123456789012345;
    y = x; // y will equal to x

    printf("%lld %lld\n", x, y);

    return 0;
}
