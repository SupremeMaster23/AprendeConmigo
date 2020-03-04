#include "interfaz.h"
#include"acciones.h"
int main() {
	interfaz i;
	acciones a;
	i.imprimirMenu();
	while (a.quit== false) {
		a.accionPrincipal();
	}
}