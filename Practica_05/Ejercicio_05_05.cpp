// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Fecha creación: 02/10/2025
// Número de ejercicio: 5
// Problema planteado:Leer 2 vectores de dimensión N y combine ambos en otro vector.
#include <iostream>
using namespace std;

int main(){
    int N;
    int v1[100], v2[100], v3[200];
    cout<<"Dimension: ";
    cin>>N;

    for(int i=0;i<N;i++)
    {
        cout<<"v1["<<i<<"]: ";
        cin>>v1[i];
    }
    for(int i=0;i<N;i++)
    {
        cout<<"v2["<<i<<"]: ";
        cin>>v2[i];
    }

    for(int i=0;i<N;i++)
        v3[i]=v1[i];
    for(int i=0;i<N;i++)
        v3[N+i]=v2[i];
    cout<<"Concatenado: "<<endl;
    for(int i=0;i<2*N;i++)
    cout<<v3[i]<<" ";
    cout<<" "<<endl;
    return 0;
}
