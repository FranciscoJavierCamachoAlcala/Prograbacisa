// 8206.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	cout << "Nombre: " << endl;

	char nombre[20];

	cin >> nombre;

	cout << "Apellido: " << endl;

	char Apellido[20];

	cin >> Apellido;

	cout << "edad: " << endl;

	int edad;
	cin >> edad;

	cout << "Telefono: " << endl;

	char Telefono[20];

	cin >> Telefono;

	cout << "Nombre: " << nombre << Apellido
		 << " edad: " << edad
		 << " Telefono:" << "+52" << Telefono;


	system("pause");

	return 0;
}