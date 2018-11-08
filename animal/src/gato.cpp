#include "gato.h"
#include <iostream>
using namespace std;
#include "animal.h"

gato::gato(string n,int p, int v):animal(n, p)
{
    vidas=v;
    cout << "soy gato y me llamo " << n << " y tengo" << p << "patas" << endl;
    cout << "tengo " << v << " vidas" << endl;
    habla();
    cout << endl;
}


void gato::habla()
{
    cout << "miau miau" << endl;
}
