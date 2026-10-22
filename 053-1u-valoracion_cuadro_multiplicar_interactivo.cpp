#include <iostream>

using namespace std;

int main()
{
    int k = 1, tablaDe;
    char contesta;

    cout << "Tablas de multiplicar "<<endl;
    cout << "De que numero desea la tabla de multiplicar "<<endl;
    cin >> tablaDe;
    do {
         cout << "Tabla del " << tablaDe << endl;

        for (int k = 1; k <= 10; k++) {
            cout << tablaDe << " x " << k << " = " << (tablaDe * k) << endl;
        }

        cout << "Desea imprimir el siguiente numero? (s/n): "<<endl;
        cin >> contesta;

        	tablaDe += 1;

		} while (contesta == 'S' || contesta == 's');

		return 0;

}
