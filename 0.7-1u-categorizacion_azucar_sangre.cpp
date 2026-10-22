#include <iostream>
#include <string>
using namespace std;

int main() {
    double azucar;
    int eleccion;
    string rotuloTipo, veredicto;

    cout << "=== Clasificador de Glucosa en Sangre ===\n\n";
    cout << "Tipo de medicion:\n";
    cout << "1. En ayunas\n";
    cout << "2. Aleatoria\n";
    cout << "3. Postprandial (2h despues de comer)\n";
    cout << "Seleccione una opcion: ";
    cin >> eleccion;

    cout << "Ingrese el valor de glucosa (mg/dL): ";
    cin >> azucar;

    switch (eleccion) {
        case 1:
            rotuloTipo = "Ayunas";
            if (azucar < 70) veredicto = "Hipoglucemia";
            else if (azucar <= 99) veredicto = "Normal";
            else if (azucar >= 100 && azucar <= 125) veredicto = "Prediabetes (glucosa en ayunas alterada)";
            else veredicto = "Diabetes";
            break;

        case 2:
            rotuloTipo = "Aleatoria";
            if (azucar < 70) veredicto = "Hipoglucemia";
            else if (azucar <= 139) veredicto = "Normal";
            else if (azucar >= 140 && azucar <= 199) veredicto = "Riesgo elevado / posible prediabetes";
            else veredicto = "Diabetes (requiere confirmacion)";
            break;

        case 3:
            rotuloTipo = "Postprandial";
            if (azucar < 70) veredicto = "Hipoglucemia";
            else if (azucar <= 139) veredicto = "Normal";
            else if (azucar >= 140 && azucar <= 199) veredicto = "Prediabetes (intolerancia a la glucosa)";
            else veredicto = "Diabetes";
            break;

        default:
            cout << "Opcion invalida.\n";
            return 1;
    }

    cout << "\n--- Resultado ---\n";
    cout << "Tipo de medicion: " << rotuloTipo << "\n";
    cout << "Glucosa: " << azucar << " mg/dL\n";
    cout << "Clasificacion: " << veredicto << "\n";
    cout << "\nNota: Rangos de referencia generales, no sustituyen diagnostico medico.\n";

    return 0;
}
