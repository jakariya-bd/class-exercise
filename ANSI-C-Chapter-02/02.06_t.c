#include <stdio.h>
#include <time.h>

int main()
{
    time_t T = time(NULL);

    struct tm* CT = localtime(&T);

    printf("%d-%d-%d\n", CT->tm_mday, CT->tm_mon + 1, 1900 + CT->tm_year);

    return 0;
}
