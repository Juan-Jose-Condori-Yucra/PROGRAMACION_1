//Materia: Programaci�n I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingenier�a de Mecatronica
// Fecha creaci�n: 11/09/2025
// N�mero de ejercicio: 1
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
