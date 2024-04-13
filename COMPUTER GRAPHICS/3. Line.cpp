#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    /*line(30,30,200,30);
    line(30,60,200,60);
    line(30,90,200,90);*/
    cout<<"Enter x1,y1,x2,y3 : ";
    cin>>x1>>y1>>x2>>y2;
    line(x1,y1,x2,y2);
    getch();
    closegraph();
    return 0;
}
