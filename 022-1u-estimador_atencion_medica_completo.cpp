#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int anios, claseServicio, turnoNoche = 0;
    double valorAtencion = 0.0;
    double rebajaSenior = 0.0;
    double sobrecostoNoche = 0.0;
    double cobroTotal = 0.0;

    cout << "CALCULADORA DE TRIAJE Y COSTOS DE CONSULTA MEDICA" << endl;
    cout << "Ingrese su edad: ";
    cin >> anios;

    cout << "Es horario de emergencia nocturna? (1 = Si, 0 = No): " << endl;
    cin >> turnoNoche;

    if (anios <= 0) {
        cout << "ERROR, la edad debe ser un valor positivo" << endl;
        return 1;
    }

    cout << "Seleccione el tipo de servicio" << endl;
    cout << "1: Medicina General ($30.00)" << endl;
    cout << "2: Pediatria ($45.00)" << endl;
    cout << "3: Cardiologia ($70.00)" << endl;
    cout << "4: Traumatologia ($60.00)" << endl;
    cout << "OPCION: ";
    cin >> claseServicio;

    switch (claseServicio) {
        case 1: valorAtencion = 30.00; break;
        case 2: valorAtencion = 45.00; break;
        case 3: valorAtencion = 70.00; break;
        case 4: valorAtencion = 60.00; break;
        default: cout << "ERROR: Opcion del servicio no valida" << endl; return 1;
    }

    if (claseServicio == 2 && anios >= 18) {
        cout << "El paciente tiene 18 anos o mas, debe ser atendido en Medicina General." << endl;
    }

    if (anios >= 65) rebajaSenior = valorAtencion * 0.25;
    if (turnoNoche == 1) sobrecostoNoche = valorAtencion * 0.20;

    cobroTotal = (valorAtencion - rebajaSenior) + sobrecostoNoche;

    cout << fixed << setprecision(2);
    cout << "Costo del servicio: $" << valorAtencion << endl;
    cout << "Descuento aplicado: $" << rebajaSenior << endl;
    cout << "Recargo nocturno: $" << sobrecostoNoche << endl;
    cout << "Monto final a pagar: $" << cobroTotal << endl;

    return 0;
}
