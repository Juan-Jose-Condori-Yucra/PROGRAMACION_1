// Materia: Programación I, Paralelo 4
// Autor: Juan José Condori Yucra
// Carnet: 12846096
// Carrera del estudiante: Mecatronica
// Fecha creación: 01/10/2025
#include <iostream>
using namespace std;

bool esPrimo(int n)
{
    if(n < 2) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int num, suma=0, cont=0;
    cout << "Ingrese numeros (0 o negativo para terminar): "<<endl;
    while(true)
    {
        cin >> num;
        if(num <= 0) break;
        if(esPrimo(num))
        {
            suma += num;
            cont++;
        }
    }
    if(cont>0) cout << "Promedio de primos = " << (double)suma/cont << endl;
    else cout << "No se ingresaron primos.\n";
    return 0;
}
