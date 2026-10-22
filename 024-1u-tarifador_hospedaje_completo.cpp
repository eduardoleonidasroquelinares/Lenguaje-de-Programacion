#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int estancia = 0, huespedes = 0, claseCuarto = 0, paquete = 0;
    double tarifaClase = 0.0, rebaja = 0.0, recargoHues = 0.0, costoPaquete = 0.0;
    double cobroTotal = 0.0, cobroFinal = 0.0;

    cout << "TARIFICADOR DE RESERVAS DE HOTEL" << endl;
    cout << "Ingrese el numero de noches de estadia: ";
    cin >> estancia;

    if (estancia <= 0) {
        cout << "ERROR, el numero de noches debe ser un valor positivo" << endl;
        return 1;
    }

    cout << "Ingrese el numero de huespedes: ";
    cin >> huespedes;

    if (huespedes < 1) {
        cout << "ERROR, el numero de huespedes debe ser al menos 1" << endl;
        return 1;
    }

    cout << "Plan de alimentacion (1 = Solo desayuno, 2 = Pension Completa): " << endl;
    cin >> paquete;

    if (paquete != 1 && paquete != 2) {
        cout << "ERROR: plan de alimentacion no valido" << endl;
        return 1;
    }

    cout << "Seleccione el tipo de habitacion" << endl;
    cout << "1: Habitacion Estandar (S/.50.00 por noche)" << endl;
    cout << "2: Habitacion Doble (S/.80.00 por noche)" << endl;
    cout << "3: Suite Ejecutiva (S/.140.00 por noche)" << endl;
    cout << "OPCION: ";
    cin >> claseCuarto;

    switch (claseCuarto) {
        case 1: tarifaClase = 50.00; break;
        case 2: tarifaClase = 80.00; break;
        case 3: tarifaClase = 140.00; break;
        default: cout << "ERROR: tipo de habitacion no valida" << endl; return 1;
    }

    if (claseCuarto == 1 && huespedes > 1) recargoHues = (huespedes - 1) * 15;
    if (claseCuarto == 2 && huespedes > 2) recargoHues = (huespedes - 2) * 15;
    if (claseCuarto == 3 && huespedes > 3) recargoHues = (huespedes - 3) * 15;

    if (paquete == 2) costoPaquete = 25 * huespedes;

    cobroTotal = ((tarifaClase + costoPaquete) + recargoHues) * estancia;

    if (estancia > 5) rebaja = cobroTotal * 0.12;

    cobroFinal = cobroTotal - rebaja;

    cout << fixed << setprecision(2);
    cout << "--------------- Desglose ---------------" << endl;

    if (claseCuarto == 1) cout << "Tipo de habitacion : Habitacion Estandar " << endl;
    if (claseCuarto == 2) cout << "Tipo de habitacion : Habitacion Doble " << endl;
    if (claseCuarto == 3) cout << "Tipo de habitacion : Suite Ejecutiva " << endl;

    cout << "Subtotal de alojamiento: S/." << tarifaClase * estancia << endl;

    if (claseCuarto == 1 && huespedes > 1) cout << "Recargo por huespedes adicionales: S/." << recargoHues * estancia << endl;
    if (claseCuarto == 2 && huespedes > 2) cout << "Recargo por huespedes adicionales: S/." << recargoHues * estancia << endl;
    if (claseCuarto == 3 && huespedes > 3) cout << "Recargo por huespedes adicionales: S/." << recargoHues * estancia << endl;

    cout << "Costo de alimentacion: S/." << costoPaquete * estancia << endl;

    if (estancia > 5) {
        cout << "Descuento por estadia larga: S/." << rebaja << endl;
        cout << "Monto total a pagar: S/." << cobroFinal << endl;
    } else {
        cout << "Monto total a pagar: S/." << cobroTotal << endl;
    }

    return 0;
}
