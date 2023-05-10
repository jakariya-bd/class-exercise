#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm,  (char*)"");

    bar3d(200, 200, 300, 300, 50, 1);

    getch();

    return 0;
}
