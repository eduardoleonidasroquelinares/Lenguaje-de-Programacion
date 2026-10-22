#include <iostream>
using namespace std;

int main()
{
    int k = 1, acum = 0,cant= 0, valor;

    cout << "ingrese la cantidad de datos : ";
    cin >> cant;

    do{
        cout<<"Ingrese numero :"<<k<<endl;
        cin >> valor;
        acum = acum + valor;
        k=k+1;
    }while(k<=cant);

	cout<< "Suma total = "<<acum<<endl;
	cout<<"Promedio = "<<acum/cant<<endl;
    return 0;
}
