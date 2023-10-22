#include <stdio.h>

int main(void)
{
    int pasc_tri[10][10];
    int row, col;

    for(row = 0; row < 10; ++row){

        pasc_tri[row][0] = pasc_tri[row][row] = 1;

        for(col = 1; col < row; ++col ){
            pasc_tri[row][col] = pasc_tri[row-1][col-1] + pasc_tri[row-1][col];
        }
    }

    for(row = 0; row < 10; ++row){
        for(col = 0; col <= row; ++col ){
                printf("%d\t", pasc_tri[row][col] );
        }
        printf("\n");
    }

    return 0;
}
