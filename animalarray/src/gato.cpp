#include "gato.h"

#include <iostream>
using namespace std;
gato::gato(string n ,int p):animal(n,p){}

void gato:: habla(void)
{
    cout << nombre << " hace miauu miauu!!" << endl;
    cout << "Tiene " << nroPatas << " patas" << endl;
}
