#include <stdio.h>

int main(void)
{
    char line[1001], ch;
    int count = 0, i;

    printf("Enter a line of text:\n");
    scanf(" %[^\n]", line);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    for(i=0; line[i] != '\0'; ++i){
        if( line[i] == ch ) count ++;
    }

    printf("Number of occurrences of %c in the line is %d\n", ch, count);

    return 0;
}

