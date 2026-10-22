#include <iostream>
using namespace std;

int main() {
    int conteo = 1;
    int acum = 0;

    while(conteo <= 10) {
        cout << "Numero: " << conteo << endl;
        acum = acum + conteo;
        conteo = conteo + 1;
    }

    cout << "La suma total es: " << acum << endl;

    return 0;
}
