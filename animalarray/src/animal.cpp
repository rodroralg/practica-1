#include "animal.h"
#include <iostream>
using namespace std;
animal::animal(string n, int p)
{
    nombre=n;
    nroPatas=p;
}

void animal::habla(void)
{
    cout<< "mi nombre es " << nombre << " y tengo " <<nroPatas<< "patas" << endl;
}

animal::animal()
{
    nombre="nombre";
    nroPatas=4;
}
