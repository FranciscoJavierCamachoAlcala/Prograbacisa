// Hacer un programa que calcule las coordenadas $(x, y)$ de un punto dados el radio $r$ y su ángulo sexagesimal $\alpha$.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
void main() {

	float x, y, r, a;

	cout << "Escriba el radio\n";
	cin >> r;
	cout << "Escriba el angulo\n";
	cin >> a;
	x = r * cos(a);
	y = r * sin(a);
	cout << "las coordenadas son: (" << x;
	cout << "," << y;
	cout << ")\n";

	system("color 0C");
	system("pause");
}
