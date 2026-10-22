#include <iostream>
using namespace std;

int main() {
    int cant;
    long long coefA = 0, coefB = 1, coefC;
    int k = 1;

    cout << "Ingrese la cantidad de terminos: ";
    cin >> cant;

    if (cant > 0) {
        do {
            if (k == 1) {
                cout << coefA << " ";
            } else if (k == 2) {
                cout << coefB << " ";
            } else {
                coefC = coefA + coefB;
                coefA = coefB;
                coefB = coefC;
                cout << coefC << " ";
            }
            k++;
        } while (k <= cant);
    } else {
        cout << "Por favor, ingrese un numero mayor a 0." << endl;
    }

    return 0;
}
