// 11.2
#include <stdio.h>

struct time_struct{
    int hour, minute, second;
};

struct time_struct input_time(struct time_struct t)
{
    printf("Enter hour, minute and second respectively:\n");
    scanf("%d %d %d", &t.hour, &t.minute, &t.second);
    return t;
}
void display_time(struct time_struct t)
{
    printf("%2d:%2d:%2d\n", t.hour, t.minute, t.second);
}

int main(void)
{
    struct time_struct t;

    t = input_time(t);
    display_time(t);

    return 0;
}

