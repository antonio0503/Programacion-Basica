
#include <iostream>
using namespace std;

int main()
{
    // Declaramos un arreglo de 7 numeros ordenados.
    int numeros[7] = {5, 10, 15, 20, 25, 30, 35};

    // Variable que almacena el numero buscado.
    int buscar;

    // Variable que controla la repeticion del programa.
    char continuar = 'S';

    cout << "===== BUSQUEDA BINARIA =====" << endl;

    // Repetimos mientras el usuario desee continuar.
    while (continuar == 'S' || continuar == 's')
    {
        // Establecemos el primer indice del arreglo.
        int inicio = 0;

        // Establecemos el ultimo indice del arreglo.
        int fin = 6;

        // Variable que almacena el indice central.
        int medio;

        // Reiniciamos la posicion en cada busqueda.
        int posicion = -1;

        // Reiniciamos el contador de ciclos.
        int ciclos = 0;

        cout << "\nIngrese el numero que desea buscar: ";
        cin >> buscar;

        // Validamos que el usuario ingrese un numero.
        while (cin.fail())
        {
            // Restablecemos el estado de cin.
            cin.clear();

            // Eliminamos los caracteres incorrectos.
            cin.ignore(1000, '\n');

            cout << "Entrada invalida. Ingrese un numero: ";
            cin >> buscar;
        }

        // Limpiamos los caracteres restantes.
        cin.ignore(1000, '\n');

        // Repetimos mientras exista un intervalo valido.
        while (inicio <= fin)
        {
            // Incrementamos el contador en cada iteracion.
            ciclos++;

            // Calculamos el indice central.
            medio = (inicio + fin) / 2;

            // Comparamos el elemento central con el numero buscado.
            if (numeros[medio] == buscar)
            {
                // Guardamos el indice encontrado.
                posicion = medio;

                // Finalizamos el while interno.
                break;
            }
            else if (numeros[medio] < buscar)
            {
                // Continuamos buscando en la mitad derecha.
                inicio = medio + 1;
            }
            else
            {
                // Continuamos buscando en la mitad izquierda.
                fin = medio - 1;
            }
        }

        // Verificamos si encontramos el numero.
        if (posicion != -1)
        {
            cout << "Numero encontrado." << endl;
            cout << "Posicion: " << posicion + 1 << endl;
        }
        else
        {
            cout << "Numero no encontrado." << endl;
        }

        // Mostramos la cantidad de ciclos realizados.
        cout << "Ciclos realizados: " << ciclos << endl;

        // Preguntamos si desea realizar otra busqueda.
        cout << "\nDesea realizar otra busqueda? (S/N): ";
        cin >> continuar;
        cin.ignore(1000, '\n');

        // Validamos que la respuesta sea S o N.
        while (continuar != 'S' && continuar != 's' &&
               continuar != 'N' && continuar != 'n')
        {
            cout << "Opcion invalida. Ingrese S o N: ";
            cin >> continuar;
            cin.ignore(1000, '\n');
        }
    }

    cout << "\nFinalizando programa..." << endl;

    return 0;
}
