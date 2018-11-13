#include "loro.h"

#include <iostream>
using namespace std;

loro::loro(string n ,int p):animal(n,p){}

void loro:: habla(void)
{
    cout << nombre << " hace imitaciones!!" << endl;
    cout << "Tiene " << nroPatas << " patas" << endl;
}
