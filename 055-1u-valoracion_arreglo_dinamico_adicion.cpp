#include <iostream>

using namespace std;

int main()
{
    int rens, cols;
    float acum = 0;

    cout << "Ingrese la cantidad de filas: ";
    cin >> rens;
    cout << "Ingrese la cantidad de columnas: ";
    cin >> cols;

    int tabla[rens][cols];

    for (int k = 0; k < rens; k++) {
        for (int q = 0; q < cols; q++) {
            cout << "Ingrese el valor para [" << k << "][" << q << "]: ";
            cin >> tabla[k][q];
            acum+= tabla[k][q];
        }
    }

    cout << endl;

    cout << "ARREGLO BIDIMENSIONAL"<<endl;

    cout << endl;

    for (int k = 0; k < rens; k++) {
        for (int q = 0; q < cols; q++) {
            cout << tabla[k][q] << "\t ";
        }
        cout << endl;
    }

    cout << "La suma de todos los elementos es: " << acum << endl;
}
