#include <iostream>
using namespace std;

int main() {
    double baseFig, estatura, superficie, contorno;

    cout << "Ingrese la base del rectangulo: ";
    cin >> baseFig;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> estatura;

    superficie = baseFig * estatura;
    contorno = 2 * (baseFig + estatura);

    cout << "El area del rectangulo es: " << superficie << endl;
    cout << "El perimetro del rectangulo es: " << contorno << endl;

    return 0;
}
