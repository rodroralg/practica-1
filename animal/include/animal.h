#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class animal
{
    public:
        animal();
        animal (string n, int p): nombre(n), nrodepatas(p){}

        //virtual void habla()=0;
        void habla();
        void hacerhablar(){
            this->habla();
        }

    protected:
        string nombre;
        int nrodepatas;
    private:
};

#endif // ANIMAL_H
