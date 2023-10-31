// 11.3
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
struct time_struct update( struct time_struct t)
{
    t.second ++;
    if( t.second == 60 ){
        t.second = 0;
        t.minute++;

        if( t.minute == 60 ){
            t.minute = 0;
            t.hour ++;

            if( t.hour == 24 )
                t.hour = 0;
        }
    }
    return t;
}

int main(void)
{
    struct time_struct t;

    t = input_time(t);
    display_time(t);
    t = update(t);
    display_time(t);

    return 0;
}


