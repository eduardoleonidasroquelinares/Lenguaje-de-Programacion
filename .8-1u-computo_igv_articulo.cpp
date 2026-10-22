#include <iostream>
using namespace std;

int main() {
    const double TASA_IGV = 0.18;
    double precioInicial, impuestoIgv, precioNeto;

    cout << "Ingrese el precio base del producto: ";
    cin >> precioInicial;

    impuestoIgv = precioInicial * TASA_IGV;
    precioNeto = precioInicial + impuestoIgv;

    cout << "El IGV (18%) es: " << impuestoIgv << endl;
    cout << "El precio final con IGV es: " << precioNeto << endl;

    return 0;
}
