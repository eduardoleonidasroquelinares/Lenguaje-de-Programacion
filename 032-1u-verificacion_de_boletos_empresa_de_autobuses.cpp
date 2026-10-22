#include <iostream>
using namespace std;

int main() {
    double acum = 0, abono;
    int tarifaIntegra = 0;

    cout << "EMPRESA DE BUSES RAPIDO DEL SUR" << endl;
    cout << "CONTROL DE PASAJES" << endl;

    for (int k = 1; k <= 10; k++) {
        cout << "Ingrese el monto pagado por el pasajero " << k << ": ";
        cin >> abono;

        acum = acum + abono;

        if (abono == 15) {
            tarifaIntegra += 1;
        }
    }

    double media = acum / 10;

    cout << "\n--- Resumen del viaje ---" << endl;
    cout << "Dinero total acumulado en caja: S/." << acum << endl;
    cout << "Costo promedio pagado por pasajero: S/." << media << endl;
    cout << "Cantidad total de pasajeros con tarifa completa: " << tarifaIntegra << endl;

    return 0;
}
