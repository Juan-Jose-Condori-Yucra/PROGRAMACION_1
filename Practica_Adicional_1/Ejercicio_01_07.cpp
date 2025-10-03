// Autor: Juan José Condori Yucra
// Carnet: 12846096
// Carrera del estudiante: Mecatronica
// Fecha creación: 01/10/2025
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void lanzarMoneda(int N)
{
    int caras=0, cruces=0;
    srand(time(0));
    for(int i=0;i<N;i++)
    {
        int r = rand()%2; // 0 o 1
        if(r==0) caras++;
        else cruces++;
    }
    cout << "Caras: " << (caras*100.0)/N <<endl;
    cout << "Cruces: " << (cruces*100.0)/N << endl;
}

int main(){
    int n;
    cout << "Ingrese numero de lanzamientos: ";
    cin >> n;
    lanzarMoneda(n);
    return 0;
}
