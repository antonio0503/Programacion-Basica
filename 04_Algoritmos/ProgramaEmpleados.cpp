#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Definir e inicializar variables
string nombreEmpleado;
int edadEmpleado, tipoEmpleado;
char sexoEmpleado;
double salarioEmpleado, sueldoEmpleadoPlantaHora, sueldoEmpleadoPlantaS, sueldoDiarioLV, sueldoEmpleadoPlantaMinuto, sueldoEmpleadoPlantaSegundo, sueldoEmpleadoPlantaSemanaLV, sueldoEmpleadoPlantaSemanaS, sueldoEmpleadoPlantaQuincenal;
double  horasEmpleadoPlantaDiariaLV = 9.5, horasEmpleadoPlantaS = 6, horasEmpleadoPlantaSemanalLV, horasEmpleadoPlantaMensualS , horasEmpleadoPlantaSemanalLS, horasEmpleadoPlantaMensualTotal;

int main()
{

    cout << "========== PILLOFON ===========" << endl;
    cout << "Ingrese el nombre del empleado: ";
    getline(cin >> ws, nombreEmpleado);

    cout << "Ingrese la edad del empleado: ";
    cin >> edadEmpleado;
    while (edadEmpleado < 18 or edadEmpleado > 65)
    {
        cout << "Edad fuera de rango" << endl;
        cout << "Ingrese la edad del empleado: ";
        cin >> edadEmpleado;
    }
    cout << "Ingrese el sexo del empleado (M/F): ";
    cin >> sexoEmpleado;
    while (sexoEmpleado != 'M' && sexoEmpleado != 'm' && sexoEmpleado != 'F' && sexoEmpleado != 'f')
    {
        cout << "Sexo no valido" << endl;
        cout << "Ingrese el sexo del empleado: ";
        cin >> sexoEmpleado;
    }

    cout << "Ingrese el salario del empleado: ";
    cin >> salarioEmpleado;
    while (salarioEmpleado <= 16000)
    {
        cout << "Salario no valido" << endl;
        cout << "Ingrese el salario del empleado: ";
        cin >> salarioEmpleado;
    }

    cout << "Ingrese el tipo de empleado 1-Empleado de planta 2-Empleado Medio tiempo, 3-Empleado por contrato): ";
    cin >> tipoEmpleado;
    switch (tipoEmpleado)
    {
    case 1:
        cout << "Empleado de planta" << endl;
        break;
    case 2:
        cout << "Empleado Medio tiempo" << endl;
        break;
    case 3:
        cout << "Empleado por contrato" << endl;
        break;
    default:
        cout << "Tipo de empleado no valido" << endl;
    }

    if (tipoEmpleado == 1)
    {
        // Calcular horas empleado de planta
        horasEmpleadoPlantaSemanalLV = horasEmpleadoPlantaDiariaLV * 5; // Horas de lunes a viernes son 47.5
        horasEmpleadoPlantaMensualS = horasEmpleadoPlantaS * 4; // Horas de sabado al mes son 24
        horasEmpleadoPlantaSemanalLS = horasEmpleadoPlantaSemanalLV + horasEmpleadoPlantaS; // Horas de lunes a sabado son 53.5
        horasEmpleadoPlantaMensualTotal = horasEmpleadoPlantaSemanalLS * 4; // Horas totales al mes son 214

        // Calcular sueldo empleado de planta
        sueldoEmpleadoPlantaHora = salarioEmpleado / horasEmpleadoPlantaMensualTotal;
        sueldoEmpleadoPlantaS = sueldoEmpleadoPlantaHora * horasEmpleadoPlantaS;
        sueldoDiarioLV = sueldoEmpleadoPlantaHora * horasEmpleadoPlantaDiariaLV;
        sueldoEmpleadoPlantaMinuto = sueldoEmpleadoPlantaHora / 60;
        sueldoEmpleadoPlantaSegundo = sueldoEmpleadoPlantaMinuto / 60;
        sueldoEmpleadoPlantaSemanaLV = sueldoEmpleadoPlantaHora * horasEmpleadoPlantaSemanalLV;
        sueldoEmpleadoPlantaSemanaS = sueldoEmpleadoPlantaHora * horasEmpleadoPlantaSemanalLS;
        sueldoEmpleadoPlantaQuincenal = horasEmpleadoPlantaMensualTotal / 2 * sueldoEmpleadoPlantaHora;

        // Imprimir resultados
        cout <<  nombreEmpleado << " tiene " << edadEmpleado << " años, es de sexo " << sexoEmpleado << " y su salario es de: " << salarioEmpleado << endl;
        cout << "El sueldo diario del empleado de planta es:" << sueldoDiarioLV << endl;
        cout << "El sueldo de los sabados del empleado de planta es: " << sueldoEmpleadoPlantaS << endl;
        cout << "El sueldo por hora del empleado de planta es: " << sueldoEmpleadoPlantaHora << endl;
        cout << "El sueldo por minuto del empleado de planta es: " << sueldoEmpleadoPlantaMinuto << endl;
        cout << "El sueldo por segundo del empleado de planta es: " << sueldoEmpleadoPlantaSegundo << endl;
        cout << "El sueldo por semana de lunes a viernes del empleado de planta es: " << sueldoEmpleadoPlantaSemanaLV << endl;
        cout << "El sueldo por semana de lunes a sabado del empleado de planta es: " << sueldoEmpleadoPlantaSemanaS + sueldoEmpleadoPlantaSemanaLV << endl;
        cout << "El sueldo por quincena del empleado de planta es: " << sueldoEmpleadoPlantaQuincenal << endl;
    }
}