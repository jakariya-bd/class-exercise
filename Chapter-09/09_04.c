// 9.4
#include <stdio.h>
#include <string.h>

int main(void)
{
    char line[251], target[101];
    int counter, i, k;

    printf("Enter the target word: ");
    scanf("%s", target);

    counter = 0;
    printf("Enter the text line by line:\n");
    while( scanf(" %[^\n]", line) != EOF ){
        for(i=0; line[i] != '\0'; ++i){
            for(k=0; target[k] != '\0'; ++k){
                if( line[i+k] != target[k] ) break;
            }
            if( target[k] == '\0' ){
                counter ++;
                i = i + k - 1;
            }
        }
    }

    printf("\"%s\" occurred in the text %d time(s)\n", target, counter);

    return 0;
}
