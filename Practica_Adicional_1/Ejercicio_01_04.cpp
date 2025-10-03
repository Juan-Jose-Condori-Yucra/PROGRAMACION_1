// Autor: Juan José Condori Yucra
// Carnet: 12846096
// Carrera del estudiante: Mecatronica
// Fecha creación: 01/10/2025
#include <iostream>
using namespace std;

int EncontrarMax(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int x,y;
    cout << "Ingrese dos numeros: ";
    cin >> x >> y;
    cout << "El mayor es: " << EncontrarMax(x,y) << endl;
    return 0;
}
