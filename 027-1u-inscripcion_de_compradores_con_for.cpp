#include <iostream>
using namespace std;

int main() {
    double acum = 0, abono;
    int compradoresVip = 0;

    cout << "REGISTRO DE CLIENTES" << endl;

    for (int k = 1; k <= 8; k++) {
        cout << "Ingrese el monto de pago " << k << ": " << endl;
        cin >> abono;

        acum = acum + abono;

        if (abono > 100) {
            compradoresVip += 1;
        }
    }

    double media = acum / 8;

    cout << "Total acumulado en caja: S/." << acum << endl;
    cout << "El promedio de consumo es: S/." << media << endl;
    cout << "Cantidad total de clientes preferenciales: " << compradoresVip << endl;

    return 0;
}
