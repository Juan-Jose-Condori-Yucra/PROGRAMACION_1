// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 03/09/2025
// Número de ejercicio:18
#include<iostream>
using namespace std;
int main ()
{
    int contador=0;
    int numero=2;
    while (contador<100)
    {
        bool primo=true;
        for(int i=2; i*i<=numero;i++)
        {
            if (numero%i==0)
            {
                primo=false;
            }
        }
        if(primo)
        {
            cout<<numero<< " ";
            contador++;
        }
        numero++;
    }
    return 0;
}
