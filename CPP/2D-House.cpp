// This is a representaion of a 2D House using computer graphics library

#include <bits/stdc++.h>
#include <graphics.h>
#include <stdio.h>

int main()
{

    int gd = DETECT, gm;

    initgraph(&gd, &gm, NULL);
    setbkcolor(WHITE);

    setcolor(0);

    line(100, 100, 150, 50);

    line(150, 50, 200, 100);

    line(150, 50, 350, 50);
    line(350, 50, 400, 100);

    rectangle(100, 100, 200, 200);
    rectangle(200, 100, 400, 200);
    rectangle(130, 130, 170, 200);
    rectangle(250, 120, 350, 180);

    fflush(stdin);
    getchar();
    return 0;
}
