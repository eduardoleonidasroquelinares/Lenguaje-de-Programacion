#include <iostream>
using namespace std;

int main() {
    int acum = 0;

    cout << "SUMAR NUMEROS DEL 1 AL 10" << endl;

    for (int k = 1; k <= 10; k++) {
    	cout << k << endl;
        acum = acum + k;
    }

    cout << "La suma es: " << acum << endl;

    return 0;
}
