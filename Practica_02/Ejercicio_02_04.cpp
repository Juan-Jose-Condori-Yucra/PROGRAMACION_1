//Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 10/09/2025
// Número de ejercicio: 4
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    int n;
    srand(time(0));
    int numero_secreto =rand()%51;
    int intento, minimo=0, maximo=50;
    bool adivinado= false;
    cout<<"Estoy pensando un numero entre 0 y 50"<<endl;
    for(int i=1; i<=5;i++)
    {
        cout<<"Intento"<<i<<endl;
        cin>>intento;

        if (intento==numero_secreto)
        {
            cout<<"Felicidades :) adivinaste el numero"<<endl;
            adivinado=true;
        }
        else if (intento<numero_secreto)
        {
            minimo=intento;
            cout<<"El numero esta entre "<<minimo<<" y "<<maximo<<endl;
        }
        else
        {
            maximo=intento;
            cout<<"El numero esta entre "<<minimo<<" y "<<maximo<<endl;
        }
    }
    if (!adivinado)
    {
        cout<<"Lo sentimos no lograste encontrar el nuermo. Era: "<<numero_secreto;
    }

    return 0;
}
