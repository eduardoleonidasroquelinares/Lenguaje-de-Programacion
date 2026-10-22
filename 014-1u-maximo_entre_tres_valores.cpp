#include <iostream>
using namespace std;

int main() {
    int coefA, coefB, coefC;

    cout << "Ingrese el valor de A: ";
    cin >> coefA;
    cout << "Ingrese el valor de B: ";
    cin >> coefB;
    cout << "Ingrese el valor de C: ";
    cin >> coefC;

    if (coefA >= coefB) {
        if (coefA >= coefC) {
            cout << "El numero mayor es: " << coefA << endl;
        } else {
            cout << "El numero mayor es: " << coefC << endl;
        }
    }
    else {
        if (coefC >= coefB) {
            cout << "El numero mayor es: " << coefC << endl;
        } else {
            cout << "El numero mayor es: " << coefB << endl;
        }
    }

    return 0;
}
