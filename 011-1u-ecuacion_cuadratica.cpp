#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

int main() {
    double coefA, coefB, coefC;

    cout << "=== Resolucion de ecuaciones de segundo grado (ax^2 + bx + c = 0) ===\n";
    cout << "Ingrese el coeficiente a: ";
    cin >> coefA;
    cout << "Ingrese el coeficiente b: ";
    cin >> coefB;
    cout << "Ingrese el coeficiente c: ";
    cin >> coefC;

    if (coefA == 0) {
        if (coefB == 0) {
            if (coefC == 0)
                cout << "\nCualquier valor de x es solucion (0 = 0).\n";
            else
                cout << "\nNo tiene solucion (ecuacion inconsistente).\n";
        } else {
            double raiz = -coefC / coefB;
            cout << "\nEs una ecuacion lineal. Solucion: x = " << raiz << "\n";
        }
        return 0;
    }

    double delta = coefB * coefB - 4 * coefA * coefC;

    cout << "\nDiscriminante: " << delta << "\n";

    if (delta > 0) {
        double raizUno = (-coefB + sqrt(delta)) / (2 * coefA);
        double raizDos = (-coefB - sqrt(delta)) / (2 * coefA);
        cout << "Raices reales y distintas:\n";
        cout << "x1 = " << raizUno << "\n";
        cout << "x2 = " << raizDos << "\n";
    } else if (delta == 0) {
        double raiz = -coefB / (2 * coefA);
        cout << "Raiz real doble:\n";
        cout << "x = " << raiz << "\n";
    } else {
        complex<double> raizUno((-coefB) / (2 * coefA),  sqrt(-delta) / (2 * coefA));
        complex<double> raizDos((-coefB) / (2 * coefA), -sqrt(-delta) / (2 * coefA));
        cout << "Raices complejas conjugadas:\n";
        cout << "x1 = " << raizUno.real() << " + " << raizUno.imag() << "i\n";
        cout << "x2 = " << raizDos.real() << " - " << abs(raizDos.imag()) << "i\n";
    }

    return 0;
}
