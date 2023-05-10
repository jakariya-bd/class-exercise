#include <stdio.h>

int main(void)
{
    int day, week, year;

    printf("Input total number of days: ");
    scanf("%d", &day);

    year = day / 365;
    day %= 365;

    week = day / 7;
    day %= 7;

    printf("%d year", year);
    if( year > 1 ) printf("s");
    printf("\n");

    printf("%d week", week);
    if( week > 1 ) printf("s");
    printf("\n");

    printf("%d day", day);
    if( day > 1 ) printf("s");
    printf("\n");

    return 0;
}
