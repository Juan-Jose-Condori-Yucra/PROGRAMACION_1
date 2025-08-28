// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 27/08/2025
// Número de ejercicio: 10
#include <iostream>
using namespace std;
int main ()
{
    int nota=0;

    cout<<"Ingrese una nota entre (0-100):";
    cin>> nota;
    if (nota>0 && nota<=100)
    {
        if (nota>=51)
        {
            if (nota<60)
            {
                cout<<"Aprobado, Calificacion 'C'";
            }
            else if (nota<70)
            {
                cout<<" Aprobado, Calificacion 'C+'";
            }
            else if (nota<80)
            {
                cout<<"Aprobado, Calificacion 'B'";
            }
            else if (nota<90)
            {
                cout<<"Aprobado, Calificacion 'B+'";
            }
            else if (nota<95)
            {
                cout<<"Aprobado, Calificacion 'A'";
            }
            else if (nota<100)
            {
                cout<<"Aprobado, Calificacion 'A+'";
            }
        }
        else
        {
            cout<<"Reprobado :(";
        }
    }
    else
    {
        cout<<"Ingrese un numero entre el rango permitido";
    }

    return 0;
}
