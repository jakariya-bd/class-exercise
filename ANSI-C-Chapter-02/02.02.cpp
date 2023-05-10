// .cpp means it's a C++ program.
// I have no choice here except using a C++ program rather than C program.
// It's not a big deal though.

//#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm,  (char*)"");

    bar3d(200, 200, 300, 300, 50, 1);

    getch();

    return 0;
}
