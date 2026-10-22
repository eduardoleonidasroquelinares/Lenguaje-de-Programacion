#include <iostream>
using namespace std;

int main() {
    const double NUM_PI = 3.14159265358979;
    double rad, superficie;

    cout << "Ingrese el radio de la esfera: ";
    cin >> rad;

    superficie = 4 * NUM_PI * rad * rad;

    cout << "El area de la esfera es: " << superficie << endl;

    return 0;
}
