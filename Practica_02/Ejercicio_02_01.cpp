// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 10/09/2025
// Número de ejercicio: 1
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int n;
    int cont2=0, cont4=0, cont6=0;

    cout<<"Introduzca un numero: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int dado = rand() % 6+1;

        if (dado == 2) cont2++;
        else if (dado ==4) cont4++;
        else if (dado ==6) cont6++;
    }
    cout<<"Frecuencia de caras pares: "<<endl;
    cout<<"cara 2: "<< cont2 <<endl;
    cout<<"cara 4: "<< cont4 <<endl;
    cout<<"cara 6: "<< cont6 <<endl;

    return 0;
}
