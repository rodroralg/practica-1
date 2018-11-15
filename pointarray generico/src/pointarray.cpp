#include "pointarray.h"
#include "point.h"
#include <iostream>

using namespace std;

template<class T>
PointArray<T>::PointArray()
{
    this->size=0;
    this->points=new Point<T>[size];
}

template<class T>
PointArray<T>::PointArray(const Point<T> pts[], const int size)
{
    this->size=size;
    this->points=new Point<T>[size];
    for(int i=0; i<size; i++)
        points[i]=pts[i];
}

template<class T>
PointArray<T>::PointArray(PointArray<T> &o)
{
    this->size=o.size;
    this->points=new Point<T>[o.size];
    for(int i=0; i<size ; ++i)
        points[i]=o.points[i];
}

template<class T>
void PointArray<T>::resize(int newSize){
    Point<T> *pts = new Point<T>[newSize];
    int minsize = (newSize > size) ? size : newSize;
    for(int i=0; i<minsize ; i++)
        pts[i] = points[i];

    delete[] points;
    size = newSize;
    points = pts;
}

template<class T>
void PointArray<T>::push_back(const Point<T> &p){
    resize(size + 1);
    points[size - 1] = p;
}

template<class T>
void PointArray<T>::insert(const int pos, const Point<T> &p){ //posición que quieres insert
    resize(size + 1);
    for(int i=size-1; i>pos ; i--)
        points[i]=points[i-1];

    points[pos]=p;
}

template<class T>
void PointArray<T>::remove(const int pos){
    for(int i=pos; i<size-1 ; i++)
        points[i]=points[i+1];

    resize(size-1);
}

template<class T>
int PointArray<T>::getSize()
{
    return size;
}

template<class T>
void PointArray<T>::print(){
    for(int i=0; i<size; i++)
        points[i].print();
}

template<class T>
PointArray<T>::~PointArray()
{
    delete[] points;
}
