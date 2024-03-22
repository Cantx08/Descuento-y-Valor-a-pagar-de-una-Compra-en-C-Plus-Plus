#include <iostream>

using namespace std;

int main()
{
    cout << "11 Programa que obtiene el descuento y el valor a pagar de una compra" << endl;
    int n;
    double p, descuento, valorAPagar;
    string producto;
    // Ingresar el número de Unidades y el precio unitario del producto comprado
    // Las cantidades deben ser mayor a 0.
    cout << "Ingrese el nombre del producto: ";
    getline(cin, producto);
    fflush(stdin);
    cout << "Ingrese el numero de unidades que desea adquirir: ";
    cin >> n;
    cout << "Ingrese el precio unitario del producto: ";
    cin >> p;

    // Calcular el valor del descuento (el 10% del valor total de la compra)
    descuento = 0.1 * n * p;
    // Calcular el valor total de la compra
    valorAPagar = 0.9 * n * p;
    cout << endl;

    // Mostrar el resultado en consola.
    cout << "Producto: " << producto << endl;
    cout << "Descuento: " << descuento << " USD." << endl;
    cout << "Total a pagar: " << valorAPagar << " USD.";
    return 0;
}
