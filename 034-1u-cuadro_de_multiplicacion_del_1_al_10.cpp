#include <iostream>

using namespace std;

int main()
{
    for (int k = 1; k <= 10; k++) {
        cout << "Tabla del : " << k << endl;

        for (int q = 1; q <= 10; q++) {
            cout << k << " x " << q << " = " << k * q << endl;
        }
    }

    return 0;
}
