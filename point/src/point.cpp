#include "point.h"
#include <iostream>

using namespace std;
Point::Point(int xh, int xy){
    x = xh;
    y = xy;
}

Point::Point(){
    x=0;
    y=0;

}
Point::Point(Point &o)
{
    x=o.y;
    y=o.x;
}
void Point::print(){
    cout << "(" << x << "," << y << ")" << endl;
}
void Point::offset(int nx, int ny){
    x+= nx;
    y+= ny;
}
