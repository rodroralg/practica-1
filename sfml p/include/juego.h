#ifndef JUEGO_H
#define JUEGO_H
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

class juego
{
    public:
        juego(int resolucion_x, int resolucion_y, string titulo);
        void abrirp();
        void gameloop();// funcion que se repite constantemente para que el programa corra
        void pantallas();
        void procesar_eventos();
    protected:

    private:
        RenderWindow *ventana;

        Texture *pantalla1;
        Sprite *spritep1;
        Texture *pantalla2;
        Sprite *spritep2;
        Texture *pantalla3;
        Sprite *spritep3;

        Event *evento1;

        Texture ruleta3;
        Sprite rul3;
        Texture ruleta4;
        Sprite rul4;
        Texture ruleta5;
        Sprite rul5;


        /*
        Font *fuente1;
        Text *txt_prin;//sfml vuelve el texto de string a una imagen para poder mostrarla en la pantalla
        Text txt_ingresarjugadores;
        Text txt_verscore;
        */

};

#endif // JUEGO_H
