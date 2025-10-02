// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Fecha creación: 02/10/2025
// Número de ejercicio: 6
// Problema planteado:suma de 5 enteros
#include <iostream>
using namespace std;

int main(){
    int N = 5;
    int v1[5], v2[5], v3[5];

    cout<<"Ingrese elementos del vector 1:"<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<"v1["<<i<<"]: ";
        cin>>v1[i];
    }

    cout<<"\nIngrese elementos del vector 2:"<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<"v2["<<i<<"]: ";
        cin>>v2[i];
    }

    for(int i=0; i<N; i++)
    {
        v3[i] = v1[i] + v2[i];
    }

    cout<<"\nResultado (suma de vectores):"<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<" "<<endl;

    return 0;
}
