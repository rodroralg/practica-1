
#define ANIMALARRAY_H
using namespace std;
#include "animal.h"


class animalarray
{
    public:
        animalarray();
        animalarray(const animal pts[], const int size);
        animalarray(animalarray &o);
        ~animalarray();
        void push_back(const animal &p);
        void insert(const int , const animal &);
        void remove(const int);
        void print();

    protected:

    private:
        int size;
        animal *animals;
        void resize(int newsize);


};
