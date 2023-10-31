// 10.16
#include <stdio.h>

int find(char s[], char c)
{
    int i;
    for(i=0; s[i] != '\0'; ++i){
        if( c == s[i] ) return 1;
    }
    return 0;
}

int main(void)
{
    char s[101], c;

    printf("Enter the string and the target character:\n");
    scanf("%s %c", s, &c);

    if( find(s, c) == 1 ) printf("Found\n");
    else printf("Not found\n");

    return 0;
}
