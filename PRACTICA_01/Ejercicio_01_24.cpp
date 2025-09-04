// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 03/09/2025
// Número de ejercicio:24
#include <iostream>
using namespace std;
int main ()
{
    int opcion;
    do
    {
        cout<<"=== MENU ==="<<endl;
        cout<<"1. Opcion 1"<<endl;
        cout<<"2. Opcion 2"<<endl;
        cout<<"3. Opcion 3"<<endl;
        cout<<"0. Salir "<<endl;
        cout<<"Elija una opcion: ";
        cin>> opcion;

        switch (opcion)
        {
            case 1: cout<<"Has seleccionado la opcion 1"<<endl;
            break;
            case 2: cout<<"Has seleccionado la opcion 2"<<endl;
            break;
            case 3: cout<<"Has seleccionado la opcion 3"<<endl;
            break;
            case 0: cout<<"Saliendo del programa. "<<endl;
            break;
            default: cout<<"Opcion invalida intente de nuevo."<<endl;
        }
    }
    while (opcion !=0);

    return 0;
}
