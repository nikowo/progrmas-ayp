/*
programa q calvule la nota final 
fecha: 01/04/21
autor:jose lus ccardona ramirez 
ccompilador: dev c++
*/

#include <iostream>

using namespace std;

int main(){

float n1,n2,n3,n4,snt,nf;

cout << "escriba la nota 1 ";
cin >> n1;
cout << "escriba la nota 2 ";
cin >> n2;
cout << "escriba la nota 3 ";
cin >> n3;
cout << "escriba la nota 4 ";
cin >> n4;

snt = n1+n2+n3+n4;

nf = snt / 4;

cout << "la nota final del area es ";
cout << nf;

return 0;

}

