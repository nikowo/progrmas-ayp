/* algoritmo para dividir un quenbrado 
autor jose luis cardona ramirez
fecha: 6\8\21
c++
*/

#include <iostream>

using namespace std;

int entero(int x,int y);

int main(){
	
	int x,y,r;
	int maxc, cociente;
	cout <<"digite el numerador \ndigite el denominador\n";
	cin >> x >> y;
	r = x%y;
	maxc = entero(x,y);
	cout << x  << "/" << y <<"  " << "=" << x/maxc << "/" << y/maxc ;
	return 0;
	
}

int entero(int x,int y){
	int r;
	r = x%y;
	
	while(r != 0){
		x=y;
		y=r;
		r= x%y;

	} return y;
}
