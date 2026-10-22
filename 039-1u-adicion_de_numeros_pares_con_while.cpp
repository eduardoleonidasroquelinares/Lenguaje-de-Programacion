#include <iostream>
using namespace std;

int main() {
    int conteo = 1;
    int acum = 0;

    while(conteo <= 10) {
        cout << "Numero: " << conteo << endl;
        if (conteo%2 == 0)
		acum = acum + conteo;
        conteo = conteo + 1;
    }

    cout << "La suma total  de los numeros pares es: " << acum << endl;

    return 0;
}
