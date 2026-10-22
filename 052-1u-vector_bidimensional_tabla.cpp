#include <iostream>

using namespace std;

int main()
{
    int tabla[2][3] = {{14, 15, 16}, {8, 13, 20}};
    int k, q;

    cout << "ARREGLO BIDIMENSIONAL MATRIZ"<<endl;
    cout << "Notas del estudiante  "<<tabla[0][1]<<endl;

    for (int k = 0; k < 2; k++) {
        for (int q = 0; q < 3; q++) {
            cout << tabla[k][q] << "\t";
        }
        cout << endl;
    }

    return 0;
}
