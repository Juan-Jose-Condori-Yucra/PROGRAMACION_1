//Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 11/09/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;

bool esCapicua(int n)
{
    int original = n, invertido = 0, dig;
    while (n > 0)
        {
        dig = n % 10;
        invertido = invertido * 10 + dig;
        n /= 10;
    }
    return original == invertido;
}

int main()
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (esCapicua(num))
        cout << num << " es capicua." << endl;
    else
        cout << num << " no es capicua." << endl;
    return 0;
}
