#include<iostream>
#include<stdio.h>
#include<string>
#include<windows.h> 
#include<conio.h>
#include<fstream>

using namespace std;

int opcion, separador, decision, modificar, eliminar, eliminacion,
editador, info, califiacion, direccion;
char borrar, editar;
int i = 0;
int contadoralumnos;
float pts1, pts2, pts3;
bool salir = false;

struct calificaciones
{
	float calif1 = 0.00;
	float calif2 = 0.00;
	float calif3 = 0.00;
	float promedio;
}calif[100];
struct direccion
{
	string calle;
	char numero[4];
	string colonia;
}adress[100];
struct conntacto
{
	string nombre;
	string apellido;
	string mail;
	char telefono[12];
	char matricula[7];
	struct calificaciones calif;
	struct direccion adress;
}alumno[100];

void menu();
void pedir_nombre();
void pedir_apellido();
void pedir_mail();
void pedir_telefono();
void pedir_matricula();
void pedir_calif1();
void pedir_calif2();
void pedir_calif3();
void pedir_calle();
void pedir_numero();
void pedir_colonia();
void mostrar_alumno();
void mostrar_lista();
void promedio();

void main()
{
	locale::global(locale("spanish"));
	ifstream nancy;
	nancy.open("proyectofinal.txt", ios::binary);
	nancy.read((char*)&i, sizeof(i));
	if (nancy.is_open()) {

		while (!nancy.eof()) {
			nancy.read((char*)&i, sizeof(i));
			cout << "Lectura de Archivo:" << endl;

			cout << "El archivo se abrio correctamente." << endl;

			cout << "Presione cualquier tecla para entrar a Menu." << endl;
		}
	}
	else {
		cout << "Lectura de Archivo:" << endl;

		cout << "El archivo no existente o hay problemas para abrirlo." << endl;

		cout << "Presione cualquier tecla para entrar a Menu." << endl;

	}
	nancy.close();

	system("pause>nul");

	do
	{
		system("cls");
		menu();
		opcion = _getch();

		switch (opcion)
		{
		case '1':
		{
			system("cls");

			if (i == 0)
			{
				cout << "No existen datos en la lista de alumnos" << endl;

				system("pause");
			}
			if (i != 0)
			{
				cout << "Interactuando con la lista de alumnos" << endl;

				cout << "1: Modificar" << endl;

				cout << "2: Eliminar" << endl;

				cout << "3: Ver" << endl;

				cout << "Seleccione la opcion que desee realizar:";
				cin >> decision;
				cin.ignore();

				switch (decision)
				{
				case 1:
				{
					system("cls");
					cout << "Lista De Alumnos";

					mostrar_lista();

					cout << "Escriba el numero de alumno que desea modificar:";
					cin >> modificar;
					cin.ignore();
					i = modificar - 1;

					system("cls");
					mostrar_alumno();
					system("pause");

					system("cls");

					cout << "Usted se encuentra en el menu de modificacion de informacion" << endl;

					cout << "1: Informacion Del Alumno " << endl;

					cout << "2: Calificaciones Del Alumno" << endl;

					cout << "3: Direccion Del Alumno " << endl;

					cout << "4: Volver al menu" << endl;

					cout << "¿Que dato desea modificar?:";
					cin >> editador;
					cin.ignore();


					switch (editador)
					{
					case 1:
					{
						system("cls");
						cout << "Informacion Del Alumno" << endl;

						cout << "1: Nombre \n2: Apellido\n3: Correo\n4: Telefono\n5: Matricula"<< endl;
						cout << "¿Que informacion desea modificar?:";
						cin >> info;
						cin.ignore();

						switch (info)
						{
						case 1:
						{
							system("cls");
							cout << "Usted de encuentra Modificando el Nombre " << endl;
							cout << "Nombre: ";
							pedir_nombre();
							break;
						}
						case 2:
						{
							system("cls");
							cout << "Usted de encuentra Modificando el Apellido " << endl;
							cout << "Apellido: ";
							pedir_apellido();
							break;
						}
						case 3:
						{
							system("cls");
							cout << "Usted de encuentra Modificando el Correo " << endl;
							cout << "Nuevo Correo: ";
							pedir_mail();
							break;
						}
						case 4:
						{
							system("cls");
							cout << "Usted de encuentra Modificando el Telefono " << endl;
							cout << "Nuevo Telefono: ";
							pedir_telefono();
							break;
						}
						case 5:
						{
							system("cls");
							cout << "Usted de encuentra Modificando la Matricula " << endl;
							cout << "Nueva Matricula: ";
							pedir_matricula();
							break;
						}
						}

						break;
					}
					case 2:
					{
						system("cls");

						cout << "Calificaciones Del Alumno" << endl;

						cout << "1: Calificacion 1";

						cout << "2: Calificacion 2";

						cout << "3: Calificacion 3";

						cout << "¿Que calificacion desea modificar?:";
						cin >> califiacion;
						cin.ignore();

						switch (califiacion)
						{
						case 1:
						{
							system("cls");
							cout << "Usted de encuentra Modificando la Califiacion 1" << endl;
							cout << "Nueva Calificacion 1: ";
							pedir_calif1();

							promedio();
							break;
						}
						case 2:
						{
							system("cls");
							cout << "Usted de encuentra Modificando la Califiacion 2" << endl;
							cout << "Nueva Calificacion 2: ";
							pedir_calif2();

							promedio();
							break;
						}
						case 3:
						{
							system("cls");
							cout << "Usted de encuentra Modificando la Califiacion 3" << endl;
							cout << "Nueva Calificacion 3: ";
							pedir_calif3();

							promedio();
							break;
						}
						}
						break;
					}
					case 3:
					{
						system("cls");

						cout << "Direccion Del Alumno" << endl;

						cout << "1: Calle";
						
						cout << "2: Numero";
						
						cout << "3: Colonia";

						cout << "¿Que dato desea modificar?:";
						cin >> direccion;
						cin.ignore();

						switch (direccion)
						{
						case 1:
						{
							system("cls");
							cout << "Usted de encuentra Modificando la Calle" << endl;
							cout << "Nueva Calle:";
							pedir_calle();
							break;
						}
						case 2:
						{
							system("cls");
							cout << "Usted de encuentra Modificando el Numero" << endl;
							cout << "Nuevo Numero:";
							pedir_numero();
							break;
						}
						case 3:
						{
							system("cls");
							cout << "Usted de encuentra Modificando la Colonia" << endl;
							cout << "Nueva Colonia:";
							pedir_colonia();
							break;
						}
						}

						break;
					}
					}
					i = modificar + 1;
					system("pause");
					break;
				}
				case 2:
				{

					system("cls");

					mostrar_lista();

					cout << "Escriba el numero de alumno que desea eliminar:";

					cin >> eliminar;
					cin.ignore();
					i = eliminar - 1;

					system("cls");
					cout << "¿Seguro que desea eliminar el contacto seleccionado?:" << endl;
					cout << "1: Si\n 2: No" << endl;
					cout << "Numero seleccionado:";
					cin >> borrar;
					cin.ignore();

					system("cls");
					switch (borrar)
					{
					case '1':
					{
						for (eliminacion = i; eliminacion < 100; eliminacion++)
						{
							alumno[eliminacion] = alumno[eliminacion + 1];

						}
						contadoralumnos--;
						break;
					}
					case '2':
					{
						break;
					}
					}

					system("pause");
				}
				case 3:
				{
					system("cls");
					cout << "Usted se encuentra viendo la lista de alumnos" << endl;
					mostrar_lista();
					system("pause");
					break;
				}
				}

			}
			break;
		}
		case '2':
		{
			system("cls");

			cout << "Usted se encuentra registrando un Nuevo Alumno" << endl;
			
			cout << "Nombre:";
			pedir_nombre();
			cout << endl;

			cout << "Apellido:";
			pedir_apellido();
			cout << endl;

			cout << "Correo electrónico: ";
			pedir_mail();
			cout << endl;

			cout << "Telefono:";
			pedir_telefono();
			cout << endl;

			cout << "Matricula:";
			pedir_matricula();
			cout << endl;

			cout << "Ingrese La Calificacion del Alumno" << endl;

			cout << "Calificacion Parcial 1:";
			pedir_calif1();
			cout << endl;

			cout << "Calificacion Parcial 2:";
			pedir_calif2();
			cout << endl;

			cout << "Calificacion Parcial 3:";
			pedir_calif3();
			cout << endl;

			cout << "Ingrese La Direccion del Alumno" << endl;

			cout << "Calle:";
			pedir_calle();
			cout << endl;
			
			cout << "Numero:";
			pedir_numero();
			cout << endl;

			cout << "Colonia:";
			pedir_colonia();
			cout << endl;

			promedio();

			contadoralumnos = i;

			i++;
			system("pause");
			break;
		}
		case 27:
		 {
		    
				

					ofstream nancy;


					nancy.open("proyectifinal.txt", ios::binary);

					nancy.write((char*)&i, sizeof(i));

					nancy.close();
				
			
			salir = true;
			break;
		 }
		}
	}
	while (salir == false);
}

void menu()
{
	cout << "Lista de alumnos " << endl;

	cout << "1: Interactuar con lista de alumnos" << endl;

	cout << "2: Registrar Nuevo alumno" << endl;

	cout << "Esc: Guardar y Salir" << endl;

	cout << "Escriba el numero de la opcion que desee realizar:";
}

void pedir_nombre()
{
	getline(cin, alumno[i].nombre);

}
void pedir_apellido()
{
	getline(cin, alumno[i].apellido);
}
void pedir_mail()
{
	bool confcorreo = false;
	do
	{
		getline(cin, alumno[i].mail);
		int arroba = 0;
		int c = alumno[i].mail.size();
		for (int j = 0; j < c; j++) {
			if (alumno[i].mail[j] == '@') {
				arroba++;
			}
		}
		if (arroba == 1) {
			confcorreo = true;
		}
		for (int k = 0; k < c; k++) {
			if (c - k == 4) {
				if (alumno[i].mail[k] != '.') {
					confcorreo = false;
				}
				if (alumno[i].mail[k + 1] != 'c') {
					confcorreo = false;
				}
				if (alumno[i].mail[k + 2] != 'o') {
					confcorreo = false;
				}
				if (alumno[i].mail[k + 3] != 'm') {
					confcorreo = false;
				}
			}


		}

		if (i != 0) {
			for (int n = 0; n < i; n++) {
				if (alumno[i].mail == alumno[n].mail) {
					confcorreo = false;
					break;
				}
			}
		}

		if (confcorreo == false) {
			cout << "Inserte un correo válido." << endl;
			system("pause > nul");
			cout << "Correo electrónico:";

		}
		
	} while (confcorreo == false);
}
void pedir_telefono()
{
	bool conftel = false;
	bool conftel2 = false;
	bool confftel = false;
	do
	{
		
		cin >> alumno[i].telefono;

		int val = 0;

		int l = strlen(alumno[i].telefono);

		for (int j = 0; j <= 12; j++) {
			if (isdigit(alumno[i].telefono[j])) {
				val++;
			}

			else
			{
				conftel = false;
				break;
			}

		}

		if (l == val) {
			conftel = true;
		}


		if (l > 7 && l < 13) {
			conftel2 = true;
		}

		if (conftel2 == true && conftel == true) {
			confftel = true;
		}

		else
		{
			confftel = false;
		}


		if (i != 0) {
			for (int k = 0; k < i; k++) {
				if (alumno[i].telefono == alumno[k].telefono) {
					confftel = false;
					break;
				}
			}

		}

		if (confftel == false) {
			cout << "Inserte un teléfono válido. " << endl;
			system("pause > nul");
			cout << "Telefono:";
		}
		
	} while (confftel == false);
}
void pedir_matricula()
{
	cin >> alumno[i].matricula;
}
void pedir_calif1()
{
	bool confparcial = false;

	do
	{
		cin >> alumno[i].calif.calif1;
		cin.ignore();

		if (alumno[i].calif.calif1 > -1 && alumno[i].calif.calif1 < 101) {
			confparcial = true;
		}

		if (confparcial == false) {
			cout << "Inserte una calificación válida. " << endl;
			system("pause > nul");
			cout << "Calificacion Parcial 1:";

		}
	} while (confparcial == false);

}
void pedir_calif2()
{
	bool confparcial = false;

	do
	{
		cin >> alumno[i].calif.calif2;
		cin.ignore();

		if (alumno[i].calif.calif2 > -1 && alumno[i].calif.calif2 < 101) {
			confparcial = true;
		}

		if (confparcial == false) {
			cout << "Inserte una calificación válida. " << endl;
			system("pause > nul");
			cout << "Calificacion Parcial 2:";

		}
	} while (confparcial == false);

}
void pedir_calif3()
{
	bool confparcial = false;

	do
	{
		cin >> alumno[i].calif.calif3;
		cin.ignore();

		if (alumno[i].calif.calif3 > -1 && alumno[i].calif.calif3 < 101) {
			confparcial = true;
		}

		if (confparcial == false) {
			cout << "Inserte una calificación válida. " << endl;
			system("pause > nul");
			cout << "Calificacion Parcial 3:";

		}
	} while (confparcial == false);

}
void pedir_calle()
{
	getline(cin, alumno[i].adress.calle);
}
void pedir_numero()
{
	cin.getline(alumno[i].adress.numero, 4);
}
void pedir_colonia()
{
	getline(cin, alumno[i].adress.colonia);
}
void mostrar_alumno()
{
	cout << "Alumno numero: " << i + 1 << endl;
	
	cout << "Alumno: " << alumno[i].nombre << " " << alumno[i].apellido << endl;

	cout << "Correo: " << alumno[i].mail << endl;

	cout << "Telefono: " << alumno[i].telefono << endl;
	
	cout << "Matricula: " << alumno[i].matricula << endl;
	
	cout << "Calificacion Parcial 1: " << alumno[i].calif.calif1 << endl;
	
	cout << "Calificacion Parcial 2: " << alumno[i].calif.calif2 << endl;
	
	cout << "Calificacion Parcial 3: " << alumno[i].calif.calif3 << endl;
	
    cout << "Promedio Final: " << alumno[i].calif.promedio << endl;
		
	cout << "Direccion: " << alumno[i].adress.calle << " " << alumno[i].adress.numero << " colonia " << alumno[i].adress.colonia << endl;

}
void mostrar_lista()
{
	for (i = 0; i <= contadoralumnos; i++)
	{
		mostrar_alumno();

		cout << "------------------------------------------------------" << endl;
	}
}
void promedio()
{
	pts1 = ((30 * alumno[i].calif.calif1) / 100);
	pts2 = ((45 * alumno[i].calif.calif2) / 100);
	pts3 = ((25 * alumno[i].calif.calif3) / 100);

	alumno[i].calif.promedio = pts1 + pts2 + pts3;
}