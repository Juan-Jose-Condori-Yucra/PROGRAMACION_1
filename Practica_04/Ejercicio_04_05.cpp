// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 17/09/2025
// Número de ejercicio: 5
#include <iostream>
using namespace std;

double CalcularSalario(int horas, double tarifa, double bono)
{
    double salario = 0, bonificacion = 0;

    if (horas <= 8)
    {
        salario = horas * tarifa;
    }
    else
    {
        salario = 8 * tarifa; // las primeras 8 horas normales
        int horasExtra = horas - 8;
        bonificacion = horasExtra * bono;
        salario += horasExtra * tarifa + bonificacion;
    }

    cout << "Salario total: " << salario << endl;
    cout << "Bonificacion: " << bonificacion << endl;

    return salario;
}

int main()
{
    int horas;
    double tarifa, bono;

    cout << "Ingrese horas trabajadas: ";
    cin >> horas;
    cout << "Ingrese tarifa por hora: ";
    cin >> tarifa;
    cout << "Ingrese bonificacion por hora extra: ";
    cin >> bono;

    CalcularSalario(horas, tarifa, bono);

    return 0;
}
