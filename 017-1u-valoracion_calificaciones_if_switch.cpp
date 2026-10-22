#include <iostream>
using namespace std;

int main() {
    float calif;

    cout << "SISTEMA DE EVALUACION DE NOTAS (ESCALA 0 - 20) " << endl;
    cout << "Ingrese su nota final (0 - 20): ";
    cin >> calif;

    if (calif < 0 || calif > 20) {
        cout << "ERROR: La nota ingresada no es valida. Debe escribir entre 0 y 20" << endl;
        return 1;
    }

    if (calif >= 18) cout << "Estado: Excelente (Sobresaliente)." << endl;
    else if (calif >= 14) cout << "Estado: Aprobado (Bueno)." << endl;
    else if (calif >= 11) cout << "Estado: Aprobado (Regular)." << endl;
    else cout << "Estado: Desaprobado" << endl;

    int escala;
    if (calif >= 18) escala = 1;
    else if (calif >= 14) escala = 2;
    else if (calif >= 11) escala = 3;
    else escala = 4;

    switch (escala) {
        case 1: cout << "Categoria A: Postulante de cuadro de honor o beca" << endl; break;
        case 2: cout << "Categoria B: Buen rendimiento academico" << endl; break;
        case 3: cout << "Categoria C: Aprobado, pero requiere reforzamiento" << endl; break;
        case 4: cout << "Categoria D: Desaprobado, requiere recuperacion" << endl; break;
    }

    return 0;
}
