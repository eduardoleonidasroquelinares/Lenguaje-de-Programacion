#include <iostream>
using namespace std;

int main() {
    int segsTotales, hrs, mins, segs;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> segsTotales;

    hrs = segsTotales / 3600;
    mins = (segsTotales % 3600) / 60;
    segs = segsTotales % 60;

    cout << "Equivale a: " << hrs << " horas, "
         << mins << " minutos y "
         << segs << " segundos" << endl;

    return 0;
}
