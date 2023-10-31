// 11.16
#include <stdio.h>

struct my_struct{
    int i;
    double d;
    char c;
};

int main(void)
{
    printf("Size: %d\n", sizeof( struct my_struct ) );

    return 0;
}


