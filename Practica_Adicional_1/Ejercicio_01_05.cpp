// Autor: Juan José Condori Yucra
// Carnet: 12846096
// Carrera del estudiante: Mecatronica
// Fecha creación: 01/10/2025
#include <iostream>
using namespace std;

double ParteFraccionaria(double num)
{
    return num - (int)num;
}

int main()
{
    double n;
    cout << "Ingrese un numero real: ";
    cin >> n;
    cout << "Parte fraccionaria: " << ParteFraccionaria(n) << endl;
    return 0;
}
