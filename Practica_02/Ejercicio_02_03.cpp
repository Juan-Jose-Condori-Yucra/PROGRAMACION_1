//Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 10/09/2025
// Número de ejercicio: 3
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    int numero_aleatorio=0;
    int max=0;
    int min=0;
    srand(time(0));
    max=10;
    min=1;
    numero_aleatorio=(rand()%(max-min+1))+min;
    cout<<numero_aleatorio;
    long long factorial= 1;
    for (int i=1; i<=numero_aleatorio; i++)
    {
        factorial *=i;
    }
    cout <<"Numero aleatorio entre 1 y 10: "<<numero_aleatorio<<endl;
    cout<<"Factorial de "<<numero_aleatorio<<"="<< factorial<<endl;
    return 0;
}
