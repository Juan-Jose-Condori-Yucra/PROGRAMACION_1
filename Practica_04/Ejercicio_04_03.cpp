// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 17/09/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;

void ModificarValores(int valor, int &referencia)
{
    valor = valor * 2;         // Solo se modifica dentro de la función
    referencia = referencia + 10; // Se modifica también en el main
    cout << "Dentro de la funcion -> valor: " << valor<< ", referencia: " << referencia << endl;
}

int main()
{
    int a = 5, b = 7;
    cout << "Antes -> a: " << a << ", b: " << b << endl;

    ModificarValores(a, b);

    cout << "Despues -> a: " << a << " (no cambio, porque fue por valor)" << endl;
    cout << "Despues -> b: " << b << " (sí cambio, porque fue por referencia)" << endl;

    return 0;
}
