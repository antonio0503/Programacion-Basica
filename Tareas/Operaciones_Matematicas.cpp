#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    double raizCuadrada = sqrt(numero);
    double potencia = pow(numero, 2);

    cout << "La raiz cuadrada de " << numero << " es: " << raizCuadrada << endl;
    cout << "El numero " << numero << " elevado al cuadrado es: " << potencia << endl;

    return 0;
}