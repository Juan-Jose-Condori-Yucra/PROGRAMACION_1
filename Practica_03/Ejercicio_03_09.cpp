//Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 11/09/2025
// Número de ejercicio: 9
#include <iostream>
using namespace std;

void tiempoTrabajo(int minutos)
{
    int jornada = 8 * 60;
    if (minutos > jornada)
        cout << "Trabajo " << minutos - jornada << " minutos extra." << endl;
    else if (minutos < jornada)
        cout << "Debe " << jornada - minutos << " minutos a la empresa." << endl;
    else
        cout << "Cumplio justo la jornada laboral." << endl;
}

int main()
{
    int minutos;
    cout << "Ingrese tiempo trabajado (min): ";
    cin >> minutos;
    tiempoTrabajo(minutos);
    return 0;
}
