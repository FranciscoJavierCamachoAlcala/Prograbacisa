#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;

int opcion = 0;
int compu = 0;
int nivel = 0;
int volver = 0;
int r = 0;
int Tijeras = 0;
int Papel = 0;
int Piedra = 0;
int PapelC = 0;
int PiedraC = 0;
int TijerasC = 0;
int PapelCo = 0;
int PiedraCo = 0;
int TijerasCo = 0;
int Papelu = 0;
int Piedrau = 0;
int Tijerasu = 0;
void juego();

void main() {
	locale::global(locale("spanish"));
	system("color 0A");
	cout << "Bienvenido Al Fantastico Juego De Javier y Nancy" << endl;
	system("Pause");
	juego();

}


void juego() {
	system("cls");
	cout << "Escoja la dificultad" << endl;
	cout << "Facil ponga 10" << endl;
	cout << "Normal ponga 11" << endl;
	cout << "Dificul ponga 12" << endl;
	cin >> nivel;

	switch (nivel) {
	case 10: {

		cout << "Eliga entre Papel, Piedra o Tijeras" << endl;
		cout << "Papel ponga 1" << endl;
		cout << "Piedra ponga 2" << endl;
		cout << "Tijeras ponga 3" << endl;

		cin >> opcion;

		switch (opcion) {
		case 1:

			cout << "Jugador: Papel" << endl;

			srand(time(NULL));
			r = rand() % 100;
			PapelC;
			PiedraC;
			TijerasC;
			Papel = 1;
			Piedra = 0;
			Tijeras = 2;

			if (r < 15) {
				PapelC = 1;
			}
			else if (r < 85) {
				PiedraC = 0;
			}
			else if (r < 100) {
				TijerasC = 2;
			}

			if (Papel < TijerasC) {
				cout << "Computadora: Tijeras" << endl;
				cout << "Perdiste, mas suerte a la proxima" << endl;
			}
			else if (Papel == PapelC) {
				cout << "Computadora: Papel" << endl;
				cout << "Empate, mas suerte a la proxima" << endl;
			}
			else if (Papel > PiedraC) {
				cout << "Computadora: Piedra" << endl;
				cout << "Ganaste Felicididades, eres el nuevo rey del Papel:D" << endl;
			}

			break;

		case 2:

			cout << "Jugador: Piedra" << endl;

			srand(time(NULL));
			r = rand() % 100;
			Papel = 2;
			Piedra = 1;
			Tijeras = 0;
			if (r < 15) {
				PiedraC = 1;
			}
			else if (r < 85) {
				TijerasC = 0;
			}
			else if (r < 100) {
				PapelC = 2;
			}

			if (Piedra < PapelC) {
				cout << "Computadora: Papel" << endl;
				cout << "Perdiste, mas suerte a la proxima" << endl;
			}
			else if (Piedra == PiedraC) {
				cout << "Computadora: Piedra" << endl;
				cout << "Empate, mas suerte a la proxima" << endl;
			}
			else if (Piedra > TijerasC) {
				cout << "Computadora: Piedra" << endl;
				cout << "Ganaste Felicididades, eres el nuevo rey de la Piedra:D" << endl;
			}
			break;

		case 3:

			cout << "Jugador: Tijeras" << endl;

			srand(time(NULL));
			r = rand() % 100;
			Papel = 0;
			Piedra = 2;
			Tijeras = 1;

			if (r < 15) {
				TijerasC = 1;
			}
			else if (r < 85) {
				PapelC = 0;
			}
			else if (r < 100) {
				PiedraC = 2;
			}

			if (Tijeras < PiedraC) {
				cout << "Computadora: Piedra" << endl;
				cout << "Perdiste, mas suerte a la proxima" << endl;
			}
			else if (Tijeras == TijerasC) {
				cout << "Computadora: Tijeras " << endl;
				cout << "Empate, mas suerte a la proxima" << endl;
			}
			else if (Tijeras > PapelC) {
				cout << "Computadora: Papel" << endl;
				cout << "Ganaste Felicididades, eres el nuevo rey de las Tijeras:D" << endl;
			}
			break;
		}
		break;
	}

	case 11: {

		cout << "Eliga entre Papel, Piedra o Tijeras" << endl;
		cout << "Papel ponga 4" << endl;
		cout << "Piedra ponga 5" << endl;
		cout << "Tijeras ponga 6" << endl;

		cin >> opcion;

		switch (opcion) {
		case 4:

			cout << "Jugador: Papel" << endl;

			srand(time(NULL));
			r = rand() % 100;
			PapelC;
			PiedraC;
			TijerasC;
			Papel = 1;
			Piedra = 0;
			Tijeras = 2;

			if (r < 33) {
				PapelC = 1;
			}
			else if (r < 66) {
				PiedraC = 0;
			}
			else if (r < 100) {
				TijerasC = 2;
			}

			if (Papel < TijerasC) {
				cout << "Computadora: Tijeras" << endl;
				cout << "Perdiste, mas suerte a la proxima" << endl;
			}
			else if (Papel == PapelC) {
				cout << "Computadora: Papel" << endl;
				cout << "Empate, mas suerte a la proxima" << endl;
			}
			else if (Papel > PiedraC) {
				cout << "Computadora: Piedra" << endl;
				cout << "Ganaste Felicididades, eres el nuevo rey del Papel:D" << endl;
			}

			break;

		case 5:

			cout << "Jugador: Piedra" << endl;

			srand(time(NULL));
			r = rand() % 100;
			Papel = 2;
			Piedra = 1;
			Tijeras = 0;
			if (r < 33) {
				PiedraC = 1;
			}
			else if (r < 66) {
				TijerasC = 0;
			}
			else if (r < 100) {
				PapelC = 2;
			}

			if (Piedra < PapelC) {
				cout << "Computadora: Papel" << endl;
				cout << "Perdiste, mas suerte a la proxima" << endl;
			}
			else if (Piedra == PiedraC) {
				cout << "Computadora: Piedra" << endl;
				cout << "Empate, mas suerte a la proxima" << endl;
			}
			else if (Piedra > TijerasC) {
				cout << "Computadora: Piedra" << endl;
				cout << "Ganaste Felicididades, eres el nuevo rey de la Piedra:D" << endl;
			}
			break;

		case 6:

			cout << "Jugador: Tijeras" << endl;

			srand(time(NULL));
			r = rand() % 100;
			Papel = 0;
			Piedra = 2;
			Tijeras = 1;

			if (r < 33) {
				TijerasC = 1;
			}
			else if (r < 66) {
				PapelC = 0;
			}
			else if (r < 100) {
				PiedraC = 2;
			}

			if (Tijeras < PiedraC) {
				cout << "Computadora: Piedra" << endl;
				cout << "Perdiste, mas suerte a la proxima" << endl;
			}
			else if (Tijeras == TijerasC) {
				cout << "Computadora: Tijeras " << endl;
				cout << "Empate, mas suerte a la proxima" << endl;
			}
			else if (Tijeras > PapelC) {
				cout << "Computadora: Papel" << endl;
				cout << "Ganaste Felicididades, eres el nuevo rey de las Tijeras:D" << endl;
			}
			break;
		}
		break;
	}

	case 12: {

		cout << "Eliga entre Papel, Piedra o Tijeras" << endl;
		cout << "Papel ponga 7" << endl;
		cout << "Piedra ponga 8" << endl;
		cout << "Tijeras ponga 9" << endl;

		cin >> opcion;

		switch (opcion) {
		case 7:

			cout << "Jugador: Papel" << endl;

			srand(time(NULL));
			r = rand() % 100;
			PapelC;
			PiedraC;
			TijerasC;
			Papel = 1;
			Piedra = 0;
			Tijeras = 2;

			if (r < 15) {
				PapelC = 1;
			}
			else if (r < 30) {
				PiedraC = 0;
			}
			else if (r < 100) {
				TijerasC = 2;
			}

			if (Papel < TijerasC) {
				cout << "Computadora: Tijeras" << endl;
				cout << "Perdiste, mas suerte a la proxima" << endl;
			}
			else if (Papel == PapelC) {
				cout << "Computadora: Papel" << endl;
				cout << "Empate, mas suerte a la proxima" << endl;
			}
			else if (Papel > PiedraC) {
				cout << "Computadora: Piedra" << endl;
				cout << "Ganaste Felicididades, eres el nuevo rey del Papel:D" << endl;
			}

			break;

		case 8:

			cout << "Jugador: Piedra" << endl;

			srand(time(NULL));
			r = rand() % 100;
			Papel = 2;
			Piedra = 1;
			Tijeras = 0;
			if (r < 15) {
				PiedraC = 1;
			}
			else if (r < 30) {
				TijerasC = 0;
			}
			else if (r < 100) {
				PapelC = 2;
			}

			if (Piedra < PapelC) {
				cout << "Computadora: Papel" << endl;
				cout << "Perdiste, mas suerte a la proxima" << endl;
			}
			else if (Piedra == PiedraC) {
				cout << "Computadora: Piedra" << endl;
				cout << "Empate, mas suerte a la proxima" << endl;
			}
			else if (Piedra > TijerasC) {
				cout << "Computadora: Piedra" << endl;
				cout << "Ganaste Felicididades, eres el nuevo rey de la Piedra:D" << endl;
			}
			break;

		case 9:

			cout << "Jugador: Tijeras" << endl;

			srand(time(NULL));
			r = rand() % 100;
			Papel = 0;
			Piedra = 2;
			Tijeras = 1;

			if (r < 15) {
				TijerasC = 1;
			}
			else if (r < 30) {
				PapelC = 0;
			}
			else if (r < 100) {
				PiedraC = 2;
			}

			if (Tijeras < PiedraC) {
				cout << "Computadora: Piedra" << endl;
				cout << "Perdiste, mas suerte a la proxima" << endl;
			}
			else if (Tijeras == TijerasC) {
				cout << "Computadora: Tijeras " << endl;
				cout << "Empate, mas suerte a la proxima" << endl;
			}
			else if (Tijeras > PapelC) {
				cout << "Computadora: Papel" << endl;
				cout << "Ganaste Felicididades, eres el nuevo rey de las Tijeras:D" << endl;
			}
			break;
		}
		break;
	}

	}
	cout << "¿Quieres volver a jugar" << endl;

	cout << "1. Sí \n2. No" << endl;

	cin >> volver;

	if (volver == 1) {
		juego();
	}
}	