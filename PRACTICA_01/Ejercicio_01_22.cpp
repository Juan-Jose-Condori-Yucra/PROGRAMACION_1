// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 03/09/2025
// Número de ejercicio:22
#include <iostream>
using namespace std;
int main ()
{
    int a,b;
     cout<<"Introduzca el primer numero: ";
     cin>>a;
     cout<<"Introduzca el segundo numero: ";
     cin>>b;
     if (a==0 || b==0)
     {
         cout<<"Ningun numero puede ser cero para verificar si son multiplos.";
     }
     else if(a%b==0)
     {
         cout<<a<<" Es multiplo de "<<b;
     }
     else if (b%a==0)
     {
         cout<<b<<" Es multiplo de "<<a;
     }
     else
     {
         cout<<"Ninguno es multiplo del otro.";
     }
    return 0;
}
