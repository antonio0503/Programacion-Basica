#include  <iostream>
#include <iomanip>

using namespace std;

int main() {
    double numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << fixed << setprecision(4);
    cout << "El numero ingresado con cuatro decimales es: " << numero << endl;

    return 0;
}