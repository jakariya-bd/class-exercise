// 11.1
#include <stdio.h>

struct time_struct{
    int hour, minute, second;
};

int main(void)
{
    struct time_struct t = {16, 40, 51};

    printf("%2d:%2d:%2d\n", t.hour, t.minute, t.second);

    return 0;
}

