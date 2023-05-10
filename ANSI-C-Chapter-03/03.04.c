#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, y;
    short int z;

    x = 123456;
    y = 654321;

    z = x + y;
    printf("x = %d\ny = %d\nz = %hd\n", x, y, z);
    /*
    z equals to -8655 and this is incorrect sum of x and y.
    As x and y are int variables, they are capable of storing numbers from -2^31 to (2^31 - 1) in my device.
    But z is a short int variable, it is capable of storing numbers from -2^16 to (2^16 - 1) in my device.
    That's why z can not be capable of saving correct um of x and y.
    And we get undefined behavior of z.
    */

    return 0;
}
