#include <iostream>
#include <string>

using namespace std;

int main(){

int Numero;
int Resultado;

cout << "ingrese un Numero: ";
cin >> Numero;

for (int i = 1; i < Numero; i++){
        Resultado += Resultado * Numero*i;
        }

cout << "el numero factorial es: " << Resultado;

return 0;
}
