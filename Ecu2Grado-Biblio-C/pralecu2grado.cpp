//Ivan Martinez // pralecu2grado2.cpp : Este archivo contiene la funci�n "main".La ejecuci�n del programa comienza y termina ah�. // 

#include <iostream>
#include "BibliotecaEcu2Grado.h"

using namespace std;

//variables globales

double a, b, c;
double x1, x2;
int numSols;

void pedirCoeficientes(double& oa, double& ob, double& oc);
void resultados(int numSols, double x1, double x2);

int main()
{
	pedirCoeficientes(a, b, c);

	numSols = calcular(a, b, c, x1, x2);

	resultados(numSols, x1, x2);

}
void pedirCoeficientes(double& oa, double& ob, double& oc) {
	setlocale(LC_ALL, "");
	cout << "introduzca el valor del coeficiente A= ";
	cin >> oa;

	cout << "introduzca el valor del coeficiente B= ";
	cin >> ob;

	cout << "introduzca el valor del coeficiente C= ";
	cin >> oc;

}

void resultados(int inumSols, double ix1, double ix2) {
	if (inumSols == 0) {

		cout << "el numero de soluciones es:" << inumSols << endl;
	}

	else if (inumSols == 1) {
		cout << "el numero de soluciones es:" << inumSols << endl;
		cout << "la solucion para x1 es:" << ix1 << endl;
	}

	else if (inumSols == 2) {
		cout << "el numero de soluciones es:" << inumSols << endl;
		cout << "la solucion para x1 es:" << ix1 << endl;
		cout << "la solucion para x2 es:" << ix2 << endl;
	}
}

//cout << "el valor de la solucion a es:" << x1 << endl;
/*
cout << "el valor del coeficiente a es:" << a << endl;
cout << "el valor del coeficiente a es:" << b << endl;
cout << "el valor del coeficiente a es:" << c << endl;
*/

// Ejecutar programa: Ctrl + F5 o men� Depurar > Iniciar sin depurar
// Depurar programa: F5 o men� Depurar > Iniciar depuraci�n



