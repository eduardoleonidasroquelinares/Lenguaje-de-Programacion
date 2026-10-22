#include <iostream>
#include <string>
using namespace std;

int main() {
    int eleccionDador, eleccionRecep;
    string dador, beneficiario;
    bool apto = false;

    cout << "=== Consulta de Compatibilidad Sanguinea ===\n\n";
    cout << "Tipos de sangre disponibles:\n";
    cout << "1. O-\n2. O+\n3. A-\n4. A+\n5. B-\n6. B+\n7. AB-\n8. AB+\n\n";

    cout << "Seleccione el tipo de sangre del DONANTE: ";
    cin >> eleccionDador;
    cout << "Seleccione el tipo de sangre del RECEPTOR: ";
    cin >> eleccionRecep;

    switch (eleccionDador) {
        case 1: dador = "O-"; apto = true; break;
        case 2:
            dador = "O+";
            switch (eleccionRecep) {
                case 2: case 4: case 6: case 8: apto = true; break;
                default: apto = false;
            }
            break;
        case 3:
            dador = "A-";
            switch (eleccionRecep) {
                case 3: case 4: case 7: case 8: apto = true; break;
                default: apto = false;
            }
            break;
        case 4:
            dador = "A+";
            switch (eleccionRecep) {
                case 4: case 8: apto = true; break;
                default: apto = false;
            }
            break;
        case 5:
            dador = "B-";
            switch (eleccionRecep) {
                case 5: case 6: case 7: case 8: apto = true; break;
                default: apto = false;
            }
            break;
        case 6:
            dador = "B+";
            switch (eleccionRecep) {
                case 6: case 8: apto = true; break;
                default: apto = false;
            }
            break;
        case 7:
            dador = "AB-";
            switch (eleccionRecep) {
                case 7: case 8: apto = true; break;
                default: apto = false;
            }
            break;
        case 8:
            dador = "AB+";
            switch (eleccionRecep) {
                case 8: apto = true; break;
                default: apto = false;
            }
            break;
        default: cout << "\nOpcion de donante invalida.\n"; return 1;
    }

    switch (eleccionRecep) {
        case 1: beneficiario = "O-"; break;
        case 2: beneficiario = "O+"; break;
        case 3: beneficiario = "A-"; break;
        case 4: beneficiario = "A+"; break;
        case 5: beneficiario = "B-"; break;
        case 6: beneficiario = "B+"; break;
        case 7: beneficiario = "AB-"; break;
        case 8: beneficiario = "AB+"; break;
        default: cout << "\nOpcion de receptor invalida.\n"; return 1;
    }

    cout << "\n--- Resultado ---\n";
    cout << "Donante: " << dador << "\n";
    cout << "Receptor: " << beneficiario << "\n";

    if (apto)
        cout << "Compatibilidad: SI, la donacion es compatible.\n";
    else
        cout << "Compatibilidad: NO, la donacion NO es compatible.\n";

    return 0;
}
