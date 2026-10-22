#include <iostream>
using namespace std;

int main() {
    double acum = 0, grados;
    int avisoCalor = 0;

    cout << "TEMPERATURA DE UN INVERNADERO" << endl;
    cout << "Lecturas cada 3 horas (5 registros en total)" << endl;

    for (int k = 1; k <= 5; k++) {
        cout << "Ingrese la temperatura registrada " << k << ": " << endl;
        cin >> grados;

        acum = acum + grados;

        if (grados > 28) {
            avisoCalor += 1;
        }
    }

    double media = acum / 8;

    cout << "El promedio de temperatura es: " << media << "C"<< endl;
    cout << "Cantidad total de alertas por calor extremo: " << avisoCalor << endl;

    return 0;
}
