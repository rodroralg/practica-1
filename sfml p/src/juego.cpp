#include "juego.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
using namespace sf;
using namespace std;
juego::juego(int resolucion_x, int resolucion_y, string titulo)
{
    ventana= new RenderWindow(VideoMode(resolucion_x,resolucion_y),titulo);




    //textos
/*
    fuente1= new Font();
    fuente1->loadFromFile("fuente-de-letra.ttf");

    txt_ingresarjugadores.setFont(*fuente1);
    txt_ingresarjugadores.setString("1. ingresar jugadores");
    txt_ingresarjugadores.setPosition(80,320);
    txt_ingresarjugadores.setColor(Color::White);

    txt_verscore.setFont(*fuente1);
    txt_verscore.setString("2. ver score");
    txt_verscore.setPosition(80,380);
    txt_verscore.setColor(Color::White);

*/
    pantallas();


    gameloop();
}

void juego::pantallas()
{
    pantalla1=new Texture;
    spritep1=new Sprite;

    pantalla1->loadFromFile("pantalla1.png");//logo
    spritep1->setTexture(*pantalla1);//logo
    spritep1->setPosition(0,0);

    evento1= new Event;

    pantalla2=new Texture;
    spritep2=new Sprite;

    pantalla2->loadFromFile("pantalla2.png");
    spritep2->setTexture(*pantalla2);
    spritep2->setPosition(0,0);
    spritep2->setColor(Color::Transparent);

    pantalla3=new Texture;
    spritep3= new Sprite;

    pantalla3->loadFromFile("pantalla3.png");
    spritep3->setTexture(*pantalla3);
    spritep3->setPosition(0,0);
    spritep3->setColor(Color::Transparent);


    ruleta3.loadFromFile("rn3.png");
    rul3.setTexture(ruleta3);
    rul3.setPosition(-800,0);

    ruleta4.loadFromFile("rn4.png");
    rul4.setTexture(ruleta4);
    rul4.setPosition(-800,0);

    ruleta5.loadFromFile("rn5.png");
    rul5.setTexture(ruleta5);
    rul5.setPosition(-800,0);



}

void juego::abrirp()
{


    Event event;
        while (ventana->pollEvent(event))
        {
            if (event.type == Event::Closed)
                ventana->close();
        }


    ventana->clear(Color::White);
    ventana->draw(*spritep1);
    ventana->draw(*spritep2);
    ventana->draw(*spritep3);
    ventana->draw(rul3);
    ventana->draw(rul4);
    ventana->draw(rul5);
    ventana->display();
}

void juego::gameloop()
{
    /*
    Event event;
    SoundBuffer buffer;
    if(!buffer.loadFromFile("musicTF.wav"))
    {
        cout << "ERROR" << endl;
    }

    Sound sound;
    sound.setBuffer(buffer);
    sound.play();
    */
    while(ventana->isOpen()){


        procesar_eventos();
        abrirp();

    }
}

void juego::procesar_eventos()
{
    while(ventana->pollEvent(*evento1))
    {
        switch(evento1->type)
        {
        case Event::KeyPressed:
            if (Keyboard::isKeyPressed(Keyboard::Enter))
            {
                spritep1->setColor(Color::Transparent);
                spritep2->setColor(Color::Black);
                spritep3->setColor(Color::Transparent);

                rul3.setPosition(-800,0);
                rul4.setPosition(-800,0);
                rul5.setPosition(-800,0);
            }
            if (Keyboard::isKeyPressed(Keyboard::Escape))
            {
                spritep1->setColor(Color::Black);
                spritep2->setColor(Color::Transparent);
                spritep3->setColor(Color::Transparent);
                rul3.setPosition(-800,0);
                rul4.setPosition(-800,0);
                rul5.setPosition(-800,0);
            }
            if (Keyboard::isKeyPressed(Keyboard::Num3))
            {
                spritep1->setColor(Color::Transparent);
                spritep2->setColor(Color::Transparent);
                spritep3->setColor(Color::Black);
                rul3.setPosition(280,300);
                rul4.setPosition(-800,0);
                rul5.setPosition(-800,0);

            }
            if (Keyboard::isKeyPressed(Keyboard::Num4))
            {
                spritep1->setColor(Color::Transparent);
                spritep2->setColor(Color::Transparent);
                spritep3->setColor(Color::Black);
                rul3.setPosition(-800,0);
                rul4.setPosition(280,300);
                rul5.setPosition(-800,0);

            }
            if (Keyboard::isKeyPressed(Keyboard::Num5))
            {
                spritep1->setColor(Color::Transparent);
                spritep2->setColor(Color::Transparent);
                spritep3->setColor(Color::Black);
                rul3.setPosition(-800,0);
                rul4.setPosition(-800,0);
                rul5.setPosition(280,300);

            }
        }
    }
}
