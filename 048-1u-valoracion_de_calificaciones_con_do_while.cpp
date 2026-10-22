#include <iostream>
using namespace std;

int main()
{
    double calif,cant,k=0;

    cout<<"Ingrese la cantidad de notas"<<endl;
    cin >> cant;

    do {
        cout << "Ingrese la nota del Examen Parcial (0 a 20) "<<k<<" : "<<endl;
        cin >> calif;

        if (calif < 0 || calif > 20) {
            cout <<endl<< "La nota ingresada no es correcta " << endl;
        }
        if (calif >= 10.5 && calif <= 20) {
        cout << "Estado: Aprobado" << endl;
    	}
    	else if (calif >= 0 && calif <= 10.4) {
        cout << "Estado: Desprobado" << endl;
    	}
		else {
        cout << "nota no valida" << endl;
   		}
   		 k = k + 1;
    } while (k<=cant);

    return 0;
}
