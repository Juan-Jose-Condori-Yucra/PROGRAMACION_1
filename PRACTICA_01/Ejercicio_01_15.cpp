// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 28/08/2025
// Número de ejercicio:15
#include <iostream>
using namespace std;
int main ()
{
    int n=0;
    float nota,suma,promedio;

    cout<<"Ingrese la cantidad de notas: ";
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        cout<<"Ingrese la nota "<<i<<":";
        cin>>nota;
        suma +=nota;
    }
    promedio=suma/n;
    cout<<"El promedio total es: "<<promedio;

    return 0;
}
