/*
programa q use los vectores y los madulos
autor ; todos 
fecha: 24/04/21
copilador dev c++
*/

#include <iostream>
#define tan_max 45

using namespace std;
int menu();
int leervector(float vector[]);
void sobre_promedio(float vector[], int n);

int main(){
	int n;
	float promedio;
	float suma = 0;
	float vector[tan_max];
 int opcion;
 n = leervector (vector);
 do{
 	opcion = menu();
 	switch (opcion){
 		case 1:{
 			sobre_promedio(vector , n);
			break;
		 }
		 case 0:{
		 	cout << "salir... \n fin del programa";
			break;
		 }
		 default:{
		 	cout << "opcion invalida";
			break;
	}
		 
 
}
} while (opcion != 0);
	return 0;
}
int menu(){
	int opcion;
	system("cls");
	system("color 47");
	cout << "\n \n ***menu***" << endl << endl;
	cout << "1. sobre promedio" << endl;
	cout << "2. notas menores notas mayores" << endl;
	cout << "3. gnaron perdieron" << endl;
	cout << "4. mostrar estudiantes" << endl;
	cout << "0 salir" << endl;
	cin >> opcion ;
	
	return opcion;	
}
int leervector(float vector[]){
	int n;
	int i;
	cout << "ingrese numero de estudiantes"; cin >>n;
	while (n < 1 or n > tan_max)
	{
		cout << "ingrese valor valido de estudiantes"; cin >>n;
		}
	for(i = 0; i < n; i++)
	{
		cout << "ingrese notas del estudiante";
		cin >> vector[i];
		while ( n < 0.0 or n > 5.0)
		{
			cout << " ingrese nota valida";
			cin >> vector[i];
			
		}
		
		
		
	}
	return n;
	
}
void sobre_promedio(float vector[], int n){
	int i;
	float promedio;
	float suma;
cout << "modulo sobre promedio";
for(i= 0; i < n; i++)
{
	while (vector[i] > promedio){
	suma = suma + 1;
}
	}
	promedio = suma/n;
system ("pause");
}
