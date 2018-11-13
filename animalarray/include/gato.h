#ifndef GATO_H
#define GATO_H
#include <iostream>
#include "animal.h"

using namespace std;

class gato : public animal
{
    public:
        gato(string ,int );
        void habla(void);

    protected:

    private:

};

#endif // GATO_H
