// Autor: Juan José Condori Yucra
// Carnet: 12846096
// Carrera del estudiante: Mecatronica
// Fecha creación: 01/10/2025
#include <iostream>
using namespace std;

bool esPar(int n)
{
    return n % 2 == 0;
}

int main()
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if(esPar(num)) cout << "Es par"<<endl;
    else cout << "Es impar"<<endl;
    return 0;
}
