// Materia: Programaci�n I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingenier�a de Mecatronica
// Fecha creaci�n: 17/09/2025
// N�mero de ejercicio: 1
#include <iostream>
using namespace std;
void intercambiar_valores(int &a,int &b)
{
    int aux=a;
    a=b;
    b=aux;
}
int main ()
{
    int x=5, y=10;
    cout<<"Antes: x= "<<x<<", y= "<<y<<endl;
    intercambiar_valores(x,y);
    cout<<"Despues: x= "<<x<<", y= "<<y<<endl;
    return 0;
}
