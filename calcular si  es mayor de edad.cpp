/*
calcular si es mayor o menor de edad segun la fecha de nacimiento 
fecha: 31/03/21
autor: jose luis cardona ramirez 
compilador: dev c++
*/

#include <iostream>

using namespace std;

int main(){


int nacimiento;
int hoy;
int edad; 

cout << "escribir año de nacimiento " ;
cin >> nacimiento;
cout << "escribir año de hoy ";
cin >> hoy;

edad = (hoy - nacimiento);

if(edad <= 0)
{
	cout << edad;
	cout << "\naun no ha nacido";
}
else 

if(edad < 18)
{
cout << edad;
cout << "\nes menor de edad";
}
else

	if(edad > 150)
{
	cout << edad;
	cout << "\nno puede seguir vivo";
}
else

if(edad >= 18) 
{
	cout << edad;
	cout << "\nes mayor de edad";
}
else


return 0;

}
