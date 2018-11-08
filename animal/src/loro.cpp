#include "loro.h"
#include <iostream>
using namespace std;
#include "animal.h"

loro::loro(string n,int p, string can):animal(n,p)
{
    cantar=can;
    cout << "soy loro y me llamo " << n << " y tengo" << p << "patas" << endl;
    cout << "canto " << can << endl;
    habla();
    cout << endl;

}

void loro::habla()
{
    cout << "kikiriki" << endl;
}
