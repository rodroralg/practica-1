#include "animal.h"
#include <iostream>
using namespace std;

animal::animal()
{
    nombre= "no tengo nombre";
    nrodepatas=0;
}

/*
animal::animal(string n, int p)
{
    nombre=n;
    nrodepatas=p;
}
*/
void animal::habla()
{
    cout << "me llamo " << nombre << " y tengo" << nrodepatas << "patas" << endl;
}
