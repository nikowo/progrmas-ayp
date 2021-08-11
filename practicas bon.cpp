/*programa para calcular el promedio y el promedio con bonificacion en practicas
fecha 10/8/21
autor jose luis cardona ramirez
compilador c++
*/


#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int op,i;
	float x1,x2,x3,x4,p,pbon;
	int suma;
	int asi;
	
	 cout << "introduzca nota 1 ";
	 cin >> x1;
	 	 while(x1 < 1.0 or x1 > 5.0){
	 	cout << "escriba un valor valido\n";
	 	cin >>x1;
		 break;
	 }
	 	 cout << "introduzca nota 2 ";
	 cin >> x2;
	 	 while(x2 < 1.0 or x2 > 5.0){
	 	cout << "escriba un valor valido\n";
	 	cin >>x2;
		 break;
	 }
	 	 cout << "introduzca nota 3 ";
	 	 cin >> x3;
	 	 	 while(x3 < 1.0 or x3 > 5.0){
	 	cout << "escriba un valor valido\n";
	 	cin >>x3;
		 break;
	 }
	 	 cout << "introduzca nota 4 ";
	 cin >> x4;
	 	 while(x4 < 1.0 or x4 > 5.0){
	 	cout << "escriba un valor valido\n";
	 	cin >>x4;
		 break;
	 }
	 

	 cout <<"\ndigite la opcion\n 1. # de dias asistidos\n 2.dia por dia asistido \n";
	 cin >> op;
	 
	 while(op < 1 or op > 2){
	 	cout << "digite una opcion valida\n";
	 	cin >>op;
	 	break;
	 }
	 while(op == 1){
	 	cout <<"\nescriba el numero de dias \n";
	 	cin >> asi;
	 	while(asi < 1 or asi > 32){
	 		cout << "digite numero de dias asistidos valido";
	 		
	 		break;
		 }
	 	break;
	 }
	 
	 while(op == 2){
	 cout << "\nescriba 1 si asistio 0 si no ";
	 for (i = 0; i < 32; i++){
	 	cout << "\nel practicante asistio el dia " << i+1 << endl;
	 	cin >> suma;
	 	while (suma > 1 or suma < 0){
	 		cout << "ingrese un valor valido";
	 		cin >> suma;
		 }
	 	while(suma == 1){
	 		asi = (asi + 1);
		break;
		}
	 	
	 }	
	 break;
	 }
	 
	 while(x1 <= x2 and x1 <= x3 and x1 <= x4){
	 	p = (x2+x3+x4)/3;
	 	break;
}
	 while(x2 <= x1 and x2 <= x3 and x2 <= x4){
	 	p = (x1+x3+x4)/3;
	 	break;
}	 while(x3 <= x1 and x3 <= x2 and x3 <= x4){
	 	p = (x2+x1+x4)/3;
	 	break;
}
	 while(x4 <= x1 and x4 <= x2 and x4 <= x3){
	 	p = (x2+x3+x1)/3;
	 	break;
}
    while(asi >= (asi*0.80)){
    	pbon = p+(0.5);
     break;
	}
    while(asi >= (asi * 0.60) and asi < (asi * 0.80)){
    	pbon = p+(0.2);
    	break;
	}
	while(asi < (asi * 0.60)){
		pbon = p-(0.2);
		break;
		
	}
	
	 cout << "el estudiante asistio " << asi << endl;
	 cout << "el promedio sin bonificacion por asistencia es " << p << endl;
	 cout << "\n\n\n el promedio con la bonificacion es     " << pbon << endl;
	 
	 
	 
	 
	return 0;
	
	
}
