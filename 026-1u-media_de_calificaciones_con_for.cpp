#include <iostream>
using namespace std;

int main() {
    int acum = 0,calif=0,cant;

    cout << "PROMEDIO DE NOTAS" << endl;
    cout << "Leer n notas" << endl;
    cin >> cant;

    for (int k = 1; k <= cant; k++) {
    	cout << "Ingrese la nota " << k << ": "<<endl;
    	cin >> calif;
        acum = acum + calif;
    }

    cout << "La suma de notas es: " << acum << endl;
	cout << "El promedio de notas es: " << acum/cant << endl;

    return 0;
}
