//Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 11/09/2025
// Número de ejercicio: 4
#include <iostream>
using namespace std;

double calcularIMC(double peso, double altura)
{
    return peso / (altura * altura);
}

int main()
{
    double peso, altura;
    cout << "Ingrese peso (kg): ";
    cin >> peso;
    cout << "Ingrese altura (m): ";
    cin >> altura;

    cout << "IMC: " << calcularIMC(peso, altura) << endl;
    return 0;
}
