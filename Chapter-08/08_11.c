#include <stdio.h>

int main(void)
{
    char str[101];
    int i, len;

    printf("Enter the string:\n");
    scanf(" %s", str);

    for(i=0; str[i] != '\0'; ++i);
    len = i;

    printf("Length of \"%s\" is %d\n", str, len);

    return 0;
}
