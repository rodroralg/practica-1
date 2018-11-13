#include "animal.h"
#include <iostream>
using namespace std;

animal::animal()
{
    nombre= "no tengo nombre";
    nrodepatas=0;
}

/*
animal::animal(string _n, int _p)
{
    nombre=_n;
    nrodepatas=_p;
}
*/
void animal::habla()
{
    cout << "me llamo " << nombre << " y tengo" << nrodepatas << "patas" << endl;
}
