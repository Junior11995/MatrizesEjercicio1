/*
* 
* Ejercicio 1: Hacer un programa para rellenar una matriz pidiendo al usuario 
- el número de filas y columnas, Posteriormente mostrar la matriz en pantalla.

*/
#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {

	int numero[100][100], filas, columnas;

	cout << "\nDigite el numero de filas: "; 
	cin >> filas;
	cout << "\nDigite el numero de columnas: ";
	cin >> columnas;
	cout << endl;

	for (int i = 0; i < filas; i++) {

		for (int j = 0; j < columnas; j++) {
			cout << "Digite un numero " << " [ " << i << " ][ "<<j<<" ]: ";
			cin >> numero[i][j];
		}
	}

	for (int i = 0; i < filas; i++) {

		for (int j = 0; j < columnas; j++) {
			cout << numero[i][j];
		}
		cout << "\n";
	}

	system("pause");
	return 0;
}