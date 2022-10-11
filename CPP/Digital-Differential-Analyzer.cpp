// This is an implementation of the Digital Differential Algorithm(DDA) using CPP.
// It is an incremental method of scan conversion of line.
// In this method calculation is performed at each step but by using results of previous steps.

#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
int main()
{
    int gd = DETECT, gm, i;
    initgraph(&gd, &gm, NULL);

    float x, y, dx, dy, steps;
    int x0, x1, y0, y1;

    setbkcolor(WHITE);
    x0 = 0, y0 = 0, x1 = 100, y1 = 100;
    x0 = 0, y0 = 0, x1 = 100, y1 = 100;
    dx = (float)(x1 - x0);
    dy = (float)(y1 - y0);
    if (dx >= dy)
    {
        steps = dx;
    }
    else
    {
        steps = dy;
    }
    dx = dx / steps;
    dy = dy / steps;
    x = x0;
    y = y0;
    i = 1;
    while (i <= steps)
    {
        putpixel(x, y, BLACK);
        x += dx;
        y += dy;
        i = i + 1;
    }
    fflush(stdin);
    getchar();
    return 0;
}