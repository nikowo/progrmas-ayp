#include <iostream>

using namespace std;

int main(){
	
	int dia;
	cout << "escriba el nuemro del dia de la semana ";
	cin >> dia ;
	
	 switch (dia){
		case 1: cout << "hoy es lunes \n";
		break;
		
		case 2: cout << "hoy es martes \n";
		break;
		
		case 3: cout << "hoy es miercoles \n";
		break;
		
		case 4: cout << "hoy es jueves \n";
		break;
		
		case 5: cout << "hoy es viernes \n";
		break;
		
		case 6: cout << "hoy es sabado \n";
		break;
		
		case 7: cout << "hoy es domingo \n";
		break;
		
}
	return 0;
}
