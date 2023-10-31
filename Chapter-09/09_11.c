// 9.11
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[101], s2[101];
    int n1, n2, n;

    scanf("%s %s", s1, s2);

    n1 = strlen(s1);
    n2 = strlen(s2);

    n = n1;
    if(n2 > n1) n = n2;

    int c_value = strncmp(s1, s2, n);

    if( c_value == 0 ) printf("Both are equal.\n");
    else if( c_value < 0 ) printf("First string is less than the second one.\n");
    else printf("First string is greater than the second one.\n");

    return 0;
}
