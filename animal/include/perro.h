#ifndef PERRO_H
#define PERRO_H
#include "animal.h"
#include <iostream>
using namespace std;

class perro : public animal
{
    public:
        perro(string n, int p, string ju);
        void habla(void);
        //void hacerhablar();

    protected:

    private:
        string jugar;
};

#endif // PERRO_H
