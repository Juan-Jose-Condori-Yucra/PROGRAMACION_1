// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 27/08/2025
// Número de ejercicio: 9
#include <iostream>
using namespace std;
int main ()
{
    int edad=0;

    cout<<"Ingrese una  edad: ";
    cin>>edad;
    if (edad<=12)
    {
        cout<<"Es un nino";
    }
    else if (edad<=18)
    {
        cout<<"Es un adolecente";
    }
    else if (edad>=18 && edad<=60)
    {
        cout<<"Mayor de edad";
    }
    else if (edad>=60)
    {
        cout<<"Adulto mayor";
    }
    return 0;
}
