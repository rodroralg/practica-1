#include "pointarray.h"
#include <iostream>
#include "point.h"
using namespace std;

pointarray::pointarray()
{
    this->size =0;
    this->points=new Point[size];
}

pointarray::pointarray(const Point pts[], const int size)
{
    this->size=size;
    this->points= new Point[size];
    for (int i=0; i< size;i++)
        points[i]= pts[i];
}

pointarray::pointarray(pointarray &o)
{
    this->size=o.size;
    this->points= new Point[o.size];
    for (int i=0; i< size;i++)
        points[i]= o.points[i];
}

int pointarray::getSize()
{
    return this->size;
}

pointarray::~pointarray()
{
    delete[] points;
}
