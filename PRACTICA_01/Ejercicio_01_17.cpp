// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 03/09/2025
// Número de ejercicio:17
#include <iostream>
using namespace std;
int main ()
{
    int N, sumaN=0,sumaamigo=0;

    cout<<"Ingrese un numero: ";
    cin>>N;
    for (int i=1; i<=N/2; i++)
    {
        if (N%i==0)
        {
            sumaN +=i;
        }
    }
    for (int i=1; i<=sumaN/2;i++)
    {
        if (sumaN %i ==0)
        {
            sumaamigo +=i;
        }
    }
    if (sumaamigo==N && N!=sumaN)
    {
        cout<<N<<" Es amigo de " <<sumaN;
    }
    else
    {
        cout<<N<<"  No tiene numero amigo.";
    }
    return 0;
}

