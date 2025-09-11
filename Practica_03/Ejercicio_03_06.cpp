//Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 11/09/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;

bool esBisiesto(int anio)
{
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int diasMes(int anio, int mes)
{
    if (mes == 2) return esBisiesto(anio) ? 29 : 28;
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) return 30;
    return 31;
}

int main()
{
    int anio, mes;
    cout << "Ingrese anio: "; cin >> anio;
    cout << "Ingrese mes (1-12): "; cin >> mes;
    cout << "Dias: " << diasMes(anio, mes) << endl;
    return 0;
}
