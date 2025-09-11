//Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 10/09/2025
// Número de ejercicio: 6
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    int n,num,contadorprimos=0;
    cout<<"Ingrese la cantidad de numeros a generar: ";
    cin>>n;
    cout<<"Numeros generados: "<<endl;
    srand(time(0));

    for (int i=0; i<n; i++)
    {
        num=rand()%10000+1;
        cout<<num<<" "<<endl;
        int esprimo =1;
        if (num<=1) esprimo =0;
        else
        {
            for (int j=2; j<=num/2;j++)
            {
                if (num%j==0)
                {
                    esprimo=0;
                }
            }
        }
        if (esprimo==1)
        {
            contadorprimos++;
        }
    }
    cout<<"Cantidad de numeros primos: "<<contadorprimos;
    return 0;
}
