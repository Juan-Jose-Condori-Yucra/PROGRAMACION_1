//Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 11/09/2025
// Número de ejercicio: 2
#include <iostream>
using namespace std;

double celsiusAFahrenheit(double c)
{
    return (c * 9.0 / 5.0) + 32;
}

int main()
{
    double c;
    cout << "Ingrese temperatura en Celsius: ";
    cin >> c;
    cout << "Equivalente en Fahrenheit: " << celsiusAFahrenheit(c) << endl;
    return 0;
}
