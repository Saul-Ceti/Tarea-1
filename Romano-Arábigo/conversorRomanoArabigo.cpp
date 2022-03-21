#include <iostream>

using namespace std;

int menuNavegacion() {
	int _opcionMenu;

	cout << "Que quieres convertir?\n1.Arabigos a romanos\n2.Romanos a arabigos" << endl;
	cout << "Ingresa el numero de la opcion: "; cin >> _opcionMenu;

	return _opcionMenu;
}

int mainDos() {
	int I, V, X, L, C, D, M, resultadoArabigos, opcionMenu;

	opcionMenu = menuNavegacion();

	while (opcionMenu < 1 || opcionMenu > 2) {
		cout << "Opcion incorrecta, elige alguna de las que si se pueden: "; cin >> opcionMenu;
	}


	if (opcionMenu == 1) {
		cout << "Funciona uno" << endl;
	}
	else {
		cout << "Funciona dos" << endl;
	}
	return 0;
}