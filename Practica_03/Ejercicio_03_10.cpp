//Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 11/09/2025
// Número de ejercicio: 10
#include <iostream>
using namespace std;

double calcularTarifa(double km)
{
    double tarifa = 10 + km * 2;
    if (km > 10) tarifa *= 0.9; // descuento 10%
    return tarifa;
}

int main()
{
    double km;
    cout << "Ingrese km recorridos: ";
    cin >> km;
    cout << "Tarifa: " << calcularTarifa(km) << " Bs." << endl;
    return 0;
}
