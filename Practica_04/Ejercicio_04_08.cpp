// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 17/09/2025
// Número de ejercicio: 8
#include <iostream>
#include <cstdlib>   // rand, srand
#include <ctime>     // time
using namespace std;
double GenerarPrecio()
{
    return (rand()%(50-20+1))+20;
}

// Función para redondear a 2 decimales sin usar <iomanip>
double Redondear2(double x)
{
    return (int)(x * 100 + 0.5) / 100.0;
}

// Función para calcular el subtotal de n productos
double CalcularSubtotal(int n)
{
    double subtotal = 0;
    cout << "\n--- Lista de precios generados ---\n";
    for (int i = 1; i <= n; i++)
    {
        double precio = GenerarPrecio();
        cout << "Producto " << i << ": " << precio << " Bs" << endl;
        subtotal += precio;
    }
    return subtotal;
}

// Función para calcular el IVA (13%)
double CalcularIVA(double subtotal)
{
    return subtotal * 0.13;
}

// Función para aplicar descuento si el total supera 2500
double AplicarDescuento(double total, double &descuento)
{
    if (total > 2500)
    {
        descuento = total * 0.05;
        return total - descuento;
    }
    descuento = 0;
    return total;
}

int main()
{
    srand(time(0)); // Semilla para números aleatorios

    int n;
    cout << "Ingrese la cantidad de productos vendidos: ";
    cin >> n;

    double subtotal = CalcularSubtotal(n);
    double iva = CalcularIVA(subtotal);
    double descuento;
    double total = AplicarDescuento(subtotal + iva, descuento);

    // Mostrar resultados redondeados a 2 decimales
    cout << "\nSubtotal: " << Redondear2(subtotal) << " Bs" << endl;
    cout << "IVA (13%): " << Redondear2(iva) << " Bs" << endl;
    cout << "Descuento aplicado: " << Redondear2(descuento) << " Bs" << endl;
    cout << "Total a pagar: " << Redondear2(total) << " Bs" << endl;
    cout << "\nMonto a pagar al SIN por IVA: " << Redondear2(iva) << " Bs" << endl;

    return 0;
}

