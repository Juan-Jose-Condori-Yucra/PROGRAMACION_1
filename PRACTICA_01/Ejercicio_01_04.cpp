// Materia: Programaci�n I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingenier�a de Mecatronica
// Fecha creaci�n: 26/08/2025
// N�mero de ejercicio: 4
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float radio;
    double pi= 3.1416;
    double volumen;

    cout<<"Introduzca el radio de la esfera: ";
    cin>> radio;
    volumen= (4/3)*(pi)*pow(radio,3);
    cout<<"El volumen es: "<< volumen;
    return 0;
}
