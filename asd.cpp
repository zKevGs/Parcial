#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main(){

int Materia;
cout << "ingrese la cantidad de materias: ";
cin >> Materia;

string materia[Materia];
double nota[Materia];
double ponderacion[Materia];

for (int i = 0; i < Materia; i++){

    cout << "ingrese el nombre de la materia " << i+1 << ": ";
    cin >> materia[i];
    cout << "ingrese la nota de la materia: ";
    cin >> nota[i];
    cout << "ingrese la ponderacion de la materia: ";
    cin >> ponderacion[i];

}

double PromedioPonderado = 0;
double SumaPonderaciones = 0;

for (int i= 0; i < Materia; i++){

    PromedioPonderado += nota[i]*ponderacion[i];
    SumaPonderaciones += nota[i];

}

double Total = PromedioPonderado/SumaPonderaciones;

cout << "el promedio ponderado es de :" << fixed << setprecision(2) << Total;


return 0;
}
