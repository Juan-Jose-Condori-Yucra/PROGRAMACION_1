// Materia: Programaci�n I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingenier�a de Mecatronica
// Fecha creaci�n: 03/09/2025
// N�mero de ejercicio:16
#include <iostream>
using namespace std;
int main ()
{
    int n;
    bool primo=true;

    cout<<"Introduzca un numero :";
    cin>>n;
    if(n<=1)
    {
        primo=false;
    }
    else
    {
        for(int i=2; i*i<=n; i++)
        {
            if (n%i ==0)
            {
                primo=false;
            }
        }
    }
    if (primo)
    {
        cout<<n<<" Es un numero primo";
    }
    else
    {
        cout<<n<<" no es un numero primo";
    }
    return 0;
}
