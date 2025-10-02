// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Fecha creación: 02/10/2025
// Número de ejercicio: 7
// Problema planteado: Llenar hasta 10 o número negativo
#include <iostream>
using namespace std;

int main(){
    int arr[10];
    int n=0;
    int x;

    while(n<10){
        cout<<"Ingrese numero (negativo termina): ";
        cin>>x;
        if(x<0) break;
        arr[n]=x;
        n++;
    }

    cout<<"Ingresados: "<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<" "<<endl;

    return 0;
}

