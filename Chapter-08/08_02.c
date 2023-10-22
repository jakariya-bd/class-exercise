#include <stdio.h>

int main(void)
{
    double T[31 + 1][10 + 1];
    int i, j;
    int l_city, h_city, l_day, h_day;

    printf("Input the temperatures of 31 days for 10 cities.\n");
    for(i=1; i <= 31; ++i){

        printf("For day %d, Enter 10 cities' temperatures:\n", i);
        for(j=1; j <= 10; ++j){
            scanf("%lf", &T[i][j] );
        }
    }

    l_city = h_city = l_day = h_day = 1;

    for(i=1; i <= 31; ++i){
        for(j=1; j <= 10; ++j){
            if( T[i][j] < T[l_day][l_city] ){

                l_day = i;
                l_city = j;
            }
            if( T[i][j] > T[h_day][h_city] ){

                h_day = i;
                h_city = j;
            }
        }
    }

    printf("The highest temperature: %0.2lf\nCity No. %d\nDay No. %d\n", T[h_day][h_city], h_city, h_day);
    printf("The lowest temperature: %0.2lf\nCity No. %d\nDay No. %d\n", T[l_day][l_city], l_city, l_day);

    return 0;
}
