#ifndef PARTICIPANTES _H
#define PARTICIPANTES _H
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
#include "juego.h"

class Participantes
{
    public:
        Participantes ();
        virtual ~Participantes ();

    protected:

    private:
        Texture *pantalla3;
        Sprite *spritep3;
};

#endif // PARTICIPANTES _H
