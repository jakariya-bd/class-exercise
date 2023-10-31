// 11.17
#include <stdio.h>

struct my_struct{
    int i;
    double d;
    char c;
};

union my_union{
    int i;
    double d;
    char c;
};

int main(void)
{
    printf("Size of struct: %d\n", sizeof( struct my_struct ) );
    printf("Size of union: %d\n", sizeof( union my_union ) );

    return 0;
}


