#include <iostream>
#include <string>

using namespace std;

int main(){

int Anio;

cout << "ingrese un anio: ";
cin >> Anio;

if (Anio%4 == 0 ){
        cout << "tu Anio es biciesto";
    }
    else if (Anio%100 != 0 && Anio%400 == 0){
    cout << "tu Anio es biciesto";
    }
    else{
        cout << "el Anio no es biciesto";
    }



return 0;
}
