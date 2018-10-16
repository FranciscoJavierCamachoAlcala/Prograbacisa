#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int o;
int c;
int i = 0;

struct persona {
	int id;
	string mat;
	string nombre;
	char apellido[100];
	string correo;
	char tel[15];
	int cal1;
	int cal2;
	int cal3;
	string calle;
	int numcasa;
	string colonia;
};

persona p[5];


int volver = 0;
int opcion = 0;

void manual();

void menu();

void registrar();

void mostrarTodos();

void buscar();

void buscarmatricula();

void modificar();

void eliminar();


int main() {
	locale::global(locale("spanish"));
	system("color 0A");

	cout << "Bienvenido a la base de datos escolar" << endl;

	menu();

}

void menu() {
	system("cls");

	cout << "Men� principal de la base de datos" << endl << endl;
	cout << "Ingrese el numero de la opcion que usted quiera hacer" << endl;
	cout << "1. Registrar a un alumno \n2. Mostrar a todos los alumnos \n3. Buscar a un alumno \n4. Buscar matricula \n5. Modificar \n6. Eliminar \n9. Salir del programa" << endl;
	cout << "0. Manual de usuario" << endl;

	cout << "Opcion:";
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
		buscarmatricula();
	}
	else if (opcion == 5) {
		modificar();
	}
	else if (opcion == 6) {
		eliminar();
	}

}

void manual() {
	system("cls");

	cout << "Bienvenido al manual de usuario, aqui te ayudaremos a identificar las opciones de la Base de datos escolar" << endl;

	cout << "Bienvenido al manual de usuario, aqui te ayudaremos a usar la agenda" << endl;
	cout << "Registrar. Aqu� puedes registrar los datos de los alumnos." << endl;
	cout << "Mostrar todos. Aqu� puedes ver a los alumnos que has registrado." << endl;
	cout << "Buscar nombre. Aqu� puedes buscar un alumno con su nombre." << endl;
	cout << "Buscar matr�cula. Aqu� puedes buscar un alumno con su matr�cula." << endl;
	cout << "Modificar. Aqu� puedes modificar los datos que desees de un alumno." << endl;

	cout << "�Quieres regresar al menu?" << endl;
	cout << "1. S� \n2. No" << endl;
	cout << "opcion:";
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


	cout << "Correo electr�nico: ";
	cin >> p[c].correo;

	cout << "Tel�fono: ";
	cin >> p[c].tel;

	cout << "Direcci�n:" << endl;
	cout << "Colonia: ";
	cin >> p[c].colonia;

	cout << "Calle: " << endl;
	cin >> p[c].calle;

	cout << "N�mero: ";
	cin >> p[c].numcasa;

	cout << "Matr�cula: ";
	cin >> p[c].mat;

	cout << "Calificaci�n 1: ";
	cin >> p[c].cal1;

	cout << "Calificaci�n 2: ";
	cin >> p[c].cal2;

	cout << "Calificaci�n 3: ";
	cin >> p[c].cal3;


	c++;

	cout << "�Quieres seguir registrando alumnos?" << endl;

	cout << "1. S� \n2. No" << endl;

	cout << "Opcion:";

	cin >> volver;

	if (volver == 1) {

		registrar();

	}
	else {

		menu();

	}

}

void mostrarTodos() {

	system("cls");

	cout << "Estos son todos los alumnos registrados" << endl;

	for (int i = 0; i < c; i++) {

		cout << "Nombre y apellido: " << p[i].nombre << " " << p[i].apellido << endl;

		cout << "Correo electr�nico: " << p[i].correo << endl;

		cout << "Tel�fono: " << p[i].tel << endl;

		cout << "Direcci�n: " << p[i].colonia << " " << p[i].numcasa << " " << p[i].calle << endl;

		cout << "Matr�cula: " << p[i].mat << endl;

		cout << "Calificaciones de los parciales: " << endl;
		cout << "Parcial 1: " << p[i].cal1 << endl;

		cout << "Parcial 2: " << p[i].cal2 << endl;

		cout << "Parcial 3: " << p[i].cal3 << endl; 

		cout << "------------------------------------------------------------------" << endl;
	}

	cout << "Presione cualquier tecla para volver al menu" << endl;

	system("pause > nul");

	menu();
}

void buscar() {
	cin.ignore();

	system("cls");

	cout << "Buscador de Alumnos" << endl << endl;

	cout << "�El nombre del alumno que quiere ver? " << endl;

	string n;

	getline(cin, n);

	bool encontrado = false;
	int i = 0;
	while (i<c)
	{


		if (strcmp(n.c_str(), p[i].nombre.c_str()) == 0) {
			cout << "Lo encontr� al alumno: " << n << endl;

			cout << "Alumno: " << p[i].nombre << " " << p[i].apellido << endl;

			cout << "Correo electr�nico: " << p[i].correo << endl;

			cout << "Tel�fono: " << p[i].tel << endl;

			cout << "Direcci�n: " << p[i].colonia << " " << p[i].numcasa << " " << p[i].calle << endl;

			cout << "Matr�cula: " << p[i].mat << endl;
	
			cout << "Calificaciones: " << endl;
			cout << "Parcial 1: " << p[i].cal1 << endl;
			cout << "Parcial 2: " << p[i].cal2 << endl;
			cout << "Parcial 3: " << p[i].cal3 << endl;
			encontrado = true;
			break;
		}
		i++;
	}

	if (!encontrado) {
		cout << "No hab�a registros de algun alumno con ese id." << endl;
	}

	cout << "�Quieres seguir buscando alumnos?" << endl;

	cout << "1. S� \n2. No" << endl;

	cout << "Opcion:";

	cin >> volver;

	if (volver == 1) {

		buscar();

	}
	else {

		menu();

	}

	system("pause > nul");

	menu();
}

void buscarmatricula() {
	system("cls");
	cout << "Buscador de matricula" << endl << endl;
	cout << "�Matricula del alumno que buscas? " << endl;
	string n;
	getline(cin, n);

	bool encontrado = false;

	int i = 0;

	while (i<c)
	{

		if (strcmp(n.c_str(), p[i].mat.c_str()) == 0) {
			cout << "Lo encontr�: " << endl;

			cout << "Nombre y apellido: " << p[i].nombre << " " << p[i].apellido << endl;

			cout << "Correo electr�nico: " << p[i].correo << endl;

			cout << "Tel�fono: " << p[i].tel << endl;

			cout << "Direcci�n: " << p[i].colonia << " " << p[i].numcasa << " " << p[i].calle << endl;

			cout << "Matr�cula: " << p[i].mat << endl;

			cout << "Calificaciones: " << endl;
			cout << "Parcial 1: " << p[i].cal1 << endl;
			cout << "Parcial 2: " << p[i].cal2 << endl;
			cout << "Parcial 3: " << p[i].cal3 << endl;

			encontrado = true;
			break;
		}
		i++;
	}

	if (!encontrado) {
		cout << "No hab�a registros de algun alumno con esa matricula" << endl;
	}

	cout << "�Quieres seguir buscando alumnos?" << endl;

	cout << "1. S� \n2. No" << endl;

	cout << "Opcion:";

	cin >> volver;

	if (volver == 1) {

		buscarmatricula();

	}
	else {

		menu();

	}

	system("pause > nul");

	menu();
}

void modificar() {
	system("cls");
	cout << "Modificacion de los datos de los alumnos" << endl;
	cin.ignore();
	cout << "�Ingrese la matr�cula del alumno que busca? " << endl;
	cin >> o;

	int i = 0;
	while (i < c) {
		if (p[i].id == o) {
			cout << "Encontr� a: " << o << endl;
			cout << "Alumno: " << p[i].nombre << " " << p[i].apellido << endl;
			cout << "Correo electr�nico: " << p[i].correo << endl;
			cout << "Tel�fono: " << p[i].tel << endl;
			cout << "Direcci�n: " << p[i].colonia << " " << p[i].numcasa << " " << p[i].calle << endl;
			cout << "Matr�cula: " << p[i].mat << endl;
			cout << "Calificaciones: " << p[i].cal1 << " - " << p[i].cal2 << " - " << p[i].cal3 << endl;

			cout << "�Qu� deseas modificar?" << endl;
			cout << "1. Matr�cula \n2. Nombre \n3. Apellido \n4. Correo electr�nico \n5. Tel�fono \n6. Calificaciones \0. Nada" << endl;
			cin >> o;

			switch (o)
			{
			case 1:
				cout << "Ingresa nueva m�tricula: ";
				cin >> p[i].mat;
				break;

			case 2:
				cin.ignore();
				cout << "Ingresa nuevo nombre: ";
				getline(cin, p[i].nombre);
				break;

			case 3:
				cout << "Ingresa nuevo apellido: ";
				cin >> p[i].apellido;
				break;

			case 4:
				cout << "Ingresa nuevo correo electr�nico: ";
				cin >> p[i].correo;
				break;

			case 5:
				cout << "Ingresa nuevo tel�fono: ";
				cin >> p[i].tel;
				break;

			case 6:
				cout << "Ingrese nueva direcci�n" << endl;
				cout << "Calle: ";
				cin >> p[i].calle;
				cout << "N�mero: ";
				cin >> p[i].numcasa;
				cout << "Colonia: ";
				getline(cin, p[c].colonia);
				cout << endl;
				break;


			case 7:
				cout << "�Qu� calificaci�n quiere cambiar?";
				cout << "1. Parcial 1 \n2. Parcial 2 \n3. Parcial 3" << endl;
				int cambiarcal;
				cin >> cambiarcal;
				cout << "Ingrese nueva calificaci�n" << endl;
				if (cambiarcal == 1) {
					cin >> p[i].cal1;
				}
				else if (cambiarcal == 2) {
					cin >> p[i].cal2;
				}
				else if (cambiarcal == 3) {
					cin >> p[i].cal3;
				}
				break;

			default:
				break;
			}


			if (o != 0) {
				cout << "Registro modificado: " << endl;
				cout << "Alumno: " << p[i].nombre << " " << p[i].apellido << endl;
				cout << "Correo electr�nico: " << p[i].correo << endl;
				cout << "Tel�fono: " << p[i].tel << endl;
				cout << "Matr�cula: " << p[i].mat << endl;
				cout << "Calificaciones: " << p[i].cal1 << " - " << p[i].cal2 << " - " << p[i].cal3 << endl;

				cout << "�Qu� deseas modificar?" << endl;
				cout << "1. Matr�cula \n2. Nombre \n3. Apellido \n4. Correo electr�nico \n5. Tel�fono \n6. Calificaciones \0. Nada" << endl;
			}
			else {
				cout << "No modificaste nada." << endl;
			}

			break;
		}
		i++;
	}
	cout << "�Quieres seguir modificando alumnos?" << endl;

	cout << "1. S� \n2. No" << endl;

	cout << "Opcion:";

	cin >> volver;

	if (volver == 1) {

		modificar();

	}
	else {

		menu();

	}

	system("pause > nul");
	menu();
}

void eliminar() {
	cout << "�Qu� matr�cula del alumno que deseas eliminar?" << endl;

	cin >> o;

	int i = 0;

	while (i < c)
	{
		if (p[i].id == o)
		{
			cout << "1. Eliminar \n2. Cancelar" << endl;
			cin >> o;
			if (o == 1 && c != 0)
			{
				for (int j = i; j < c; j++)
				{
					p[j] = p[j + 1];
				}
				c--;
			}
			break;
		}
		i++;
	}
	if (i == c)
		cout << "No se encontraron registros." << endl;

}