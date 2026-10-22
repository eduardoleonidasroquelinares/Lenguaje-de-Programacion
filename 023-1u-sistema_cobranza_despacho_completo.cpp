#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int region, modoEntrega, comprador;
    float masa;
    double rebajaTasa = 0.0, sobrecargoTasa = 0.0, sancion = 0.0, importeIni;

    cout << "SISTEMA DE COBRO DE ENVIO" << endl;
    cout << "Ingrese la zona de destino " << endl;
    cout << "\n 1: Local/Urbana($5.00)" << endl;
    cout << "\n 2: Nacional($10.00)" << endl;
    cout << "\n 3: America del Sur($20.00)" << endl;
    cout << "\n 4: Internacional/Resto del mundo($35.00)" << endl;
    cin >> region;

    cout << "Ingrese el peso total del paquete en kilogramos" << endl;
    cin >> masa;

    if (masa <= 0 || masa > 50) {
        cout << "ERROR: El peso del paquete no debe de ser menor a cero (kg) o mayor a 50 (kg) ";
        return 1;
    }
    else {
        cout << "Tipo de entrega Express/Prioritaria (1,si o 0,no)" << endl;
        cin >> modoEntrega;
        cout << "Tipo de cliente: (1,Corporativo/frecuente o 0,Particular) " << endl;
        cin >> comprador;

        if (modoEntrega == 1) sobrecargoTasa = 0.25;
        if (masa > 15) sancion = 12;
        if (comprador == 1) rebajaTasa = 0.10;

        switch (region) {
            case 1: importeIni = 5; break;
            case 2: importeIni = 10; break;
            case 3: importeIni = 20; break;
            case 4: importeIni = 35; break;
            default: cout << "ERROR: Zona del destino no valido" << endl; return 1;
        }

        double sobrecargoFin = importeIni * sobrecargoTasa;
        double sancionFin = sancion + sobrecargoFin;
        double importeSub = importeIni + sobrecargoFin;
        double rebajaFin = importeSub * rebajaTasa;
        double importeFin = importeSub - rebajaFin;

        cout << fixed << setprecision(2);
        cout << "\n Boleta de Tarifa de envio" << endl;
        cout << "Codigo de zona elegida: " << region << endl;
        cout << "Costo base por peso: " << importeIni << endl;
        cout << "Multas por exceso de peso: " << sancion << endl;
        cout << "Recargo express: " << sobrecargoFin << endl;
        cout << "Descuento corporativo: " << rebajaFin << endl;
        cout << "Monto Final: " << importeFin << endl;
    }

    return 0;
}
