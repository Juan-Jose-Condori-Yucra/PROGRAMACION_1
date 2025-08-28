// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 27/08/2025
// Número de ejercicio: 7
#include <iostream>
using namespace std;
int main ()
{
    char letra;

    cout<<"Ingrese una letra: ";
    cin>>letra;

    if ((letra>='a' && letra<='z')|| (letra>='A' && letra<='Z'))
    {
        if (letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'||
            letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U')
        {
            cout<<"La letra "<<letra<<" es una vocal";
        }
        else
        {
             cout<<"La letra "<<letra<<" es una constante";
        }
    }
    else
    {
        cout<<"Es un caracter especial";
    }

    return 0;
}
