#include "perro.h"
#include "animal.h"
#include <iostream>
using namespace std;

perro::perro(string n,int p, string ju): animal(n,p)
{
    jugar=ju;
    cout << "soy perro y me llamo " << n << " y tengo " << p << " patas" << endl;
    cout << "estoy jugando con " << ju << endl;
    habla();
    cout << endl;
}

void perro::habla()
{
    cout << "barf barf" << endl;
}
