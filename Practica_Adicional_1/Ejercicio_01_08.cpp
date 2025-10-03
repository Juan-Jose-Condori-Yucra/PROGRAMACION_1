// Autor: Juan José Condori Yucra
// Carnet: 12846096
// Carrera del estudiante: Mecatronica
// Fecha creación: 01/10/2025
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
bool esPrimo(int n)
{
    if(n < 2) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}

void generarNumeros(int N)
{
    srand(time(0));
    int suma=0;
    for(int i=0;i<N;i++)
    {
        int num = 1 + rand()%1000;
        suma += num;
        cout << num;
        if(esPrimo(num)) cout << " *";
        cout << endl;
    }
    cout << "Sumatoria: " << suma << endl;
    cout << "Promedio: " << (double)suma/N << endl;
}

int main()
{
    int n;
    cout << "Ingrese N: ";
    cin >> n;
    generarNumeros(n);
    return 0;
}
