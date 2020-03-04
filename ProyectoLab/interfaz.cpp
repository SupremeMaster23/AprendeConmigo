#include"interfaz.h"
#include <allegro5/allegro.h>
#include<allegro5/allegro_font.h>
#include<allegro5/allegro_ttf.h>
#include<allegro5/allegro_image.h>

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
	ahorcado = al_load_bitmap("j1.jfif");
	al_draw_bitmap(ahorcado, 0, 0, NULL);

}

void interfaz::imprimirJuego2() {
	al_clear_to_color(al_map_rgb(0, 0, 0));
	ahorcado1 = al_load_bitmap("j1.2.jfif");
	al_draw_bitmap(ahorcado1, 0, 0, NULL);

}

void interfaz::borrarJuego1() {
	al_destroy_bitmap(ahorcado);
}
void interfaz::borrarJuego2() {
	al_destroy_bitmap(ahorcado1);
}

