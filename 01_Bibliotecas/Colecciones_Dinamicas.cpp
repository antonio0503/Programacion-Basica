#include  <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> edades = {20, 25, 30, 35, 40};

    edades.push_back(45); // Agregar un elemento al final del vector

    for (int edades : edades) {
        cout << "Edad: " << edades << endl;
    }

}