#include <iostream>
using namespace std;

int main() {
    float masa, estatura, indiceMasa;

    cout << "Ingrese su peso en kilogramos: ";
    cin >> masa;
    cout << "Ingrese su altura en metros: ";
    cin >> estatura;

    if (masa <= 0 || estatura <= 0) {
        cout << "Error: El peso y la altura deben ser mayores a cero." << endl;
    } else {
        indiceMasa = masa / (estatura * estatura);
        cout << "Su Indice de Masa Corporal (IMC) es: " << indiceMasa << endl;

        if (indiceMasa < 18.5) {
            cout << "Clasificacion: Bajo peso" << endl;
        }
        else if (indiceMasa >= 18.5 && indiceMasa <= 24.9) {
            cout << "Clasificacion: Peso normal" << endl;
        }
        else if (indiceMasa >= 25 && indiceMasa <= 29.9) {
            cout << "Clasificacion: Sobrepeso" << endl;
        }
        else if (indiceMasa >= 30 && indiceMasa <= 34.9) {
            cout << "Clasificacion: Obesidad Grado I" << endl;
        }
        else if (indiceMasa >= 35 && indiceMasa <= 39.9) {
            cout << "Clasificacion: Obesidad Grado II" << endl;
        }
        else {
            cout << "Clasificacion: Obesidad Grado III" << endl;
        }
    }

    return 0;
}
