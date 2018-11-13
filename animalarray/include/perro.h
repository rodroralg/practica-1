#ifndef PERRO_H
#define PERRO_H
#include <iostream>
#include "animal.h"

using namespace std;

class perro : public animal
{
    public:
        perro(string ,int );
        void habla(void);

    protected:

    private:

};

#endif // PERRO_H
