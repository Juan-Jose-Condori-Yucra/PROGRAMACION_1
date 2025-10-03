// Materia: Programación I, Paralelo 4
// Autor: Juan José Condori Yucra
// Carnet: 12846096
// Carrera del estudiante: Mecatronica
// Fecha creación: 01/10/2025

#include <iostream>
using namespace std;

int main(){
    double notas[5], suma = 0;
    bool cumple = true;

    cout << "Ingrese las 5 calificaciones: "<<endl;
    for(int i=0;i<5;i++){
        cin >> notas[i];
        suma += notas[i];
        if(notas[i] < 80) cumple = false;
    }

    double promedio = suma/5;
    if(promedio >= 85 && cumple)
        cout << "El estudiante esta en la lista de honor\n";
    else
        cout << "El estudiante NO esta en la lista de honor\n";

    return 0;
}
