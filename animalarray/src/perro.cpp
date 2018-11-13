#include "perro.h"

#include <iostream>
using namespace std;

perro::perro(string n ,int p):animal(n,p){}

void perro:: habla(void)
{

    cout << nombre << " hace wauu wauu!!" << endl;
    cout << "Tiene " << nroPatas << " patas" << endl;
}
