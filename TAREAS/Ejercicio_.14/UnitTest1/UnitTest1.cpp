#include "pch.h"
#include "CppUnitTest.h"
#include <fstream>
#include <iostream>
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
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
		}
	};
}
