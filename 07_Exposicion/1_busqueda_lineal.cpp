
#include <iostream>
using namespace std;

int main()
{
    // Declaramos un arreglo de 7 numeros enteros.
    int numeros[7] = {7, 4, 5, 2, 1, 3, 6};

    // Variable que almacena el numero buscado.
    int buscar;

    // Variable que controla la repeticion del programa.
    char continuar = 'S';

    cout << "===== BUSQUEDA LINEAL =====" << endl;

    // Repetimos mientras el usuario desee continuar.
    while (continuar == 'S' || continuar == 's')
    {
        // Reiniciamos la posicion en cada busqueda.
        int posicion = -1;

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

        // Recorremos el arreglo elemento por elemento.
        for (int i = 0; i < 7; i++)
        {
            // Comparamos el elemento actual con el numero buscado.
            if (numeros[i] == buscar)
            {
                // Guardamos el indice encontrado.
                posicion = i;

                // Finalizamos el ciclo for.
                break;
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
