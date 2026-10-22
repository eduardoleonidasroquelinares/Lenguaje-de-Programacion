#include <iostream>
using namespace std;

int main() {
    const double NUM_PI = 3.14159265358979;
    double rad, superficie;

    cout << "Ingrese el radio del circulo: ";
    cin >> rad;

    superficie = NUM_PI * rad * rad;

    cout << "El area del circulo es: " << superficie << endl;

    return 0;
}
