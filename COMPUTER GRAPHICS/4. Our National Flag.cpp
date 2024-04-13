#include<graphics.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    line(50,50,50,400);
    line(55,50,55,400);
    rectangle(55,60,220,160);
    int x,y;
    y=60+(160-60)/2;
    x=55+(220-55)/2;
    circle(x,y,40);
    getch();
    closegraph();
    return 0;
}
