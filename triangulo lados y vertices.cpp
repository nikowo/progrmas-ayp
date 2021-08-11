/*programa q nos dice el perimetro de un triangulo mediante sus vertices
fecha 07/08/21
compilador dev c++ 
autor jose luis cardona ramirez
*/


#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	float dab,dac,dbc,p;
	int x1,x2,x3,y1,y2,y3;
	
		cout << " tenga en cuenta q el vertice 1 es el punto de arriba del triangulo y el vertice 2 es el punto de la izquierda a su vez el 3ro el de la derecha \n";
	cout << " \ndigite x1 ";
	cin >> x1;
		cout << "digite y1 ";
	cin >> y1;
		cout << "digite x2 ";
	cin >> x2;
		cout << "digite y2 ";
	cin >> y2;
		cout << "digite x3 ";
	cin >> x3;
		cout << "digite y3 ";
	cin >> y3;
	
	

     dab = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
 	cout << "la distancia entre a(x1,y1) y b (x2,y2) es " << dab << endl;
 	 dac = sqrt(pow((x3-x1),2) + pow((y3-y1),2));
	cout << "la distancia entre a(x1,y1) y c (x3,y3) es " << dac << endl;
     dbc = sqrt(pow((x3-x2),2) + pow((y3-y2),2));
	cout << "la distancia entre b(x2,y2) y c (x3,y3) es " << dbc << endl;
	
	while (dab+dac < dbc or dab+dbc < dac or dbc+dac < dab){
		cout << "digite valores q concuerden con un triangulo existente";
				cout << " tenga en cuenta q el vertice 1 es el punto de arriba del triangulo y el vertice 2 es el punto de la izquierda a su vez el 3ro el de la derecha \n";
	cout << " \ndigite x1 ";
	cin >> x1;
		cout << "digite y1 ";
	cin >> y1;
		cout << "digite x2 ";
	cin >> x2;
		cout << "digite y2 ";
	cin >> y2;
		cout << "digite x3 ";
	cin >> x3;
		cout << "digite y3 ";
	cin >> y3;
	}
	
	while(dab = dbc = dac){
		cout << "el triangulo es equilatero" << endl;
		break;
	}

	while((dab = dbc and dab != dac) or (dbc = dac and dbc != dab) or (dac = dab and dac != dbc)){
		cout << "el triangulo es isoceles" << endl;
		break;
	}

	while(dab != dbc and dab != dac and dbc != dac){
		cout <<"el triangulo es escaleno" << endl;
		break;
	}
   
   p = dab + dac + dbc;
	
	cout << "el perimetro es "<< p;
	cout << endl;
	
	return 0;
}
