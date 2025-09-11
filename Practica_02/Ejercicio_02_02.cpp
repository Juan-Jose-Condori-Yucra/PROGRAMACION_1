// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 10/09/2025
// Número de ejercicio: 2
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    int n;
    int caras=0, cruces=0;

    cout<<"Inrese un numero de lanzamiento: ";
    cin>>n;
    for (int i=0; i<n; i++)
    {
        int moneda= rand()%2;
        if (moneda==0)
            caras++;
        else
            cruces++;
    }
    double pcaras =(caras *100.0)/n;
    double pcruces =(cruces *100.0)/n;

    cout<<"Resultados:"<<endl;
    cout<<"Caras: "<<caras<<"("<<pcaras<<" %)"<<endl;
    cout<<"Cruces: "<<cruces<<"("<<pcruces<<" %)"<<endl;

    return 0;
}
