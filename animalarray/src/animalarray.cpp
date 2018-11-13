#include "animalarray.h"
#include <iostream>
using namespace std;
#include "animal.h"

animalarray::animalarray()
{
    this->size=0;
    this->animals= new animal[size];

}

animalarray::animalarray(const animal pts[], const int size)
{
    this->size=size;
    this->animals= new animal[size];
    for (int i=0; i< size;i++)
        animals[i]= pts[i];
}

animalarray::animalarray(animalarray &o)
{
    this->size=o.size;
    this->animals= new animal[o.size];
    for (int i=0; i< size;i++)
        animals[i]= o.animals[i];
}

animalarray::~animalarray()
{
    delete[] animals;
}

void animalarray::resize(int newSize)
{
    animal *pts= new animal[newSize];
    int minsize= (newSize > size) ? size : newSize;
    for (int i=0;i<minsize;i++)
        pts[i]= animals[i];
    delete[] animals;
    size=newSize;
    animals=pts;
}

void animalarray::push_back(const animal &p)
{
    resize(size+1);
    animals[size-1]=p;
}

void animalarray::insert(const int pos, const animal &q)
{
    resize(size+1);
    for (int i=(size-1); i > pos; i--)
        animals[i] = animals[i-1];
    animals[pos]=q;

}

void animalarray::remove(const int pos)
{
    if(pos >= 0 && pos < size){
        for(int i = pos; i < size-2; i++)
            animals[i]=animals[i+1];
        resize(size-1);
    }

}

void animalarray::print()
{
    for(int t=0;t<size;t++)
        animals[t].habla();
}
