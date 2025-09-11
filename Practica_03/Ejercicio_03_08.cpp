//Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 11/09/2025
// Número de ejercicio: 8
#include <iostream>
using namespace std;

void descomponerDinero(int monto)
{
    int valores[] = {200, 100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 8; i++)
    {
        int cantidad = monto / valores[i];
        monto %= valores[i];
        if (cantidad > 0)
            cout << cantidad << (valores[i] >= 5 ? " billete(s) de " : " moneda(s) de ")
                 << valores[i] << " Bs." << endl;
    }
}

int main()
{
    int monto;
    cout << "Ingrese monto en Bs: ";
    cin >> monto;
    descomponerDinero(monto);
    return 0;
}
