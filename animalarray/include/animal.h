#ifndef ANIMAL_H
#define ANIMAL_H


#include <iostream>

using namespace std;

class animal
{
    public:
        animal(string n ,int p);
        void habla(void);
        animal();

    protected:
        string nombre;
        int nroPatas;

};

#endif // ANIMAL_H
