/*
programa para saber si un numero entero es divisible por otro
autor: todos
compilador: dev c++
fecha : 17/04/21
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(void){
	
	int n1, n2;
	
	cout<< "ingrse numero 1 ";
	cin>>n1;
	cout << "ingrese numero 2 ";
	cin>>n2;
    
    if ((n1 != 0) and (n2 != 0)){
    	if(n1 >= n2){
    		if((n1 % n2) == 0);
    printf ("\n el numero 1 es divisible por el numero 2 es entero ", n1, n2, n1/n2);
	}
else
if(n1 >= n2){
	if((n2 % n1) ==0)
		printf(" \n el numero 2 es divisible por el nuero 1 ", n2, n1, n2/n1);

}
else
if((n1 % n2) != 0){
	printf("la divicion entre estos no es un numero entero ", n1, n2);
}
else
if((n2 % n1) !=0)
printf("la division entre estos no es un numero entero ", n2, n1);
}
else

return 0;
}

