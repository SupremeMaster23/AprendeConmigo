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
	i.borrarJuego1();
	while (done3 == false) {
    
	i.entry1 = true;
	i.imprimirJuego1();
	al_flip_display();
	i.borrarJuego1();

	
		al_wait_for_event(eventQueue, &events);

		if (events.type == ALLEGRO_EVENT_KEY_DOWN) {
			switch (events.keyboard.keycode) {
			case ALLEGRO_KEY_SPACE:
				while (done4 == false) {
				
					i.imprimirJuego2();
					al_flip_display();
					i.borrarJuego2();
					al_wait_for_event(eventQueue, &events);

					if (events.type == ALLEGRO_EVENT_KEY_DOWN) {
						cout << "2";
						switch (events.keyboard.keycode) {
						case ALLEGRO_KEY_ESCAPE:
							cout << "3";
							done4 = true;
							done3 = true;
							
							i.saliendoJuego();
							
					
							break;
						}
					}
				}
			
						break;
					
				
			case ALLEGRO_KEY_ESCAPE:

				done3 = true;
				i.borrarJuego1();
				i.saliendoJuego();
				break;

					}

				}
		     
		//al_destroy_bitmap(i.ahorcado1);
			}
	done3 = false;
	done4 = false;

		}
	
