// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Fecha creación: 02/10/2025
// Número de ejercicio: 4
// Problema planteado: Multiplicacion de vactores
#include <iostream>
using namespace std;
int main ()
{
    int N;
    int v1[100], v2[100], v3[100];
    cout<<"Dimension: ";
    cin>>N;

    for(int i=0; i<N; i++)
    {
        cout<<"V1["<<i<<"]: ";
        cin>>v1[i];
    }
    for(int i=0; i<N; i++)
    {
        cout<<"V2["<<i<<"]: ";
        cin>>v2[i];
    }
    for(int i=0; i<N; i++)
        v3[i]=v1[i]*v2[i];
    cout<<"Resultado: "<<endl;
    for(int i=0; i<N;i++)
        cout<<v3[i]<<" ";
    cout<<" "<<endl;
    return 0;
}
