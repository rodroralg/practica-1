#include "point.h"
#include <iostream>

using namespace std;

template<typename T>
Point<T>::Point(T xh, T xy){
    x = xh;
    y = xy;
}

template<typename T>
Point<T>::Point(){
    x=0;
    y=0;

}

template<typename T>
Point<T>::Point(Point &o)
{
    x=o.x;
    y=o.y;
}

template<typename T>
void Point<T>::print(){
    cout << "(" << x << "," << y << ")" << endl;
}

template<typename T>
void Point<T>::offset(int nx, int ny){
    x+= nx;
    y+= ny;
}
