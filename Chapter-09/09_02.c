#include <stdio.h>
#include <string.h>

int main(void)
{
    char ans[] = "Dennis Ritchie";
    char reply[101];
    int t;

    printf("Who is the Inventor of C?\n");
    t = 1;
    do{
        gets(reply);
        if( strcmp(ans, reply) == 0 ){
            printf("Good\n");
            break;
        }
        t++;

        if( t <= 3 ) printf("Try again\n");
    } while(t <= 3);
    if( t > 3 ) printf("Correct answer is Dennis Ritchie\n");

    return 0;
}

