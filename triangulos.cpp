/* 
averiguar si un triangulo fora 3 lados
fecha:27/03/2021
autor: jose luis cardona ramirez
compilado: dev c++
*/

#include <iostream>

using namespace std ;

int main(){
	float lado1, lado2, lado3;
	cout << "ingrese el lado numero 1 ";
	cin >>lado1;
	cout << "ingrese el lado numero 2 ";
	cin >>lado2;
	cout << "ingrese el lado numero 3 ";
	cin >>lado3;
	

if((lado1 < (lado2 + lado3)) or (lado2 < (lado1 + lado3)) or (lado3 < (lado1 + lado2)))
{ 
cout<< " \n puede ser un triangulo \n \n";

if((lado1 == 0) or (lado2 == 0) or (lado3 ==0))
{
	cout<< "no es un triangulo";
}
else
if((lado1 == lado2) and (lado2 == lado3) and (lado1 == lado3))
{ 
cout<< "es un triangulo equilatero";
}
else
if((lado1 == lado2) or (lado2 ==lado3) or (lado1 == lado3))
{
	cout<< "es un triangulo isoseles";
}
else
if((lado1 != lado2) and (lado2 != lado3) and (lado1!= lado3))
{
	cout<< "es un triangulo escaleno";
}
}
else 

 return 0;
 
}
