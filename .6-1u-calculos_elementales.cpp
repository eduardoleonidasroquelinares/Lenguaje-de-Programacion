#include <iostream>
using namespace std;

int main() {
    float primero, segundo, acum, diferencia, producto, cociente;

    cout << "Sistema de operaciones basicas" << endl;
    cout << "Ingresa el primer numero: ";
    cin >> primero;
    cout << "Ingresa el segundo numero: ";
    cin >> segundo;

    acum = primero + segundo;
    diferencia = primero - segundo;
    producto = primero * segundo;

    cout << "\nEl resultado de la suma es: " << acum << endl;
    cout << "El resultado de la resta es: " << diferencia << endl;
    cout << "El resultado de la multiplicacion es: " << producto << endl;

    if (segundo != 0) {
        cociente = primero / segundo;
        cout << "El resultado de la division es: " << cociente << endl;
    } else {
        cout << "El resultado de la division es: No se puede dividir entre cero" << endl;
    }

    return 0;
}
