#pragma once
#ifndef INTERFAZ_H
#define  INTERFAZ_H
#include <allegro5/allegro.h>
#include<allegro5/allegro_font.h>
#include<allegro5/allegro_ttf.h>
#include<allegro5/allegro_image.h>

class interfaz {
public:
	ALLEGRO_DISPLAY* display;
	ALLEGRO_FONT* font1;
	ALLEGRO_FONT* font2;
	ALLEGRO_FONT* font3;
	ALLEGRO_FONT* font4;
	ALLEGRO_BITMAP* image;
	ALLEGRO_BITMAP* image2;
	ALLEGRO_BITMAP* image3;
	ALLEGRO_BITMAP* image4;
	ALLEGRO_BITMAP* nivel;
	ALLEGRO_BITMAP* nivel1;
	ALLEGRO_BITMAP* nivel2;
	ALLEGRO_BITMAP* nivel3;
	ALLEGRO_BITMAP* nivel4;
	ALLEGRO_BITMAP* nivel5;
	ALLEGRO_BITMAP* ahorcado;
	ALLEGRO_BITMAP* ahorcado1;
	int contador = 0;
	bool fin = false;
	bool entry1 = false;
	interfaz();
	
	void imprimirMenu();
	void imprimirMenuPrincipal2();
	void borrarMenu();
	void imprimirMapa();
	void imprimirNiveles();
	void imprimirNiveles2();
	void borrarMapa();
	void borrarMapaNiveles();
	void imprimirJuego1();
	void imprimirJuego2();
	void borrarJuego1();
	void borrarJuego2();
	void saliendoJuego();
	
};
#endif 

