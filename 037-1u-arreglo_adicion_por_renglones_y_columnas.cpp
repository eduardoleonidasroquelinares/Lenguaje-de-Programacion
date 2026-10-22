#include <iostream>

using namespace std;

int main() {
    int rens, cols;

    cout << "Ingrese el numero de filas: ";
    cin >> rens;
    cout << "Ingrese el numero de columnas: ";
    cin >> cols;

    int tabla[50][50];
    int acumCol[50] = {0};

    cout << "Ingreso de elementos";
    for (int k = 0; k < rens; k++) {
        for (int q = 0; q < cols; q++) {
            cout << "Elemento [" << k << "][" << q << "]: ";
            cin >> tabla[k][q];
            acumCol[q] += tabla[k][q];
        }
    }

    cout << "Matriz y suma por filas" << endl ;
    for (int k = 0; k < rens; k++) {
        int acumFila = 0;
        for (int q = 0; q < cols; q++) {
            cout << tabla[k][q] << "\t";
            acumFila += tabla[k][q];
        }
        cout << "| Suma fila: " << acumFila << endl;
    }

    cout << "Suma de cada columna:\n";
    for (int q = 0; q < cols; q++) {
        cout << acumCol[q] << "\t";
    }
    cout << endl;

    return 0;
}
