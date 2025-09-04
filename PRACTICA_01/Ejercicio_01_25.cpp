// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 03/09/2025
// Número de ejercicio:25
#include <iostream>
using namespace std;
int main ()
{
    int n;
    char opcion;
    do
    {
        cout<<"ingrese un numero: ";
        cin>>n;
        cout<<"La tabla de multiplicar del numero "<<n<<" es:"<<endl;
        for(int i=1; i<=10; i++)
        {
            cout<<n<<"x"<<i<<"="<<n*i<<endl;
        }
        cout<<"Desea calcular otra tabla? (s/n): ";
        cin>>opcion;
    }
    while (opcion=='s' || opcion=='s');
    cout<<"Programa finalizado.";
    return 0;
}
