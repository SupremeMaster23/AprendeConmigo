#pragma once
#ifndef ACCIONES_H
#define ACCIONES_H
#include<allegro5/allegro.h>
#include<allegro5/keyboard.h>
#include<allegro5/allegro_image.h>
#include "interfaz.h"
#include"ahorcado.h"

class acciones {
public:
	bool entre1 = false;
	bool done1 = false;
	bool done2 = false;
	bool done3 = false;
	bool done4 = false;
	bool j2done1 = false;
	bool j2done2 = false;
	bool donefin = false;
	bool donefin2 = false;
	bool entrar = false;
	bool quit = false;
	
	
	ALLEGRO_EVENT_QUEUE* eventQueue;
	ALLEGRO_EVENT events;
	ALLEGRO_KEYBOARD_STATE keyState;
	interfaz i;



	acciones();
	void accionPrincipal();
	void accionMapa();
	void accionJuego1();
	void datos();
	void accionJuego2();
};
#endif
