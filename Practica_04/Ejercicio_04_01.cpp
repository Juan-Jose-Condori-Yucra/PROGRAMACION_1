// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 17/09/2025
// Número de ejercicio: 1
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
