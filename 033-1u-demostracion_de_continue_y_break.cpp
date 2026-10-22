#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    for(int k = 1; k <= 10; k++) {
        if(k == 3) {
            continue;
        }
        if(k == 8) {
            break;
        }

        cout << "Numero " << k << endl;
    }
    return 0;
}
