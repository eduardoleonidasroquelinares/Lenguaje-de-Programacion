#include <iostream>
using namespace std;

int main() {
    double tope = 0, piso = 999, acum = 0, media = 0, pesoBot = 0;
    int livianos = 0, aceptados = 0;

    cout << "CONTROL DE CALIDAD EN PLANTA INDUSTRIAL" << endl;

    for (int k = 1; k <= 8; k++) {
        cout << "Ingrese el peso de la botella " << k << ": ";
        cin >> pesoBot;

        if (pesoBot <= 0) {
            cout << "El peso ingresado debe ser mayor a 0" << endl;
            continue;
        }

        acum = acum + pesoBot;
        aceptados++;

        if (pesoBot > tope) tope = pesoBot;
        if (pesoBot < piso) piso = pesoBot;
        if (pesoBot < 490) livianos += 1;
    }

    if (aceptados > 0) {
        media = acum / aceptados;
    } else {
        media = 0;
    }

    cout << "Suma total de pesos: " << acum << endl;
    cout << "Promedio de pesos: " << media << endl;
    cout << "Peso minimo: " << piso << endl;
    cout << "Peso maximo: " << tope << endl;
    cout << "Total de botellas con bajo peso: " << livianos << endl;

    return 0;
}
