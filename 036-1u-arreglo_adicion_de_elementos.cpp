#include <iostream>

using namespace std;

int main() {
    int rens, cols;

    cout << "Ingrese el numero de filas: ";
    cin >> rens;
    cout << "Ingrese el numero de columnas: ";
    cin >> cols;

    int tabla[50][50];

    cout << "Ingrese los elementos" << endl;
    for (int k = 0; k < rens; k++) {
        for (int q = 0; q < cols; q++) {
            cout << "A [" << k << "][" << q << "]: ";
            cin >> tabla[k][q];
        }
    }

    for (int k = 0; k < rens; k++) {
        for (int q = 0; q <  cols; q++) {

            cout << tabla[k][q] << "\t";
        }
        cout << endl;
    }

    return 0;
}
