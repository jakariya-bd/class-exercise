#include <stdio.h>

int main(void)
{
    int s1, s2, s3;
    double average;

    printf("Enter the scores of the three players: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    average = (double) (s1 + s2 + s3 ) / 3; // Average value can have decimal points

    printf("Average Score: %0.3lf\n", average);

    return 0;
}
