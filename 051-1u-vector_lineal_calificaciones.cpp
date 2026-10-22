#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int califs[5] = {2, 14, 15, 18, 20};

    cout << "ARREGLO UNIDIMENSIONAL\n";
    cout << "Primera nota indice 0: " << califs[0] << endl;
    cout << "Ultima nota indice 4: " << califs[4] << endl;

    cout << "LA DE TODAS LAS NOTAS";
    for (int k = 0;k<5;k++)
    cout<<"Nota en indice: ["<<k<<"] "<<califs[k]<<endl;

    return 0;
}
