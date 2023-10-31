// 9.5
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101];
    int i, k;

    scanf("%s", s);

    for(i = 0; i <= 128; ++i){
        for(k=0; s[k] != '\0'; ++k){
            if( s[k] == i ) printf("%c", s[k] );
        }
    }
    printf("\n");

    return 0;
}
