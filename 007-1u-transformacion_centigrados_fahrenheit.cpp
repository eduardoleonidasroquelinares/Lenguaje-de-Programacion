#include <iostream>
using namespace std;

int main() {
    float gradosF, gradosC;

    cout << "Sistema de conversion de grados Celsius a grados Fahrenheit" << endl;
    cout << "Ingrese grados Celsius: ";
    cin >> gradosC;

    gradosF = (gradosC * 1.8) + 32;

    cout << "La conversion a grados Fahrenheit es: " << gradosF;

    return 0;
}
