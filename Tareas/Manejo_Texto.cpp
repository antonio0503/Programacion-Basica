#include <iostream>
#include <string>

using namespace std;

int main() {
    string  comidaFavorita;
    cout << "Ingrese su comida favorita: "; 
    getline(cin, comidaFavorita);
    cout << "Su comida favorita es: " << comidaFavorita;
    return 0;

}