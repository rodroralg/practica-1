#ifndef POINTARRAY_H
#define POINTARRAY_H

#include "point.h"
#include <iostream>
using namespace std;

template<class T>
class PointArray
{
    public:
        PointArray();
        PointArray(const Point<T> pts[], const int size);
        PointArray(PointArray<T> &o);
        ~PointArray();

        void print();
        int getSize();
        void push_back(const Point<T> &p);
        void insert(const int , const Point<T> &p);
        void remove(const int);

    private:
        int size;
        Point<T> *points;
        void resize(int newSize);
};

#endif // POINTARRAY_H
