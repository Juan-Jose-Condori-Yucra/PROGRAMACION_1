// Materia: Programaci�n I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingenier�a de Mecatronica
// Fecha creaci�n: 28/08/2025
// N�mero de ejercicio:14
#include <iostream>
using namespace std;
int main ()
{
    int N=0;
    cout<<"Ingrese un numero: ";
    cin>>N;
    for (int i=1;i<=N;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
