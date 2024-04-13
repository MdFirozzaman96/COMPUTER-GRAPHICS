#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
    int x1,x2,y1,y2;
    cout<<"Enter x1 & y1,x2 & y2 : ";
    cin>>x1>>y1>>x2>>y2;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    rectangle(x1,y1,x2,y2);
    getch();
    closegraph();
    return 0;
}

