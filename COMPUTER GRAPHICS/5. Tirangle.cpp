#include<graphics.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    line(100,300,450,300);
    line(100,300,275,50);
    line(450,300,275,50);
    getch();
    closegraph();
    return 0;
}
