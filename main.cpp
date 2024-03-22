#include <iostream>

using namespace std;

int main() {
    cout << "11 Programa que obtiene el descuento y el valor a pagar de una compra" << endl;
    int n;
    double p, descuento, valorAPagar;
    // Ingresar el número de Unidades y el precio unitario del producto comprado
    // Las cantidades deben ser mayor a 0.
    cout << "Ingrese el numero de unidades que desea adquirir: ";
    cin >> n;
    cout << "Ingrese el precio unitario del producto: ";
    cin >> p;

    // Calcular el valor del descuento (el 10% del valor total de la compra)
    descuento = 0.1 * n * p;
    // Calcular el valor total de la compra
    valorAPagar = 0.9 * n * p;

    // Mostrar el resultado en consola.
    cout << "El descuento es de " << descuento << " USD." << endl;
    cout << "La compra se hizo por el monto de " << valorAPagar << " USD.";
    return 0;
}
