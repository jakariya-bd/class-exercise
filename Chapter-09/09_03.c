// 9.3
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101], new_s[101];
    int n, m, i;

    printf("Enter a string:\n");
    gets(s);
    printf("Enter the position and length of the substring:\n");
    scanf(" %d %d", &n, &m);

    for(i=0; i < m; ++i){
        new_s[i] = s[i + n];
    }
    new_s[i] = '\0';

    printf("%s\n", new_s);

    return 0;
}


