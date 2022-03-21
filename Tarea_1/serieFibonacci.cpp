//Saúl Hernández - 21310395
//20/ Marzo / 2021


#include <iostream>

using namespace std;

int main() {
	//Variables
	int cantidadSerieFibonacci, nuevoResultado = 1, numeroActual = 1, numeroAnterior = 0;

	//Recolección de información para la serie
	cout << "////////////////////Fibonacci////////////////////\n";
	cout << "Cuantos numeros quieres de la serie de Fibonacci? "; cin >> cantidadSerieFibonacci;
	cout << "/////////////////////////////////////////////////\n";

	for (int i = 1; i < cantidadSerieFibonacci; i++) {

		//Solamente se muesra el 1 una vez para completar la serie
		if (i == 1)
			cout << "1 ";

		//El nuevo resultado se lo da la suma del numero actual mas el anterior
		nuevoResultado = numeroActual + numeroAnterior;

		cout << nuevoResultado << " ";

		//Los papeles cambian, pues el numero actual pasa a ser el anterior y el resultado a se el actual
		numeroAnterior = numeroActual;
		numeroActual = nuevoResultado;
	}

	cout << "\n";
	cout << "////////////////Fin del programa/////////////////\n";
	return 0;
}