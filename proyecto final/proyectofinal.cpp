#include <iostream>
#include <stdio.h>

using namespace std;

int volver = 0;
int opcion = 0;
void manual();
void menu();
void registro();
void registrocal();

void main() {
	locale::global(locale("spanish"));
	system("color 0A");

	cout << "Bienvenido a la agenda escolar" << endl;

	system("Pause");

    menu();

}

void menu() {
	system("cls");

	cout << "Ingrese la opcion que usted quiera" << endl;
	cout << "Manual de usuario, presione 0" << endl; 
	cout << "Ingresar los datos de alumnos, presione 1" << endl;
	cout << "Ingresar o editar califiaciones de alumnos, presione 2" << endl;
	cout << "Salir del programa, preisone 9" << endl;



	cin >> opcion;


	if (opcion == 0) {
		 manual();
	}
	else if (opcion == 1) {

		 registro();
	}
	else if (opcion == 2) {
		 registrocal();
	}
}

void manual() {
	system("cls");

	cout << "Bienvenido al manual de usuario, aqui te ayudaremos a identificar las opciones de la agenda escolar" << endl;

	cout << "¿Quieres regresar al menu?" << endl;
    cout << "1. Sí \n2. No" << endl;
	cin >> volver;

	if (volver == 1) {
		 menu();
	}
	else {
		 manual();
	}
}
void registro() {
	system("cls");

	cout << "Ingrese los siguietes datos del alumno" << endl;

	cout << "¿Quieres regresar al menu?" << endl;
	cout << "1. Sí \n2. No" << endl;
	cin >> volver;

	if (volver == 1) {
		 menu();
	}
	else {
		 registro();
	}


}
void registrocal() {
	system("cls");
	
	cout << "Ingrese o edite, la califiacion de un alumno" << endl;

	cout << "¿Quieres regresar al menu?" << endl;
	cout << "1. Sí \n2. No" << endl;
	cin >> volver;

	if (volver == 1) {
		 menu();
	}
	else {
		 registrocal();
	}

	system("pause");
}
