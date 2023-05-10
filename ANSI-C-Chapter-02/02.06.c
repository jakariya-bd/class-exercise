#include <stdio.h>
#include <time.h>

int main()
{
    time_t T = time(NULL);

    time( &T );

    printf("Current system time: %s", ctime(&T) );

    return 0;
}
