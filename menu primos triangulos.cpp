/**********
objetivo :practicar los menus modulos y estructuras de decision multiple
autor: todos 
31\07\21
*********/

#include <iostream>

using namespace std;

short menu(void);
int primosg(void);

int main(){
	
	short opcion;
	do{
	opcion=menu();
	switch(opcion){
		case 1: 
		cout << "primos gemelos";
		break;
		case 2:
		cout<< "divisivilidad por 11";
		break;
			
	}
} while (opcion != 0);
	return 0;
}

short menu(void){
	int short opcion;
	
	system("cls");
	system("color b4");
	cout << "\t\t\t\t\t\t _______--menu--_______" << endl << endl;
	cout << "\n \t\t 1- numeros gemelos \n";
	cout << "\n \t\t 2- tirangulo de divisivilidad por 11 \n";
	cout << "\n \t\t 0- terminar \n";
	cout << "\n \t\t ....ingrece la opcion deseada....";
	cin >> opcion;
	while (opcion < 0 or opcion >2){
		cout << "\r valor no valido ingrese opcion valida";
		cin >> opcion;
		
	}
}

int primosg(void){
	int i;
	int n1;
	cout<< "\n Ingrese Numero \n";
	cin>> n1;
	while (n1<2 or n1>35000){
		cout << "\n ingrese valor valido max 35000";
	}
     
}

