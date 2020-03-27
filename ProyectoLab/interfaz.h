#pragma once
#ifndef INTERFAZ_H
#define  INTERFAZ_H
#include <allegro5/allegro.h>
#include<allegro5/allegro_font.h>
#include<allegro5/allegro_ttf.h>
#include<allegro5/allegro_image.h>
#include <fstream>
#include<iostream>
#include<string>
using namespace std;


class interfaz {
public:
	ALLEGRO_DISPLAY* display;
	ALLEGRO_FONT* fontAhorcado;
	
	
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
	ALLEGRO_BITMAP* ahorcado2;
	ALLEGRO_BITMAP* ahorcado1;
	ALLEGRO_BITMAP* hearts;
	ALLEGRO_BITMAP* heartsTrivia;
	ALLEGRO_BITMAP* stairs;
	ALLEGRO_BITMAP* trivia;
	ALLEGRO_BITMAP* trivia2;
	ALLEGRO_BITMAP* win;
	ALLEGRO_BITMAP* lose;
	ALLEGRO_BITMAP* logs;
	ALLEGRO_FONT* question;
	ALLEGRO_FONT* answer1;
	ALLEGRO_FONT* answer2;
	ALLEGRO_FONT* puntajeTriviaF;
	char* puntosTrivia = new char[10];
	
	int puntuacionTrivia = 0;
	int vidas= 5;
	int troncos = 0;
	int vidasTrivia = 5;
	int escalones = 0;
	char* puntos= new char [10];
	int puntuacion = 0;
	int contador = 0;
	bool fin = false;
	bool entry1 = false;
	char letra = 'a';
	int numero;
	string palabra2 = "";
	string pregunta = "";
	string respuestas[2];
	char questionF[50];
	char ans1[25];
	char ans2[25];
	bool primeravez = false;
	bool aquiestoyizq = false;
	bool aquiestoydere = false;
	string correcta = "";
	string falsa = "";
	string v = "";
	string f= "";
	string hint = "";
	char* palabraoculta=new char[45];
	char* palabraoculta2;
	string num;
	int sizehint = 0;
	int sizeWord = 0;
	char* palabraAhorcado = new char[45];
	char* hintAhorcado = new char[100];
	bool finahorcado = false;
	ALLEGRO_FONT* palabra;
	ALLEGRO_FONT* puntajeF;
	ALLEGRO_FONT* hintsF;
	ALLEGRO_EVENT_QUEUE* eventQueueA;
	ALLEGRO_EVENT eventsA;
	void reincioTrivia();
	void heartandlogs();
	void borrarAhorcado();
    void verificacion();
	void  datos();
	void  datosTrivia();
	void gameLoopAhorcado();
	void cambiodepalabra();
	void reinicioAhorcado();
	void verficacionTrivia();
	void winwin();
	void borrarwin();
	void borrarlose();
	void loselose();
	
	interfaz();
	void nuevapregunta(int);
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
	void vidasYescalones();
	void imprimirGame1();
	void impmirGame2();
	void borrarGame1();
	void borrarGame2();

};
#endif 

