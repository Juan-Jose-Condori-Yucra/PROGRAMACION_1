// Materia: Programaci�n I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingenier�a de Mecatronica
// Fecha creaci�n: 27/08/2025
// N�mero de ejercicio: 5
#include <iostream>
using namespace std;
int main ()
{
    double suma=273.15;
    double celsius;
    double kelvin;
    cout<<"Ingrese la termperatura en grados centigrados: ";
    cin>> celsius;
    kelvin= celsius+suma;
    cout<< "La conversion a grados Kelvin es: "<<kelvin;
    return 0;
}
