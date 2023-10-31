// 9.8
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101];
    scanf("%s", s);

    int flag = 1;
    int i,k;
    for(i=0, k=strlen(s)-1; i < k; ++i, --k){
        if( s[i] != s[k] ){
            flag = 0;
            break;
        }
    }

    printf("%s\n", (flag == 1 ? "Palindrome" : "Not palindrome"));
    return 0;
}
