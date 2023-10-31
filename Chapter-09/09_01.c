// 9.1
#include <stdio.h>

int main(void)
{
    char name[101];
    gets(name);

    printf("ASCII values of each character are:\n");
    for(int i=0; name[i] != '\0'; ++i){
        printf("\'%c\' -> %d\n", name[i], name[i] );
    }

    return 0;
}

