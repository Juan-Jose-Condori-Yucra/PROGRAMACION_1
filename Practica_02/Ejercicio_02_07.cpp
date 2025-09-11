//Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 10/09/2025
// Número de ejercicio: 7
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    int N;
    cout<<"Ingrese la cantidad total de ninos: ";
    cin>>N;
    srand(time(0));
    int n1 =rand()%(N+1);
    int n2 =rand()%(N-n1+1);
    int n3= N-(n1+n2);

    int consumo=(n1*6)+(n2*3)+(n3*2);
    cout<<"Distribucion aleatoria: "<<endl;
    cout<<"Ninos de 1 anio: "<<n1<<endl;
    cout<<"Ninos de 2 anio: "<<n2<<endl;
    cout<<"Ninos de 3 anio: "<<n3<<endl;
    cout<<"Consumo total de panales por dia: "<<consumo;
    return 0;
}
