#include <iostream>
using namespace std;

int main() {
    double acum = 0;
    int contCeros=0, contPares=0, contNones=0, cant=0;

    cout << "NUMEROS PARES E IMPARES" << endl;

    for (int k = 1; k <= 10; k++) {
    	cout << "Ingrese el numero " << k << ": "<<endl;
    	cin >> cant;
        acum = acum + cant;

        if (cant == 0) {
            contCeros += 1;
        }

        if (cant%2 == 0) {
            contPares += 1;
        }

        if (cant%2 == 1) {
            contNones += 1;
        }
    }

    cout << "Suma total de numeros : " << acum << endl;
	cout << "Total de numeros pares : " << contPares << endl;
	cout << "Total de numeros impares : " << contNones << endl;
	cout << "Total de numeros nulos : " << contCeros << endl;

    return 0;
}
