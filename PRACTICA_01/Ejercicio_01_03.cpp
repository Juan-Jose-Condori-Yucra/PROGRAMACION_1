// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 26/08/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;
int main ()
{
    float base=0;
    float altura=0;
    float area=0;

    cout<<"Ingrese la base del triangulo: ";
    cin>> base;
    cout<<"Ingrese la altura del triangulo: ";
    cin>> altura;
    area= (base*altura)/2;
    cout<<"El area del triangulo es: "<< area;
    return 0;

}
