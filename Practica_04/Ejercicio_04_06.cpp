// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 17/09/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;
bool esPrimo(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    int suma = 0, aux = numero;
    while (aux != 0)
    {
        int digito = aux % 10;
        if (digito != 0)
        {
            suma += digito;
        }
        aux /= 10;
    }
    cout << "La suma de los digitos distintos de cero es: " << suma << endl;

    if (esPrimo(suma))
        cout << "La suma (" << suma << ") es un numero primo"<< endl;
    else
        cout << "La suma (" << suma << ") NO es un numero primo"<< endl;
    return 0;
}

