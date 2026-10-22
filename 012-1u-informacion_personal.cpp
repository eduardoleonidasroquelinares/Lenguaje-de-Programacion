#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombres, apellidos;
    int anios;

    cout << "Ingresa tu nombre: ";
    cin >> nombres;
    cout << "Ingresa tu apellido: ";
    cin >> apellidos;
    cout << "Ingresa tu edad: ";
    cin >> anios;

    cout << "Nombre completo: " << nombres << " " << apellidos << endl;
    cout << "Edad: " << anios << " anios" << endl;

    return 0;
}
