#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int o;
int c;

struct persona {
	int id;
	string nombre;
	char apellido[100];
	string correo;
	char tel[15];
	char mat[8];
};

persona p[5];


int volver = 0;
int opcion = 0;

void manual();

void menu();

void registrar();

void mostrarTodos();

void buscar();

void buscarNombre();

void modificar();

int main() {
	locale::global(locale("spanish"));
	system("color 0A");

	cout << "Bienvenido a la base de datos escolar" << endl;

	system("Pause");

	menu();

}

void menu() {
	system("cls");

	cout << "Menú principal" << endl << endl;
	cout << "Ingrese la opcion que usted quiera hacer" << endl;

	cout << "Qué quieres hacer" << endl;
	cout << "1. Registrar a un alumno \n2. Mostrar a todos los alumnos \n3. Buscar a un alumno \n4. Buscar por nombre \n9. Salir del programa" << endl;
	cout << "0. Manual de usuario" << endl;


	cin >> opcion;


	if (opcion == 0) {
		manual();
	}
	else if (opcion == 1) {

		registrar();
	}
	else if (opcion == 2) {
		mostrarTodos();
	}
	else if (opcion == 3) {
		buscar();
	}
	else if (opcion == 4) {
		buscarNombre();
	}
}

void manual() {
	system("cls");

	cout << "Bienvenido al manual de usuario, aqui te ayudaremos a identificar las opciones de la Base de datos escolar" << endl;

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
void registrar() {
	system("cls");

	cout << "Ingrese los siguietes datos del alumno" << endl;
	p[c].id = c;

	cout << "Apellido: ";
	cin >> p[c].apellido;

	cin.ignore();

	cout << "Nombre: ";
	getline(cin, p[c].nombre);

	cout << "Correo electrónico: ";
	cin >> p[c].correo;

	cout << "Teléfono: ";
	cin >> p[c].tel;

	cout << "Matrícula: ";
	cin >> p[c].mat;


	c++;

	cout << "¿Quieres regresar al menu?" << endl;
	cout << "1. Sí \n2. No" << endl;
	cin >> volver;

	if (volver == 1) {
		menu();
	}
	else {
		registrar();
	}

}

void mostrarTodos() {
	system("cls");
	cout << "Estos son todos los alumnos registrados" << endl;
	for (int i = 0; i < c; i++) {
		cout << "Nombre y apellido: " << p[i].nombre << " " << p[i].apellido << endl;
		cout << "Correo electrónico: " << p[i].correo << endl;
		cout << "Teléfono: " << p[i].tel << endl;
		cout << "Matrícula: " << p[i].mat << endl;
	}

	system("pause > nul");

	menu();
}
void buscar() {
	system("cls");
	cout << "Buscador de Alumnos" << endl << endl;
	cout << "¿Qué id quiere ver? " << endl;
	cin >> o;

	bool encontrado = false;
	for (int i = 0; i < c; i++)
	{
		if (p[i].id == o) {
			cout << "Encontré al alumno:" << endl;
			cout << "Nombre y apellido: " << p[i].nombre << " " << p[i].apellido << endl;
			cout << "Correo electrónico: " << p[i].correo << endl;
			cout << "Teléfono: " << p[i].tel << endl;
			cout << "Matrícula: " << p[i].mat << endl;
			encontrado = true;
			break;
		}
	}

	if (!encontrado) {
		cout << "No había registros de algun alumno con ese id." << endl;
	}

	system("pause > nul");

	menu();
}

void buscarNombre() {
	cin.ignore();
	system("cls");
	cout << "Buscador" << endl << endl;
	cout << "¿Nombre del alumno que buscas? " << endl;
	string n;
	getline(cin, n);

	bool encontrado = false;
	for (int i = 0; i < c; i++)
	{


		if (strcmp(n.c_str(), p[i].nombre.c_str()) == 0) {
			cout << "Lo encontré: " << endl;
			cout << "Nombre y apellido: " << p[i].nombre << " " << p[i].apellido << endl;
			cout << "Correo electrónico: " << p[i].correo << endl;
			cout << "Teléfono: " << p[i].tel << endl;
			cout << "Matrícula: " << p[i].mat << endl;
			encontrado = true;
			break;
		}
	}

	if (!encontrado) {
		cout << "No había registros de algun alumno con ese nombre" << endl;
	}

	system("pause > nul");

	menu();
}