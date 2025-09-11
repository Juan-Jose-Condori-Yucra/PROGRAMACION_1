//Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 11/09/2025
// Número de ejercicio: 5
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double promedioPonderado()
{
    int notas[4];
    int pesos[4] = {10, 20, 30, 40};
    int sumaPesos = 100;
    int suma = 0;

    srand(time(0));
    for (int i = 0; i < 4; i++)
    {
        notas[i] = rand() % 100 + 1;
        cout << "Nota " << i + 1 << ": " << notas[i]
             << " (Peso " << pesos[i] << "%)" << endl;
        suma += notas[i] * pesos[i];
    }
    return (double)suma / sumaPesos;
}

int main()
{
    cout << "Promedio ponderado: " << promedioPonderado() << endl;
    return 0;
}
