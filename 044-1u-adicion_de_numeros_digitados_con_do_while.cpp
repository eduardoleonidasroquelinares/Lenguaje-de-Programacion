#include <iostream>
using namespace std;

int main()
{
    int acum = 0,cant= 0;

    do{
        cout<<"Numero :"<<cant<<endl;
        cin >> cant;
        acum = acum + cant;
        cant = cant + 1;
    } while(cant <= 10);

    return 0;
}
