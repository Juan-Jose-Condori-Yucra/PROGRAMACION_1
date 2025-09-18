// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 17/09/2025
// Número de ejercicio: 2
#include <iostream>
#include <cmath>
using namespace std;
double calcular_volumen(double radio, double altura=10)
{
    return M_PI*radio*radio*altura;
}
int main ()
{
    char opc;
    double r,h;
    cout<<"Ingrese el radio: ";
    cin>> r;
    cout<<"Desea ingresar altura? (s/n): ";
    cin>>opc;

    if (opc== 's'|| opc=='s')
    {
        cout<<"Ingrese la altura: ";
        cin>>h;
        cout<<"Volumen del cilindro = "<<calcular_volumen(r,h)<<endl;
    }
    else
    {
        cout<<"Volumen del cilindro (altura por defecto=10) = "<<calcular_volumen(r)<<endl;
    }
}
