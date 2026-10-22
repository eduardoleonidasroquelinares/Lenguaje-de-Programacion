#include <iostream>
using namespace std;

int main() {
    float baseFig, estatura, superficie;

    cout << "Sistema de calculo de area de un triangulo" << endl;
    cout << "Ingrese la base: ";
    cin >> baseFig;
    cout << "Ingrese la altura: ";
    cin >> estatura;

    superficie = (baseFig * estatura) / 2;

    cout << "El area del triangulo es: " << superficie << endl;

    return 0;
}
