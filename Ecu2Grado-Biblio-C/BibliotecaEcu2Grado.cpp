//BibliotecaEcu2Grado.cpp : Este archivo contiene la implementacion de la biblioteca //Ivan Martinez // Ecu2Grado.cpp : Este archivo contiene la función "main".La ejecución del programa comienza y termina ahí. // 
//

#include <math.h>
#include "BibliotecaEcu2Grado.h"



int calcular(double ia, double ib, double ic, double& ox1, double& ox2) {
	double discr;
	int numSolsRes;
	discr = ib * ib - 4 * ia * ic;



	if (discr < 0) {
		numSolsRes = 0;
	}
	else if (discr == 0) {
		numSolsRes = 1;
		ox1 = (-ib + sqrt(ib * ib - 4 * ia * ic)) / (2 * ia);



	}
	if (discr > 0) {
		numSolsRes = 2;
		ox1 = (-ib + sqrt(ib * ib - 4 * ia * ic)) / (2 * ia);
		ox2 = (-ib - sqrt(ib * ib - 4 * ia * ic)) / (2 * ia);



	}
	return numSolsRes;
}
	

