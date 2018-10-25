#ifndef VECTOR_H
#define VECTOR_H
#include "point.h"
#include <iostream>
using namespace std;


class Vector
{
    public:
        Vector();
        Vector(Vector &o);
        Vector(Point s, Point e);
        void offset(int, int);
        void print();

    private:
        Point start,end;
};

#endif // VECTOR_H
