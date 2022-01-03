/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Ejercicio buscar telefono
Autores: Pablo Yanez, Ariel Pozo, Jhoel Chicaiza,
Fecha de creacion: 28/12/2021
Fecha de modificacion: 02/01/2022
7167 ESTRUCTURA DE DATOS
*/


#include <cctype>
#include <windows.h >
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
	int x, opc;
	fstream archivo;
	string cadena, linea, linea2, linea3, linea4;
	int res = 0;
	bool continuar = true;

	system("cls");
	cout << "1. Buscar por nombre : " << endl;
	cout << "2. Buscar por numero : " << endl;
	cout << "Elija una opcion : " << endl;
	fflush(stdin);
	cin >> opc;
	switch (opc) {
	case 1:
		cout << " Ingrese el nombre : " << endl;
		cin >> cadena;

		if (!archivo.is_open()) {
			archivo.open("persona.txt", ios::in);


		}
		while (getline(archivo, linea)) {
			if (linea.find(cadena) != string::npos) {
				cout << linea << endl;
				getline(archivo, linea2);
				cout << linea2 << endl;
				res = 1;
			}
		}
		if (res == 0) {
			cout << cadena << " no encontrado " << endl;

		}
		system("pause");
		break;
	case 2:
		cout << " Ingrese el numero : " << endl;
		cin >> cadena;

		if (!archivo.is_open()) {
			archivo.open("persona.txt", ios::in);


		}
		while (getline(archivo, linea)) {
			if (linea.find(cadena) != string::npos) {
				cout << linea << endl;
				getline(archivo, linea2);
				cout << linea2 << endl;
				res = 1;
			}
		}
		if (res == 0) {
			cout << cadena << " no encontrado " << endl;

		}
		break;
	case 3:
		continuar = false;
		break;
	}
	return 0;
}
