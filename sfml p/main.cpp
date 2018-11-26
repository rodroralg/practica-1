#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "windows.h"
#include "juego.h"
using namespace std;
using namespace sf;
int main()
{

    //PlaySound(TEXT("musicTF.wav"),NULL,SND_ASYNC);
    juego *verdadoreto;
    verdadoreto= new juego(800,600,"Truth or Dare");


    return 0;
}
