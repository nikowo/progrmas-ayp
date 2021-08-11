#include <iostream>
#define TAN_MAX 45
using namespace std;

int leer_vector(float notas[]);
void mostrar_vector(float notas[], int n);

int main() {
    int n;
    float notas[TAN_MAX];
	
	n = leer_vector(notas);
	mostrar_vector(notas,n);
	
	
	return 0;
}

int leer_vector(float notas[]){
	int i,n;
	do{
	cout << "digite numero de estudienates 1-45";
	cin >> n;
      } while (n < 1 or n > TAN_MAX);
      
      for (i = 0; i < n ; i++){
      	cout << " ingrese nota" << i << ": ";
      	cin >> notas[i];
      	while(notas[i] < 0.0 or notas[i] > 5.0){
      		cout << " ingrese nota valida";
      		cin >> notas[i];
      		
		  }
		  
	  }
      return n;
           
}
void mostrar_vector(float notas[], int n){
	int i;
	cout << "notas de los estudiantes" << endl;
	cout << "direccion del primer elemento es" << notas << endl;
	for (i = 0; i < n; i++){
		cout << notas[i] << endl;
	}
}

