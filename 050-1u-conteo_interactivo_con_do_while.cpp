#include <iostream>

using namespace std;

int main()
{
    int k = 1;
    char contesta;

    do {
        cout << "Numero: " << k << endl;
        k=k+1;
        cout << "Desea imprimir el siguiente numero? (s/n): ";
        cin >> contesta;
		} while (contesta == 'S' || contesta == 's');

		return 0;

}
