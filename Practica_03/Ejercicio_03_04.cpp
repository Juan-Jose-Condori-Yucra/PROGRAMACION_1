//Materia: Programaci�n I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingenier�a de Mecatronica
// Fecha creaci�n: 11/09/2025
// N�mero de ejercicio: 4
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
