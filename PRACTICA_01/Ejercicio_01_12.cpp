// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 27/08/2025
// Número de ejercicio:12
#include <iostream>
using namespace std;
int main()
{
    int n=0;
    cout<<"Ingrese un numero entre el rango de (1-5): ";
    cin>>n;
    while (n<1 || n>5)
    {
        cout<<"El numero no se encuntra en el rango permitido";
        cout<<"Vuelva a ingresar un numero: ";
        cin>> n;
    }
    return 0;
}
