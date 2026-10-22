#include <iostream>

using namespace std;

int main()
{
    int cant = 0, k;
    double acum = 0, calif;

    cout << "Ingrese la cantidad de notas: "<<endl;
    cin >> cant;

    double califs[cant];

    for (k = 0; k < cant; k++) {
        cout << "Ingrese la nota " << k + 1 << ": "<<endl;
        cin >> calif;
        califs[k] = calif;
        acum = acum + calif;
    }

    cout << "LA LISTA DE TODAS LAS NOTAS"<<endl;
    for (k = 0; k < cant; k++) {
        cout << "Nota en indice [" << k << "]: " << califs[k] << endl;
    }

    cout << "El promedio de notas es: " << acum / cant << endl;

    return 0;
}
