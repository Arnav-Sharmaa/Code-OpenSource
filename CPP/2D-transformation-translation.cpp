// This is the implementation of 2D transformation of a graphical object -> Translation is implemented on the object here

#include <bits/stdc++.h>
#include <graphics.h>
#include <math.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    int tx = 50, ty = 50;
    // Before translation
    rectangle(50, 50, 100, 100);
    // After translation
    rectangle(50 + tx, 50 + ty, 100 + tx, 100 + ty);
    getch();
    closegraph();
    return 0;
}