// Materia: Programaci�n I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingenier�a de Mecatronica
// Fecha creaci�n: 03/09/2025
// N�mero de ejercicio:20
#include <iostream>
using namespace std;
int main ()
{
    int n;
    int contador=0;
    cout<<"Ingrese un numero: ";
    cin>>n;
    if(n==0)
    {
        contador=1;
    }
    else
    {
        if (n<0)
        {
            n= -n;
        }
        while (n>0)
        {
            n=n/10;
            contador++;
        }
    }
    cout<<"El numero tiene "<<contador<<" digitos";
    return 0;
}
