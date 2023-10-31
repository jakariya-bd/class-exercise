// 10.1
#include <stdio.h>

int x, y;

void exchange(void)
{
    int t = x;
    x = y;
    y = t;
}

int main(void)
{
    x = 5, y = 7;

    exchange();

    printf("x = %d \ty = %d\n", x, y);

    return 0;
}

