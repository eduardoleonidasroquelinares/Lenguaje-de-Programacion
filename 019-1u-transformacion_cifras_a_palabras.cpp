#include <iostream>
#include <string>
using namespace std;

string unidadesLetras(int cant) {
    switch (cant) {
        case 1: return "uno";
        case 2: return "dos";
        case 3: return "tres";
        case 4: return "cuatro";
        case 5: return "cinco";
        case 6: return "seis";
        case 7: return "siete";
        case 8: return "ocho";
        case 9: return "nueve";
        default: return "";
    }
}

string decenasLetras(int cant) {
    if (cant < 10) return unidadesLetras(cant);
    else if (cant >= 10 && cant < 20) {
        switch (cant) {
            case 10: return "diez";
            case 11: return "once";
            case 12: return "doce";
            case 13: return "trece";
            case 14: return "catorce";
            case 15: return "quince";
            case 16: return "dieciseis";
            case 17: return "diecisiete";
            case 18: return "dieciocho";
            case 19: return "diecinueve";
            default: return "";
        }
    }
    else if (cant >= 20 && cant < 30) {
        if (cant == 20) return "veinte";
        return "veinti" + unidadesLetras(cant - 20);
    }
    else {
        int idxDec = cant / 10;
        int idxUni = cant % 10;
        string txtDecena = "";
        switch (idxDec) {
            case 3: txtDecena = "treinta"; break;
            case 4: txtDecena = "cuarenta"; break;
            case 5: txtDecena = "cincuenta"; break;
            case 6: txtDecena = "sesenta"; break;
            case 7: txtDecena = "setenta"; break;
            case 8: txtDecena = "ochenta"; break;
            case 9: txtDecena = "noventa"; break;
        }
        if (idxUni == 0) return txtDecena;
        return txtDecena + " y " + unidadesLetras(idxUni);
    }
}

string cientos(int cant) {
    if (cant == 100) return "cien";
    else if (cant > 100 && cant < 1000) {
        int idxCen = cant / 100;
        int sobrante = cant % 100;
        string txtCentena = "";
        switch (idxCen) {
            case 1: txtCentena = "ciento"; break;
            case 2: txtCentena = "doscientos"; break;
            case 3: txtCentena = "trescientos"; break;
            case 4: txtCentena = "cuatrocientos"; break;
            case 5: txtCentena = "quinientos"; break;
            case 6: txtCentena = "seiscientos"; break;
            case 7: txtCentena = "setecientos"; break;
            case 8: txtCentena = "ochocientos"; break;
            case 9: txtCentena = "novecientos"; break;
        }
        if (sobrante == 0) return txtCentena;
        return txtCentena + " " + decenasLetras(sobrante);
    }
    else return decenasLetras(cant);
}

string milesLetras(int cant) {
    if (cant == 1000) return "mil";
    else if (cant > 1000 && cant <= 10000) {
        int idxMil = cant / 1000;
        int sobrante = cant % 1000;
        string txtMil = "";
        if (idxMil == 1) txtMil = "mil";
        else if (idxMil == 10) return "diez mil";
        else txtMil = unidadesLetras(idxMil) + " mil";
        if (sobrante == 0) return txtMil;
        return txtMil + " " + cientos(sobrante);
    }
    else return cientos(cant);
}

string convertirALetras(int cant) {
    if (cant == 10000) return "diez mil";
    else if (cant >= 1000 && cant < 10000) return milesLetras(cant);
    else if (cant >= 1 && cant < 1000) return cientos(cant);
    else return "Numero fuera de rango";
}

int main() {
    for (int k = 1; k <= 10000; k++) {
        cout << k << ": " << convertirALetras(k) << endl;
    }
    return 0;
}
