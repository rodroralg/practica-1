#include <iostream>
#include "animal.h"
#include "animalarray.h"
#include "loro.h"
#include "perro.h"
#include "gato.h"
using namespace std;

int main()
{
    animal p("cuqui",4);
    animal ga("nieve",4);
    animal lo("tukituki",2);
    animal arr[]={p,ga,lo};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size ; i++){
        arr[i].habla();
    }

    animalarray pa2(arr,size);
    cout << endl;

    //contructor copy
    animalarray pp=pa2;
    pp.push_back(ga);
    pp.print();
    cout << endl;

    pp.insert(1,ga);
    pp.print();
    cout << endl;
    return 0;
}
