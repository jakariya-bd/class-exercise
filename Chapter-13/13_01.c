// 13.1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1, *f2;

    f1 = fopen("input.txt", "r" );
    f2 = fopen("output.txt", "w" );
    if( f1 == NULL || f2 == NULL ){
        printf("Error opening files.\n");
        return EXIT_FAILURE;
    }

    int c;
    while(fscanf(f1, "%c", &c) != EOF ){
        putc(c, f2);
    }

    fclose(f1);
    fclose(f2);

    return 0;
}
