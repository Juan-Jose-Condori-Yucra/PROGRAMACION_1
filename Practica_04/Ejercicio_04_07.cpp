// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 17/09/2025
// Número de ejercicio: 7
#include <iostream>
using namespace std;

// Función para calcular el MCD usando el Algoritmo de Euclides
int MCD(int m, int n)
{
    while (n != 0)
    {
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}
// Función para calcular el MCM usando la relación con el MCD
int MCM(int m, int n)
{
    return (m * n) / MCD(m, n);
}
int main()
{
    int m, n;
    cout << "Ingrese dos numeros enteros positivos: ";
    cin >> m >> n;

    if (m <= 0 || n <= 0)
    {
        cout << "Los numeros deben ser positivos." << endl;
        return 1;
    }

    int mcd = MCD(m, n);
    int mcm = MCM(m, n);

    cout << "El MCD de " << m << " y " << n << " es: " << mcd << endl;
    cout << "El MCM de " << m << " y " << n << " es: " << mcm << endl;

    return 0;
}
