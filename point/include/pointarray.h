#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "point.h"
#include <iostream>
using namespace std;

class pointarray
{
    public:
        pointarray();
        pointarray(const Point pts[], const int size);
        pointarray(pointarray &o);
        ~pointarray();
        int getSize();
    private:
        int size;
        Point *points;

};

#endif // POINTARRAY_H
