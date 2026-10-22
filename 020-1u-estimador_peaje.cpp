#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double masaVeh;
    int clase;
    double tarifaClase = 0.0;
    double rebajaTelepeaje = 0.0;
    double sancionPeso = 0.0;
    int tieneTelepeaje = 0;
    double cobroTotal = 0.0;

    cout << "CALCULADORA DE PEAJE Y EXCESO DE CARGA" << endl;
    cout << "Ingrese el peso total del vehiculo en toneladas: ";
    cin >> masaVeh;

    if (masaVeh <= 0) {
        cout << "ERROR, el peso del vehiculo debe ser un valor positivo" << endl;
        return 1;
    }

    cout << "Cuenta con pase electronico de telepeaje (1 = Si, 0 = No): " << endl;
    cin >> tieneTelepeaje;

    cout << "Seleccione la categoria del vehiculo" << endl;
    cout << "1: Auto / camioneta ($3.00)" << endl;
    cout << "2: Autobus ($6.00)" << endl;
    cout << "3: Camion de carga ($10.00)" << endl;
    cout << "OPCION: ";
    cin >> clase;

    switch (clase) {
        case 1: tarifaClase = 3.00; break;
        case 2: tarifaClase = 6.00; break;
        case 3: tarifaClase = 10.00; break;
        default: cout << "ERROR: Opcion de categoria no valida" << endl; return 1;
    }

    if (clase == 3 && masaVeh >= 12) {
        sancionPeso = (masaVeh - 12) * 2.5;
    }

    if (tieneTelepeaje == 1) {
        rebajaTelepeaje = tarifaClase * 0.15;
    }

    cobroTotal = (tarifaClase - rebajaTelepeaje) + sancionPeso;

    cout << fixed << setprecision(2);
    cout << "--------------- Desglose ---------------" << endl;
    cout << "Costo base de la categoria: $" << tarifaClase << endl;
    cout << "Descuento aplicado por pase de Telepeaje: $" << rebajaTelepeaje << endl;
    cout << "Penalizacion por exceso de peso: $" << sancionPeso << endl;
    cout << "Monto final a pagar: $" << cobroTotal << endl;

    return 0;
}
