#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double catAdy, catOpu, hipot;

    cout << "Ingrese el cateto ca: ";
    cin >> catAdy;
    cout << "Ingrese el cateto co: ";
    cin >> catOpu;

    hipot = sqrt(catAdy * catAdy + catOpu * catOpu);

    cout << "La hipotenusa es: " << hipot << endl;

    return 0;
}
