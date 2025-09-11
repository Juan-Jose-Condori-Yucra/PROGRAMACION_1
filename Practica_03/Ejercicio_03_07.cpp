//Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 11/09/2025
// Número de ejercicio: 7
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generarAlumnos(int N)
{
    int edad, mayores18 = 0, masAltos = 0;
    double altura, sumaEdades = 0, sumaAlturas = 0;

    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        edad = rand() % 35 + 1;
        altura = rand() % 81 + 120; // 120 - 200
        cout << "Alumno " << i+1 << " -> Edad: " << edad
             << ", Altura: " << altura << " cm" << endl;
        sumaEdades += edad;
        sumaAlturas += altura;
        if (edad > 18) mayores18++;
        if (altura > 175) masAltos++;
    }

    cout << "Edad media: " << sumaEdades / N << endl;
    cout << "Altura media: " << sumaAlturas / N << endl;
    cout << "Mayores de 18: " << mayores18 << endl;
    cout << "Mas de 1.75m: " << masAltos << endl;
}

int main()
{
    int N;
    cout << "Ingrese numero de alumnos: ";
    cin >> N;
    generarAlumnos(N);
    return 0;
}
