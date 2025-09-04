// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 03/09/2025
// Número de ejercicio:23
#include <iostream>
using namespace std;
int main ()
{
    int n;
    bool negativo=false;
    cout<<"Ingrese un numero: ";
    cin>>n;

    if (n<0)
    {
        negativo= true;
        n=-n;
    }
    cout<<"Numero invertido: ";
    if (negativo) cout<<"-";
    if (n==0)
    {
        cout<<"0";
    }
    else
    {
        while (n>0)
        {
            int digito= n%10;
            cout<<digito;
            n=n/10;
        }
    }
    return 0;
}
