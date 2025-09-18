// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Carnet: 12846096 P.T.
// Carrera del estudiante: Ingeniería de Mecatronica
// Fecha creación: 17/09/2025
// Número de ejercicio: 9
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int GenerarPrecio() {
    return 20 + rand() % 31;
}

double Redondear2(double x) {
    return (int)(x * 100 + 0.5) / 100.0;
}

double SueldoBasePorAntiguedad(int antiguedadYears) {
    if (antiguedadYears < 0) antiguedadYears = 0;
    return 500.0 + antiguedadYears * 100.0;
}
double CalcularTotalVendidoPorVendedora(int productosPorVendedora) {
    double total = 0.0;
    for (int i = 0; i < productosPorVendedora; ++i) {
        int precio = GenerarPrecio();
        total += precio;
    }
    return total;
}
double CalcularComision(double totalVendido) {
    return totalVendido * 0.10;
}
double CalcularSueldoTotal(double sueldoBase, double comision) {
    return sueldoBase + comision;
}

int main() {
    srand(time(0));

    int n;
    const int productosPorVendedora = 10;

    cout << "Ingrese la cantidad de vendedoras (n): ";
    cin >> n;
    if (n <= 0) {
        cout << "Cantidad invalida." << endl;
        return 1;
    }

    double totalAPagarTodas = 0.0;
    double totalComisionesTodas = 0.0;

    cout << "\n---- Pago de sueldos por vendedora ----\n";

    for (int i = 1; i <= n; ++i) {
        int antiguedad;
        cout << "\nVendedora #" << i << " - ingrese antiguedad en anios: ";
        cin >> antiguedad;

        double sueldoBase = SueldoBasePorAntiguedad(antiguedad);
        double totalVendido = CalcularTotalVendidoPorVendedora(productosPorVendedora);
        double comision = CalcularComision(totalVendido);
        double sueldoTotal = CalcularSueldoTotal(sueldoBase, comision);
        totalAPagarTodas += sueldoTotal;
        totalComisionesTodas += comision;
        cout << "  Sueldo base: " << Redondear2(sueldoBase) << " Bs\n";
        cout << "  Total vendido (10 productos generados aleatoriamente): "
             << Redondear2(totalVendido) << " Bs\n";
        cout << "  Comision (10%): " << Redondear2(comision) << " Bs\n";
        cout << "  Sueldo total a pagar: " << Redondear2(sueldoTotal) << " Bs\n";
    }

    cout << "\n---- Resumen general ----\n";
    cout << "Total comisiones (todas): " << Redondear2(totalComisionesTodas) << " Bs";
    cout << "Total a pagar (sueldo base + comisiones, todas): " << Redondear2(totalAPagarTodas) << " Bs";

    return 0;
}
