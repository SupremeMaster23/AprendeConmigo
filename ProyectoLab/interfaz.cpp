#include"interfaz.h"
#include <allegro5/allegro.h>
#include<allegro5/allegro_font.h>
#include<allegro5/allegro_ttf.h>
#include<allegro5/allegro_image.h>
#include <stdio.h>
#include<iostream>
#include<string>
using namespace std;


interfaz::interfaz() {

}

void interfaz::imprimirMenu() {
	al_init();
	al_init_image_addon();
	al_init_ttf_addon();
	al_init_font_addon();
display = al_create_display(862, 674);
font1 = al_load_ttf_font("mayaf.TTF", 100, 0);
font2 = al_load_ttf_font("opcionf.ttf", 45, 0);
font3 = al_load_ttf_font("opcionf.ttf", 45, 0);
font4 = al_load_ttf_font("opcionf.ttf", 45, 0);
image = al_load_bitmap("maya.png");
image2 = al_load_bitmap("box1.png");
image3 = al_load_bitmap("box1.png");
image4 = al_load_bitmap("box1.png");
al_draw_bitmap(image, 0, 0, NULL);
al_draw_text(font1, al_map_rgb(23,23,21), 25, 420 ,0, "TEMPLE OF WISDOM");
al_draw_bitmap(image2, 20,300, NULL);
al_draw_bitmap(image3, 310, 300, NULL);
al_draw_bitmap(image4, 600, 300, NULL);
al_draw_text(font2, al_map_rgb(23, 23, 21), 35, 330, 0, "1 RATINGS");
al_draw_text(font3, al_map_rgb(23, 23, 21), 350, 330, 0, "2 PLAY");
al_draw_text(font3, al_map_rgb(23, 23, 21), 650, 330, 0, "3 QUIT");
al_flip_display();
}

void interfaz::borrarMenu() {
	al_destroy_font(font1);
	al_destroy_font(font2);
	al_destroy_font(font3);
	al_destroy_font(font4);
	al_destroy_bitmap(image);
	al_destroy_bitmap(image2);
	al_destroy_bitmap(image3);
	al_destroy_bitmap(image4);
}

void interfaz::imprimirMapa() {

	nivel = al_load_bitmap("mapaOriginal.png");
	al_draw_bitmap(nivel, 0, 0, NULL);

}

void interfaz::saliendoJuego() {
	if (contador == 1) {

		nivel1 = al_load_bitmap("mapaNivel1.png");
		al_draw_bitmap(nivel1, 0, 0, NULL);

	}
	if (contador == 2) {

		nivel2 = al_load_bitmap("mapaNivel2.png");
		al_draw_bitmap(nivel2, 0, 0, NULL);

	}
	if (contador == 3) {

		nivel3 = al_load_bitmap("mapaNivel3.png");
		al_draw_bitmap(nivel3, 0, 0, NULL);
	
	}
	if (contador == 4) {

		nivel4 = al_load_bitmap("mapaNivel4.png");
		al_draw_bitmap(nivel4, 0, 0, NULL);
	
	}
	if (contador == 5) {

		nivel5 = al_load_bitmap("mapaNivel5.png");
		al_draw_bitmap(nivel5, 0, 0, NULL);
	}
}
void interfaz::imprimirNiveles() {

	if (contador == 1) {

		nivel1 = al_load_bitmap("mapaNivel1.png");
		al_draw_bitmap(nivel1, 0, 0, NULL);
		if (entry1 == false) {
			al_destroy_bitmap(nivel2);
		}
	}
	if (contador == 2) {
		entry1 = true;
		nivel2 = al_load_bitmap("mapaNivel2.png");
		al_draw_bitmap(nivel2, 0, 0, NULL);
		al_destroy_bitmap(nivel3);
	}
	if (contador == 3) {

		nivel3 = al_load_bitmap("mapaNivel3.png");
		al_draw_bitmap(nivel3, 0, 0, NULL);
		al_destroy_bitmap(nivel4);
	}
	if (contador == 4) {

		nivel4 = al_load_bitmap("mapaNivel4.png");
		al_draw_bitmap(nivel4, 0, 0, NULL);
		al_destroy_bitmap(nivel5);
	}
	if (contador == 5) {

		//nivel1 = al_load_bitmap("mapaNivel5.png");
		//al_draw_bitmap(nivel1, 0, 0, NULL);
	}


}
void interfaz::imprimirNiveles2() {

	if (contador == 1) {

		nivel1 = al_load_bitmap("mapaNivel1.png");
		al_draw_bitmap(nivel1, 0, 0, NULL);

	
	}
	if (contador == 2) {

		nivel2 = al_load_bitmap("mapaNivel2.png");
		al_draw_bitmap(nivel2, 0, 0, NULL);
		al_destroy_bitmap(nivel1);
	}
	if (contador == 3) {

		nivel3 = al_load_bitmap("mapaNivel3.png");
		al_draw_bitmap(nivel3, 0, 0, NULL);
		al_destroy_bitmap(nivel2);
	}
	if (contador == 4) {

		nivel4 = al_load_bitmap("mapaNivel4.png");
		al_draw_bitmap(nivel4, 0, 0, NULL);
		al_destroy_bitmap(nivel3);
		fin = false;
	}
	if (contador == 5) {

		nivel5 = al_load_bitmap("mapaNivel5.png");
		al_draw_bitmap(nivel5, 0, 0, NULL);
		if (fin == false) {
			al_destroy_bitmap(nivel4);
		}
		fin = true;
	}


}
void interfaz::borrarMapa() {
	if (contador == 1) {
		al_destroy_bitmap(nivel1);
	}
	if (contador == 2) {
		al_destroy_bitmap(nivel2);
	}
	if (contador == 3) {
		al_destroy_bitmap(nivel3);
	}
	if (contador == 4) {
		al_destroy_bitmap(nivel4);
	}
	if (contador == 5) {
		al_destroy_bitmap(nivel5);
	}
}

void interfaz::borrarMapaNiveles() {
	al_destroy_bitmap(nivel1);
}

void interfaz::imprimirMenuPrincipal2() {

		font1 = al_load_ttf_font("mayaf.TTF", 100, 0);
		font2 = al_load_ttf_font("opcionf.ttf", 45, 0);
		font3 = al_load_ttf_font("opcionf.ttf", 45, 0);
		font4 = al_load_ttf_font("opcionf.ttf", 45, 0);
		image = al_load_bitmap("maya.png");
		image2 = al_load_bitmap("box1.png");
		image3 = al_load_bitmap("box1.png");
		image4 = al_load_bitmap("box1.png");
		
		al_draw_bitmap(image, 0, 0, NULL);
		al_draw_text(font1, al_map_rgb(23, 23, 21), 25, 420, 0, "TEMPLE OF WISDOM");
		al_draw_bitmap(image2, 20, 300, NULL);
		al_draw_bitmap(image3, 310, 300, NULL);
		al_draw_bitmap(image4, 600, 300, NULL);
		al_draw_text(font2, al_map_rgb(23, 23, 21), 35, 330, 0, "1 RATINGS");
		al_draw_text(font3, al_map_rgb(23, 23, 21), 350, 330, 0, "2 PLAY");
		al_draw_text(font3, al_map_rgb(23, 23, 21), 650, 330, 0, "3 QUIT");
		al_flip_display();
	}

void interfaz::imprimirJuego1() {

	
	al_clear_to_color(al_map_rgb(0, 0, 0));
	ahorcado2 = al_load_bitmap("j1.png");
	al_draw_bitmap(ahorcado2, 0, 0, NULL);

}
void interfaz::imprimirGame1() {


	al_clear_to_color(al_map_rgb(0, 0, 0));
	trivia= al_load_bitmap("game2.jfif");
	al_draw_bitmap(trivia, 0, 0, NULL);

}

void interfaz::impmirGame2() {
	al_clear_to_color(al_map_rgb(0, 0, 0));
	trivia2 = al_load_bitmap("game2.2.png.png");
	question = al_load_ttf_font("Ahorcadof.ttf", 45, 100);
	answer1 = al_load_ttf_font("Ahorcadof.ttf", 35, 100);
	answer2 = al_load_ttf_font("Ahorcadof.ttf", 35, 100);
	
	al_draw_bitmap(trivia2, 0, 0, NULL);
	al_draw_text(question, al_map_rgb(0, 0, 0), 110, 130, 0, questionF);
	if (primeravez == false) {
		srand(time(0));
		numero = rand() % 2;
		aquiestoyizq = false;
		aquiestoydere = false;
		primeravez = true;
	}
	if (numero == 0) {
		al_draw_text(answer1, al_map_rgb(0, 0, 0), 50, 600, 0, ans1);
		al_draw_text(answer2, al_map_rgb(0, 0, 0), 450, 600, 0, ans2);
		aquiestoyizq = true;
		aquiestoydere = false;
	}
	else if (numero == 1) {
		al_draw_text(answer1, al_map_rgb(0, 0, 0), 50, 600, 0, ans2);
		al_draw_text(answer2, al_map_rgb(0, 0, 0), 450, 600, 0, ans1);
		aquiestoyizq = false;
		aquiestoydere = true;
	}
	puntajeTriviaF = al_load_ttf_font("puntosfont.ttf", 30, 100);
	
	sprintf(puntosTrivia, "PUNTOS= %d", puntuacionTrivia);
	al_draw_text(puntajeTriviaF, al_map_rgb(255, 255, 255), 0, 0, 0, puntosTrivia);
	heartandlogs();
}
void interfaz::imprimirJuego2() {
	al_clear_to_color(al_map_rgb(0, 0, 0));
	ahorcado1 = al_load_bitmap("j1.2.jfif");
	fontAhorcado = al_load_ttf_font("Ahorcadof.ttf", 45, 100);
	hintsF = al_load_ttf_font("Ahorcadof.ttf", 35, 100);
	puntajeF= al_load_ttf_font("puntosfont.ttf",30, 100);
	al_draw_bitmap(ahorcado1, 0, 0, NULL);
	sprintf(puntos, "PUNTOS= %d", puntuacion);
	al_draw_text(fontAhorcado, al_map_rgb(0, 0, 0), 210, 160, 0, palabraoculta);
	al_draw_text(hintsF, al_map_rgb(0, 0, 0), 230, 600, 0, hintAhorcado);
	al_draw_text(puntajeF, al_map_rgb(255, 255, 255),0,0 ,0, puntos);
	vidasYescalones();

}

void interfaz::borrarJuego1() {
	al_destroy_bitmap(ahorcado2);
}
void interfaz::borrarGame1() {
	al_destroy_bitmap(trivia);

}

void interfaz::borrarGame2() {
	al_destroy_bitmap(trivia2);
	al_destroy_font(question);
	al_destroy_font(answer1);
	al_destroy_font(answer2);
	al_destroy_font(puntajeTriviaF);
	al_destroy_bitmap(heartsTrivia);
	al_destroy_bitmap(logs);

}
void interfaz::borrarJuego2() {
	al_destroy_bitmap(ahorcado1);
	al_destroy_bitmap(hearts);
	if (escalones > 0) {
		al_destroy_bitmap(stairs);
	}
	al_destroy_font(fontAhorcado);
	al_destroy_font(puntajeF);
	al_destroy_font(hintsF);

}

void interfaz::datos() {
	for (int x = 0; x < sizeWord; x++) {
		palabraoculta[x] = NULL;
		palabraAhorcado[x] = NULL;

	}
	for (int x = 0; x < sizehint; x++) {
		hintAhorcado[x] = NULL;
	}
	srand(time(0));
	numero = rand() % 41;

	num = to_string(numero);
	cout << num;
	ifstream file("questions.txt");
	if (file.is_open()) {
		while (getline(file, palabra2)) {
			if (palabra2 == num) {
				getline(file, palabra2);
				getline(file, hint);

				break;
			}
		}

		file.close();
		sizeWord = palabra2.length();
		sizehint = hint.length();
		
		for (int x = 0; x < sizeWord; x++) {
			palabraoculta[x]= '_';
			
		}
		for (int x = 0; x < sizehint; x++) {
			hintAhorcado[x] = hint.at(x);
		}

	   

		
	}
	
}
void interfaz::datosTrivia() {

	srand(time(0));
	numero = rand() % 25;

	num = to_string(numero);
	cout << num;
	ifstream file("questions2.txt");
	if (file.is_open()) {
		while (getline(file, pregunta)) {
			if (pregunta == num) {
				getline(file, pregunta);
				getline(file, v);
				getline(file, respuestas[0]);
				getline(file, f);
				getline(file, respuestas[1]);


				break;
			}
		}

		file.close();
		correcta = respuestas[0];
		falsa = respuestas[1];
		strcpy(ans1, correcta.c_str());
		strcpy(ans2, falsa.c_str());
		strcpy(questionF, pregunta.c_str());
	

	}

}

void interfaz:: verificacion() {
	int si = 0;

		for (int x = 0; x < sizeWord; x++) {
			if (letra == palabra2.at(x)) {
				palabraoculta[x] = letra;
				cout << "si";
				si++;


			}

		}
		if (si == 0) {
			vidas--;
		}

		imprimirJuego2();
		al_flip_display();
		borrarJuego2();
	
}
void interfaz::nuevapregunta(int _valor) {
	if (_valor == 1) {
		if (aquiestoyizq == true) {
			cout << "yay";
			puntuacionTrivia += 50;
			troncos++;
			
		}
		else {
			cout << "NOOO";
			vidasTrivia--;
		}
	}
	else if (_valor == 2) {
		if (aquiestoydere == true) {
			cout << "yay";
			puntuacionTrivia += 50;
			troncos++;
		}
		else {
			cout << "NOOO";
			vidasTrivia--;
		}
	}
	for (int x = 0; x < 50; x++) {
		questionF[x] = NULL;
	}
	for (int x = 0; x < 25; x++) {
		ans1[x] = NULL;
		ans2[x] = NULL;
	}
	for (int x = 0; x < 2; x++) {
		respuestas[x] = "";
	}
	aquiestoyizq = false;
	aquiestoydere = false;
	primeravez = false;
	datosTrivia();

}

void interfaz::cambiodepalabra() {
	int cont = 0;
	if (vidas > 0) {
		for (int x = 0; x < sizeWord; x++) {
			if (palabraoculta[x] == '_') {
				cont++;
			}

		}
		if (cont == 0) {
			datos();
			puntuacion += 50;
			escalones+=1;

		}
	}
}
void interfaz::heartandlogs() {
	if (vidasTrivia == 5) {
		heartsTrivia = al_load_bitmap("5vidas.png");
		al_draw_bitmap(heartsTrivia, 600, 0, NULL);
	}
	else if (vidasTrivia == 4) {
		heartsTrivia = al_load_bitmap("4vidas.png");
		al_draw_bitmap(heartsTrivia, 500, 0, NULL);
	}
	else if (vidasTrivia == 3) {
		heartsTrivia = al_load_bitmap("3vidas.png");
		al_draw_bitmap(heartsTrivia, 500, 0, NULL);
	}
	else if (vidasTrivia == 2) {
		heartsTrivia = al_load_bitmap("2vidas.png");
		al_draw_bitmap(heartsTrivia, 500, 0, NULL);
	}
	else if (vidasTrivia == 1) {
		heartsTrivia = al_load_bitmap("1vida.png");
		al_draw_bitmap(heartsTrivia, 500, 0, NULL);
	}
	else if (vidasTrivia == 0) {
		heartsTrivia = al_load_bitmap("1vida.png");

	}

	if (troncos == 0) {
		logs = al_load_bitmap("log1.png");
	}
	else if (troncos == 1) {
		logs = al_load_bitmap("log1.png");
		al_draw_bitmap(logs, 250,330, NULL);
	}
	else if (troncos == 2) {
		logs = al_load_bitmap("log2.png");
		al_draw_bitmap(logs, 150, 330, NULL);
	}
	else if (troncos == 3) {
		logs = al_load_bitmap("log3.png");
		al_draw_bitmap(logs, 250, 330, NULL);
	}
	else if (troncos == 4) {
		logs = al_load_bitmap("log4.png");
		al_draw_bitmap(logs, 250, 330, NULL);
	}
	else if (troncos == 5) {
		logs = al_load_bitmap("log5.png");
		al_draw_bitmap(logs, 250, 330, NULL);
	}
	else if (troncos == 6) {
		logs = al_load_bitmap("log6.png");
		al_draw_bitmap(logs, 250, 300, NULL);
	}
	else if (troncos == 7) {
		logs = al_load_bitmap("log6.png");
	}
}

void interfaz::vidasYescalones() {
	
	if (vidas == 5) {
		hearts = al_load_bitmap("5vidas.png");
		al_draw_bitmap(hearts, 600, 0, NULL);
	}
	else if (vidas == 4) {
		hearts = al_load_bitmap("4vidas.png");
		al_draw_bitmap(hearts, 500, 0, NULL);
	}
	else if (vidas == 3) {
		hearts = al_load_bitmap("3vidas.png");
		al_draw_bitmap(hearts, 500, 0, NULL);
	}
	else if (vidas == 2) {
		hearts = al_load_bitmap("2vidas.png");
		al_draw_bitmap(hearts, 500, 0, NULL);
	}
	else if (vidas == 1) {
		hearts = al_load_bitmap("1vida.png");
		al_draw_bitmap(hearts, 500, 0, NULL);
	}
	else if (vidas == 0) {
		hearts = al_load_bitmap("1vida.png");
	
	}

	if (escalones == 0) {

	}
	else if (escalones == 1) {
		stairs = al_load_bitmap("piramide1.png");
		al_draw_bitmap(stairs, 250, 480, NULL);
	}
	else if (escalones == 2) {
		stairs = al_load_bitmap("piramide2.png");
		al_draw_bitmap(stairs, 250, 440, NULL);
	}
	else if (escalones == 3) {
		stairs = al_load_bitmap("piramide3.png");
		al_draw_bitmap(stairs, 250, 380, NULL);
	}
	else if (escalones == 4) {
		stairs = al_load_bitmap("piramide4.png");
		al_draw_bitmap(stairs, 250, 340, NULL);
	}
	else if (escalones == 5) {
		stairs = al_load_bitmap("piramide5.png");
		al_draw_bitmap(stairs, 250, 300, NULL);
	}
	else if (escalones == 6) {
		stairs = al_load_bitmap("piramide5.png");

	}
	

}
void interfaz::reincioTrivia() {
	vidasTrivia = 5;
	troncos = 0;
    puntuacionTrivia = 0;
	for (int x = 0; x < 50; x++) {
		questionF[x] = NULL;
	}
	for (int x = 0; x < 25; x++) {
		ans1[x] = NULL;
		ans2[x] = NULL;
	}
	for (int x = 0; x < 2; x++) {
		respuestas[x] = "";
	}
	aquiestoyizq = false;
	aquiestoydere = false;
	primeravez = false;
}
void interfaz::reinicioAhorcado() {
	vidas = 5;
	escalones =0;
	puntuacion = 0;

		for (int x = 0; x < sizeWord; x++) {
		palabraoculta[x] = NULL;
		palabraAhorcado[x] = NULL;

	}
	for (int x = 0; x < sizehint; x++) {
		hintAhorcado[x] = NULL;
	}

}

void interfaz::winwin() {
	al_clear_to_color(al_map_rgb(0, 0, 0));
	win = al_load_bitmap("win.png");
	al_draw_bitmap(win, 0, 0, NULL);
	al_flip_display();

}
void interfaz::loselose() {
	al_clear_to_color(al_map_rgb(0, 0, 0));
	lose = al_load_bitmap("lose.png");
	al_draw_bitmap(lose, 0, 0, NULL);
	al_flip_display();
 }

void interfaz::borrarlose() {
	al_destroy_bitmap(lose);
}

void interfaz::borrarwin() {
	al_destroy_bitmap(win);
}


