#include <iostream>
using namespace std;

int main() {
    double acum = 0,estCuad=0;
    double gastoKwh=0;

    cout << "CONSUMO DE kWh UN HOGAR DURANTE 7 DIAS" << endl;

    for (int k = 1; k <= 7; k++) {
    	cout << "Ingrese el consumo en kWh dia " << k << ": "<<endl;
    	cin >> gastoKwh;
        acum = acum + gastoKwh;

        if (gastoKwh > 15) {
            estCuad += 1;
        }
    }

    double media = acum / 7
	;

    cout << "Consumo acumulado total de la semana: " << acum << endl;
	cout << "El promedio diario: " << media << endl;
	cout << "Cantidad de dias con exceso de consumo: " << estCuad << endl;

    return 0;
}
