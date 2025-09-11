//Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 11/09/2025
// Número de ejercicio: 1
#include <iostream>
using namespace std;

bool esPar(int n) {
    return n % 2 == 0;
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (esPar(num))
        cout << num << " es par." << endl;
    else
        cout << num << " es impar." << endl;

    return 0;
}
