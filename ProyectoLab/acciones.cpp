#include<allegro5/allegro.h>
#include<allegro5/allegro_image.h>
#include<iostream>
#include"acciones.h"
#include "interfaz.h"
using namespace std;

acciones::acciones() {

}



void acciones::accionPrincipal() {

	al_install_keyboard();
	al_get_keyboard_state(&keyState);

	if (al_key_down(&keyState, ALLEGRO_KEY_2)) {
		i.borrarMenu();
		al_clear_to_color(al_map_rgb(0, 0, 0));
		i.imprimirMapa();
		al_flip_display();
		accionMapa();

	}
	if (al_key_down(&keyState, ALLEGRO_KEY_3)) {
		quit = true;

	}




}

void acciones::accionMapa() {
	al_destroy_bitmap(i.nivel);
	eventQueue = al_create_event_queue();
	al_register_event_source(eventQueue, al_get_keyboard_event_source());
	done1 = false;
	while (done1 == false) {
	
		al_wait_for_event(eventQueue, &events);

		if (events.type == ALLEGRO_EVENT_KEY_DOWN) {
			switch (events.keyboard.keycode) {
			case ALLEGRO_KEY_RIGHT:
				if (i.contador < 5) {
					i.contador += 1;
				}

				i.imprimirNiveles2();

				break;

			case ALLEGRO_KEY_LEFT:
				if (i.contador > 0) {
					i.contador -= 1;
				}

				i.imprimirNiveles();

				break;

			case ALLEGRO_KEY_ESCAPE:
				
				done1 = true;
				break;

			case ALLEGRO_KEY_ENTER:
				if (i.contador == 1) {
					i.borrarMapa();
					i.imprimirJuego1();
					accionJuego1();

				}
				else if (i.contador == 2) {
					i.borrarMapa();
					i.imprimirGame1();
					accionJuego2();
				}
				break;
			}
		}

		
		

		al_flip_display();
	
		

	}
	
	i.borrarMapa();
	i.contador = 0;
	i.imprimirMenuPrincipal2();

}

void acciones::accionJuego1() {
	i.reinicioAhorcado();
	al_flip_display();
	i.datos();
	cout << "no salgo";
	i.borrarJuego1();
	done3 = false;
	i.entry1 = false;
	//i.vidas = 5;
	while (done3 == false) {

		i.entry1 = true;
		i.imprimirJuego1();
		al_flip_display();
		i.borrarJuego1();


		al_wait_for_event(eventQueue, &events);

		if (events.type == ALLEGRO_EVENT_KEY_DOWN) {
			switch (events.keyboard.keycode) {
			case ALLEGRO_KEY_SPACE:
				entre1 = true;
				i.datos();
				done4 = false;
				while (done4 == false && i.vidas != 0 && i.escalones != 5) {

					i.imprimirJuego2();
					al_flip_display();
					i.borrarJuego2();
					al_wait_for_event(eventQueue, &events);

					if (events.type == ALLEGRO_EVENT_KEY_DOWN) {

						switch (events.keyboard.keycode) {
						case ALLEGRO_KEY_A:
							cout << "A";
							i.letra = 'A';
							i.verificacion();
							i.cambiodepalabra();

							break;
						case ALLEGRO_KEY_B:
							cout << "B";
							i.letra = 'B';
							i.verificacion();
							i.cambiodepalabra();
							break;
						case ALLEGRO_KEY_C:
							cout << "C";
							i.letra = 'C';
							i.verificacion();
							i.cambiodepalabra();
							break;

						case ALLEGRO_KEY_D:
							cout << "D";
							i.letra = 'D';
							i.verificacion();
							i.cambiodepalabra();
							break;

						case ALLEGRO_KEY_E:
							cout << "E";
							i.letra = 'E';
							i.verificacion();
							i.cambiodepalabra();
							break;
						case ALLEGRO_KEY_F:
							cout << "F";
							i.letra = 'F';
							i.verificacion();
							i.cambiodepalabra();

							break;
						case ALLEGRO_KEY_G:
							cout << "G";
							i.letra = 'G';
							i.verificacion();
							i.cambiodepalabra();
							break;
						case ALLEGRO_KEY_H:
							cout << "H";
							i.letra = 'H';
							i.verificacion();
							i.cambiodepalabra();
							break;
						case ALLEGRO_KEY_I:
							cout << "I";
							i.letra = 'I';
							i.verificacion();
							i.cambiodepalabra();
							break;
						case ALLEGRO_KEY_J:
							cout << "J";
							i.letra = 'J';
							i.verificacion();
							i.cambiodepalabra();
							break;
						case ALLEGRO_KEY_K:
							cout << "K";
							i.letra = 'K';
							i.verificacion();
							i.cambiodepalabra();
							break;
						case ALLEGRO_KEY_L:
							cout << "L";
							i.letra = 'L';
							i.verificacion();
							i.cambiodepalabra();
							break;
						case ALLEGRO_KEY_M:
							cout << "M";
							i.letra = 'M';
							i.verificacion();
							i.cambiodepalabra();
							break;

						case ALLEGRO_KEY_N:
							cout << "N";
							i.letra = 'N';
							i.verificacion();
							i.cambiodepalabra();
							break;
						case ALLEGRO_KEY_O:
							cout << "O";
							i.letra = 'O';
							i.verificacion();
							i.cambiodepalabra();

							break;
						case ALLEGRO_KEY_P:
							cout << "P";
							i.letra = 'P';
							i.verificacion();
							i.cambiodepalabra();

							break;
						case ALLEGRO_KEY_Q:
							cout << "Q";
							i.letra = 'Q';
							i.verificacion();
							i.cambiodepalabra();
							break;
						case ALLEGRO_KEY_R:
							cout << "R";
							i.letra = 'R';
							i.verificacion();
							i.cambiodepalabra();
							break;
						case ALLEGRO_KEY_S:
							cout << "S";
							i.letra = 'S';
							i.verificacion();
							i.cambiodepalabra();
							break;
						case ALLEGRO_KEY_T:
							cout << "T";
							i.letra = 'T';
							i.verificacion();
							i.cambiodepalabra();
							break;
						case ALLEGRO_KEY_U:
							cout << "U";
							i.letra = 'U';
							i.verificacion();
							i.cambiodepalabra();
							break;
						case ALLEGRO_KEY_V:
							cout << "V";
							i.letra = 'V';
							i.verificacion();
							i.cambiodepalabra();

							break;
						case ALLEGRO_KEY_W:
							cout << "W";
							i.letra = 'W';
							i.verificacion();
							i.cambiodepalabra();
							break;
						case ALLEGRO_KEY_X:
							cout << "X";
							i.letra = 'X';
							i.verificacion();
							i.cambiodepalabra();
							break;
						case ALLEGRO_KEY_Y:
							cout << "Y";
							i.letra = 'Y';
							i.verificacion();
							i.cambiodepalabra();
							if (i.vidas <= 0) {
								done3 = true;
								done4 = true;
								break;
								//al_clear_to_color(al_map_rgb(0, 0, 0));

							}
							break;
						case ALLEGRO_KEY_Z:
							cout << "Z";
							i.letra = 'Z';
							i.verificacion();
							i.cambiodepalabra();
							break;

						case ALLEGRO_KEY_ESCAPE:

							i.verificacion();
							i.cambiodepalabra();
							i.vidas = 0;
							break;

						}

					}


				}
				if (i.vidas <= 0 || i.escalones == 5) {
					done3 = true;
				}

	
		donefin = false;
		while (donefin == false)
		{
			if (i.vidas <= 0) {
				i.loselose();
				i.borrarlose();

			}
			else if (i.escalones >= 5) {
				i.winwin();
				i.borrarwin();
			}
			al_wait_for_event(eventQueue, &events);

			if (events.type == ALLEGRO_EVENT_KEY_DOWN) {

				switch (events.keyboard.keycode) {
				case ALLEGRO_KEY_SPACE:
					donefin = true;
				}
			}

		}
				break;



		
					case ALLEGRO_KEY_ESCAPE:

						done3 = true;

						break;
			}

		}
	
	}
	al_clear_to_color(al_map_rgb(0, 0, 0));
	i.saliendoJuego();
}


void acciones::accionJuego2() {
	i.reincioTrivia();
	al_flip_display();
	i.borrarGame1();
	i.datosTrivia();
	j2done1 = false;
	j2done2 = false;
	while (j2done1 == false) {
		al_wait_for_event(eventQueue, &events);

		if (events.type == ALLEGRO_EVENT_KEY_DOWN) {
			switch (events.keyboard.keycode) {
			case ALLEGRO_KEY_SPACE:
				j2done1 == false;
				while (j2done1 == false && i.vidasTrivia > 0 && i.troncos != 6) {
					i.impmirGame2();
					al_flip_display();
					i.borrarGame2();
					al_wait_for_event(eventQueue, &events);

					if (events.type == ALLEGRO_EVENT_KEY_DOWN) {

						switch (events.keyboard.keycode) {
						case ALLEGRO_KEY_1:
							i.nuevapregunta(1);
							break;
						case ALLEGRO_KEY_2:
							i.nuevapregunta(2);


							break;

						case ALLEGRO_KEY_ESCAPE:
							j2done1 = true;
							j2done2 = true;
							i.vidasTrivia = 0;


							break;
						}

					}


				}
				if (i.vidasTrivia <= 0 || i.troncos == 6) {
					j2done1 = true;
					j2done2 = true;
				}
				donefin2 = false;
				while (donefin2 == false)
				{
					if (i.vidasTrivia <= 0) {
						i.loselose();
						i.borrarlose();
					}
					else if (i.troncos >= 5) {
						i.winwin();
						i.borrarwin();

					}

					al_wait_for_event(eventQueue, &events);

					if (events.type == ALLEGRO_EVENT_KEY_DOWN) {

						switch (events.keyboard.keycode) {
						case ALLEGRO_KEY_SPACE:
							donefin2 = true;
						}
					}

					
				}
				break;

			case ALLEGRO_KEY_ESCAPE:

				j2done1 = true;

				break;
			}
		}
	}
	
	
		al_clear_to_color(al_map_rgb(0, 0, 0));
		i.saliendoJuego();

	
}