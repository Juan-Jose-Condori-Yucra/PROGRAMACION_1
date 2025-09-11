//Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 11/09/2025
// Número de ejercicio: 11
#include <iostream>
using namespace std;

int retirarDinero(int saldo, int cantidad)
{
    if (cantidad <= 0)
    {
        cout << "Monto invalido. Debe ser mayor que 0." << endl;
        return saldo;
    }
    if (cantidad > saldo)
    {
        cout << "Saldo insuficiente." << endl;
        return saldo;
    }
    if (cantidad % 10 != 0)
    {
        cout << "El monto debe ser multiplo de 10." << endl;
        return saldo;
    }

    saldo -= cantidad;
    cout << "Retiro exitoso. Nuevo saldo: " << saldo << " Bs." << endl;
    return saldo;
}

int main()
{
    int saldo = 1000;
    int retiro;
    cout << "Saldo actual: " << saldo << " Bs." << endl;
    cout << "Ingrese monto a retirar: ";
    cin >> retiro;

    saldo = retirarDinero(saldo, retiro);

    return 0;
}
