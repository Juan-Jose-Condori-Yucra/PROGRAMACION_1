//Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 10/09/2025
// Número de ejercicio: 5
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    int n;
    int num;
    int mayor=0;
    int menor=1001;
    long long suma = 0;
    cout<<"Ingrese la cantidad de numeros a generar: ";
    cin>>n;
    srand(time(0));
    for (int i=1; i<=n; i++)
    {
        num=rand()%1000+1;
        cout<<num<<" ";

        suma+=num;
        if (num>mayor) mayor= num;
        if (num<menor) menor= num;
    }
    double promedio= (double)suma/n;
    cout<<"Resultados: "<<endl;
    cout<<"a. Sumatoria: "<<suma<<endl;
    cout<<"b. Promedio: "<<promedio<<endl;
    cout<<"c. Mayor valor: "<<mayor<<endl;
    cout<<"d. Menor valor: "<<menor<<endl;
    return 0;
}
