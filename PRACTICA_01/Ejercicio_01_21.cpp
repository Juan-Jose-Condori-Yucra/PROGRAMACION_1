// Materia: Programaci�n I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingenier�a de Mecatronica
// Fecha creaci�n: 03/09/2025
// N�mero de ejercicio:21
#include <iostream>
using namespace std;
int main ()
{
    int a,b;
    int resultado=0;

    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;
    for (int i=0; i<b; i++)
    {
        resultado+= a;
    }
    cout<<"La multiplicacion es: "<<resultado;
    return 0;
}
