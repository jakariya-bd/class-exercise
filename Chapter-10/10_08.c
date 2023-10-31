// 10.8
#include <stdio.h>
#include <ctype.h>

void convert_to_uppercase(char s[] )
{
    int i;
    for(i=0; s[i] != '\0'; ++i){
        if( islower( s[i] ) ){
            s[i] = toupper(s[i]);
        }
    }
}

int main(void)
{
    char s[101];
    scanf(" %[^\n]", s);

    convert_to_uppercase(s);

    printf("%s\n", s);

    return 0;
}
