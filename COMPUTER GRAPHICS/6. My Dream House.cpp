#include<graphics.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    line(150,200,600,200);
    line(150,200,375,10);
    line(600,200,375,10);
    rectangle(160,200,590,460);
    getch();
    closegraph();
    return 0;
}
