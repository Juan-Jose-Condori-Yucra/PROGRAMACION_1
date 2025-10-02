// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Fecha creación: 02/10/2025
// Número de ejercicio: 3
// Problema planteado:Calificaciones, promedio, varianza
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int N;
    cout<<"Cantidad de calificaciones: ";
    cin>>N;

    int cal[100];     // arreglo de calificaciones
    double desv[100]; // arreglo de desviaciones
    int suma=0;

    // leer calificaciones y calcular suma
    for(int i=0;i<N;i++)
    {
        cout<<"Nota "<<i+1<<": ";
        cin>>cal[i];
        suma+=cal[i];
    }

    double prom = (double)suma/N;

    // calcular desviaciones
    for(int i=0;i<N;i++)
    {
        desv[i] = cal[i]-prom;
    }

    // calcular varianza
    double var=0;
    for(int i=0;i<N;i++)
    {
        var += desv[i]*desv[i];
    }
    var/=N;

    // mostrar resultados
    cout<<"Suma: "<<suma<<endl;
    cout<<"Promedio: "<<prom<<endl;
    cout<<"Varianza: "<<var<<endl;

    cout<<"\nValor\tDesviacion\n";
    for(int i=0;i<N;i++)
        cout<<cal[i]<<"\t"<<desv[i]<<"\n";

    return 0;
}

