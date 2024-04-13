#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int x,y,inx,iny;
    cout<<"Move from the initial position : ";
    cin>>inx>>iny;
    moveto(inx,iny);/// Move from the initial position.
    cout<<"Enter a point from where you draw a line : ";
    cin>>x>>y;
    //outtextxy(x,y,"Write in the Point");
    lineto(x,y);/// Draw a line from the initial position.
    getch();
    closegraph();
    return 0;
}
