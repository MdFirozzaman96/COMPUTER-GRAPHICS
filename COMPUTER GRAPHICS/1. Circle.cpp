#include<graphics.h>
#include <iostream>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int x,y,r;
    cout<<"Enter x,y & r : ";
    cin>>x>>y>>r;
    circle(x,y,r);
    getch();
    closegraph();
    return 0;
}
