#include <iostream>
#include "animal.h"
#include "perro.h"
#include "loro.h"
#include "gato.h"
#include "animalarray.h"
using namespace std;

int main()
{
    perro a("fido",4, "mi pelota");
    //a.habla();

    gato g("lola",4,7);
    //g.habla();

    loro l("yayo", 2, "taki taki");
    //l.habla();



    //animal array
    animal arr[]={a,g,l};
    int size =sizeof(arr)/sizeof(arr[0]);

    animalarray an(arr, size);
    animalarray an2=an;


    cout << endl;
    an2.push_back(g);
    an2.print();
    cout << endl;
    an2.insert(0,l);
    //an2.print();



    return 0;
}
