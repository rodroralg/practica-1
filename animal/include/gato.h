#ifndef GATO_H
#define GATO_H
#include "animal.h"
#include <iostream>
using namespace std;

class gato : public animal
{
    public:
        gato(string n ,int p, int v);

        void habla(void);
        //void hacerhablar();

    protected:

    private:
        int vidas;
};

#endif // GATO_H
