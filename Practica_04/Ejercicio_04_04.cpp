// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 17/09/2025
// Número de ejercicio: 4
#include <iostream>
using namespace std;

double ConvertirCelsiusAFahrenheit(double celsius)
{
    return (celsius * 9.0 / 5.0) + 32;
}

double MayorTemperatura(double t1, double t2)
{
    if (t1 > t2)
        return t1;
    else
        return t2;
}

int main()
{
    double c1, c2;
    cout << "Ingrese la primera temperatura en Celsius: ";
    cin >> c1;
    cout << "Ingrese la segunda temperatura en Celsius: ";
    cin >> c2;

    double f1 = ConvertirCelsiusAFahrenheit(c1);
    double f2 = ConvertirCelsiusAFahrenheit(c2);

    cout << c1 << " C = " << f1 << " F" << endl;
    cout << c2 << " C = " << f2 << " F" << endl;

    cout << "La mayor temperatura en Celsius es: " << MayorTemperatura(c1, c2) << " C" << endl;
    cout << "La mayor temperatura en Fahrenheit es: " << MayorTemperatura(f1, f2) << " F" << endl;

    return 0;
}
