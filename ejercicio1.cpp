#include <iostream>
#include <string>

using namespace std;

int main(){

int Numero;
int Numero2;
double Resultado;
string Operacion;

cout << "ingrese el primer Numero: ";
cin >> Numero;

cout << "ingrese el segundo Numero: ";
cin >> Numero2;

cout << "ingrese la operacion que desee realizar: ";
cin >> Operacion;

if (Operacion == "suma"){
    Resultado = Numero + Numero2;
    cout << "la suma de tus dos numeros es: " << Resultado;
}else if (Operacion == "resta"){
    Resultado = Numero - Numero2;
    cout << "la resta de tus dos numeros es: " << Resultado;
}else if (Operacion == "multiplicacion"){
    Resultado = Numero * Numero2;
    cout << "la multiplicacion de tus dos numeros es: " << Resultado;
}else if (Operacion == "division"){
    if (Numero > 0 && Numero2 > 0){
        Resultado = Numero/Numero2;
        cout << "la division de tus dos numeros es: " << Resultado;
    }else{
        cout << "operacion invalida";
    }
}else {
    cout << "numero u operacion invalidoos, ingrese un dato correcto";
}




return 0;
}
