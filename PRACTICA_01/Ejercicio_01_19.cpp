// Materia: Programaci�n I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingenier�a de Mecatronica
// Fecha creaci�n: 03/09/2025
// N�mero de ejercicio:19
#include <iostream>
using namespace std;
int main ()
{
    int n;

    cout<<"Ingrese un numero: ";
    cin>>n;
    cout<<"La tbala de multiplicar del numero "<<n<<" es:"<<endl;
    for (int i=1; i<=10; i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
}
