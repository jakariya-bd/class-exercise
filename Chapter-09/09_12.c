// 9.12
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101], sub[101];
    char *pos;

    int counter;

    printf("Enter the string:\n");
    scanf(" %[^\n]", s);

    printf("Enter the substring:\n");
    scanf(" %[^\n]", sub);

    counter = 0;
    pos = strstr(s, sub);
    while( pos != NULL ){
        counter ++ ;
        pos = strstr(pos+1, sub);
    }

    printf("\"%s\" is occurred %d time(s) in \"%s\".\n", sub, counter, s);

    return 0;
}

