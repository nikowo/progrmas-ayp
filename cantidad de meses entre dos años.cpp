/*
programa para calcular la cantidad de meses entre 2 a�os
fecha:  31/03/21
autor jose luis cardona ramirez
compilador dev c++
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int anio_1;
	int anio_2;
	int anios;
	int meses;
	
	cout << "ingrese a�o 1 ";
	cin >> anio_1;
		cout << "ingrese a�o 2 ";
	cin >> anio_2;
	
anios = anio_2 - anio_1;

meses = anios * 12;

	cout <<"la cantidad de meses entre los dos a�os son ";
	cout << meses;
	return 0;

}
