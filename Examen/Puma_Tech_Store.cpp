#include <iostream>
#include <string>
using namespace std;

// Cantidades de productos en el carrito
int cantidadPCGaming = 0;
int cantidadPCOficina = 0;
int cantidadHP = 0;
int cantidadLenovo = 0;
int cantidadASUS = 0;
int cantidadMacBook = 0;
int cantidadProcesador = 0;
int cantidadMemoria = 0;
int cantidadSSD = 0;
int cantidadTarjetaGrafica = 0;
int cantidadFuentePoder = 0;
int cantidadMotherboard = 0;
int cantidadSamsungUltra = 0;
int cantidadSamsungPlus = 0;
int cantidadIphoneProMax = 0;
int cantidadIphonePro = 0;
int cantidadXiaomiUltra = 0;
int cantidadGooglePixel = 0;
int cantidadAudifonosJBL = 0;
int cantidadAudifonosLogitech = 0;
int cantidadParlanteJBL = 0;
int cantidadMonitorLG = 0;
int cantidadWebcamLogitech = 0;
int cantidadMicrofonoHyperX = 0;
int cantidadPlayStation5 = 0;
int cantidadXboxSeriesS = 0;
int cantidadNintendoSwitch = 0;
int cantidadControlXbox = 0;
int cantidadControlDualSense = 0;
int cantidadTecladoRedragon = 0;
int cantidadRouterArcherC6 = 0;
int cantidadRouterAX1500 = 0;
int cantidadAdaptadorWiFi = 0;
int cantidadSwitchEthernet = 0;
int cantidadCableRedCAT6 = 0;
int cantidadRepetidorWiFi = 0;
// Existencias de Desktop/Laptops
int stockPCGaming = 5;
int stockPCOficina = 4;
int stockHP = 5;
int stockLenovo = 6;
int stockASUS = 5;
int stockMacBook = 3;
// Existencias de Componentes
int stockProcesador = 5;
int stockMemoria = 8;
int stockSSD = 6;
int stockTarjetaGrafica = 3;
int stockFuentePoder = 5;
int stockMotherboard = 4;
// Existencias de Telefonos
int stockSamsungUltra = 2;
int stockSamsungPlus = 3;
int stockIphoneProMax = 2;
int stockIphonePro = 3;
int stockXiaomiUltra = 2;
int stockGooglePixel = 2;
// Existencias de Audio y Video
int stockAudifonosJBL = 6;
int stockAudifonosLogitech = 4;
int stockParlanteJBL = 3;
int stockMonitorLG = 5;
int stockWebcamLogitech = 4;
int stockMicrofonoHyperX = 3;
// Existencias de Gaming
int stockPlayStation5 = 3;
int stockXboxSeriesS = 3;
int stockNintendoSwitch = 2;
int stockControlXbox = 6;
int stockControlDualSense = 5;
int stockTecladoRedragon = 5;
// Existencias de Redes y Conectividad
int stockRouterArcherC6 = 5;
int stockRouterAX1500 = 4;
int stockAdaptadorWiFi = 8;
int stockSwitchEthernet = 5;
int stockCableRedCAT6 = 4;
int stockRepetidorWiFi = 5;
string nombreCliente = "";
int numeroFactura = 1;
double ventasAcumuladas = 0;
int unidadesVendidas = 0;
int subtotalGravado = 0;
int subtotalExento = 0;
double impuesto = 0;
double totalFactura = 0;

// Declaracion de funciones
void menuPrincipal();
void menuClientes();
void menuEmpleados();
void menuCatalogo();
void menuDesktopLaptop();
void menuComponentes();
void menuTelefonos();
void menuAudioVideo();
void menuGaming();
void menuRedesConectividad();
void mostrarProducto(string nombre, int precio, int existencias, int &cantidadCarrito);
void menuCarrito();
void modificarProducto(string nombre, int &cantidad);
void generarFactura();
void detalleFactura(string nombre, int cantidad, int precio, int &totalFactura);
void vaciarCarrito();
void actualizarInventario();
void consultarInventario();
void consultarVentas();
void mostrarInventario(string nombre, int precio, int inicial, int actual);

int main()
{
    menuPrincipal();
    return 0;
}

void menuPrincipal()
{
    int opcion;

    do
    {
        cout << "\n========== PUMA TECH STORE ==========" << endl;
        cout << "1. Clientes" << endl;
        cout << "2. Empleados" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion: ";
        if (!(cin >> opcion))
        {
            cout << "Entrada invalida. Por favor, ingrese un numero." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            opcion = 0; // Reinicia la opcion para que el bucle continue
        }

        switch (opcion)
        {
        case 1:
            menuClientes();
            break;

        case 2:
            menuEmpleados();
            break;

        case 3:
            cout << "Gracias por visitar nuestra tienda." << endl;
            break;

        default:
            cout << "Opcion no valida. Ingrese nuevamente." << endl;
        }

    } while (opcion != 3);
}

void menuClientes()
{
    int opcion;

    do
    {
        cout << "\n========== MENU CLIENTES ==========" << endl;
        cout << "1. Catalogo de productos" << endl;
        cout << "2. Carrito de compras" << endl;
        cout << "3. Volver al menu principal" << endl;
        cout << "Ingrese una opcion: ";
        if (!(cin >> opcion))
        {
            cout << "Entrada invalida. Por favor, ingrese un numero." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            opcion = 0; // Reinicia la opcion para que el bucle continue
        }

        switch (opcion)
        {
        case 1:
            menuCatalogo();
            break;

        case 2:
            menuCarrito();
            break;

        case 3:
            cout << "Regresando al menu principal..." << endl;
            break;

        default:
            cout << "Opcion no valida. Ingrese nuevamente." << endl;
        }

    } while (opcion != 3);
}

void menuCatalogo()
{
    int opcion;

    do
    {
        cout << "\n========== CATALOGO DE PRODUCTOS ==========" << endl;
        cout << "1. Desktop/Laptops" << endl;
        cout << "2. Componentes" << endl;
        cout << "3. Telefonos" << endl;
        cout << "4. Audio y Video" << endl;
        cout << "5. Gaming" << endl;
        cout << "6. Redes y Conectividad" << endl;
        cout << "7. Volver al menu de clientes" << endl;
        cout << "Ingrese una opcion: ";
        if (!(cin >> opcion))
        {
            cout << "\nEntrada invalida. Ingrese un numero." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            opcion = 0; // Reinicia la opcion para que el bucle continue
        }

        switch (opcion)
        {
        case 1:
            menuDesktopLaptop();
            break;
        case 2:
            menuComponentes();
            break;
        case 3:
            menuTelefonos();
            break;
        case 4:
            menuAudioVideo();
            break;
        case 5:
            menuGaming();
            break;

        case 6:
            menuRedesConectividad();
            break;

        case 7:
            cout << "Regresando al menu de clientes..." << endl;
            break;

        default:
            cout << "Opcion no valida. Ingrese nuevamente." << endl;
        }
    } while (opcion != 7);
}

void menuEmpleados()
{
    int opcion;

    do
    {
        cout << "\n========== MENU EMPLEADOS ==========" << endl;
        cout << "1. Consultar catalogo de productos" << endl;
        cout << "2. Consultar inventario" << endl;
        cout << "3. Reporte de ventas" << endl;
        cout << "4. Volver al menu principal" << endl;
        cout << "Ingrese una opcion: ";
        if (!(cin >> opcion))
        {
            cout << "Entrada invalida. Por favor, ingrese un numero." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            opcion = 0; // Reinicia la opcion para que el bucle continue
        }

        switch (opcion)
        {
        case 1:
            menuCatalogo();
            break;

        case 2:
            consultarInventario();
            break;

        case 3:
            consultarVentas();
            break;

        case 4:
            cout << "Regresando al menu principal..." << endl;
            break;

        default:
            cout << "Opcion no valida. Ingrese nuevamente." << endl;
        }

    } while (opcion != 4);
}

void menuDesktopLaptop()
{
    int opcion;

    do
    {
        cout << "\n========== DESKTOP/LAPTOPS ==========" << endl;
        cout << "1. PC Desktop Gaming - L 28,500.00" << endl;
        cout << "2. PC Desktop Oficina - L 14,500" << endl;
        cout << "3. Laptop HP Pavilion - L 18,900" << endl;
        cout << "4. Lenovo ThinkPad - L 23,500" << endl;
        cout << "5. ASUS TUF Gaming - L 32,900" << endl;
        cout << "6. MacBook Air M2 - L 29,500" << endl;
        cout << "7. Regresar al catalogo" << endl;
        cout << "Ingrese una opcion: ";
        if (!(cin >> opcion))
        {
            cout << "Entrada invalida. Por favor, ingrese un numero." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            opcion = 0; // Reinicia la opcion para que el bucle continue
        }

        switch (opcion)
        {
        case 1:
            mostrarProducto("PC Desktop Gaming", 28500, stockPCGaming, cantidadPCGaming); // Ejemplo de producto con existencias
            break;

        case 2:
            mostrarProducto("PC Desktop Oficina", 14500, stockPCOficina, cantidadPCOficina); // Ejemplo de producto con existencias
            break;

        case 3:
            mostrarProducto("Laptop HP Pavilion", 18900, stockHP, cantidadHP); // Ejemplo de producto con existencias
            break;

        case 4:
            mostrarProducto("Lenovo ThinkPad", 23500, stockLenovo, cantidadLenovo); // Ejemplo de producto con existencias
            break;

        case 5:
            mostrarProducto("ASUS TUF Gaming", 32900, stockASUS, cantidadASUS); // Ejemplo de producto con existencias
            break;

        case 6:
            mostrarProducto("MacBook Air M2", 29500, stockMacBook, cantidadMacBook); // Ejemplo de producto con existencias
            break;

        case 7:
            cout << "Regresando al catalogo..." << endl;
            break;

        default:
            cout << "Opcion no valida. Ingrese nuevamente." << endl;
        }
    } while (opcion != 7);
}

void menuComponentes()
{
    int opcion;
    do
    {
        cout << "\n========== COMPONENTES ==========" << endl;
        cout << "1. Procesador AMD Ryzen 5 5600 - L 3,500" << endl;
        cout << "2. Memoria RAM DDR4 16GB - L 1,200" << endl;
        cout << "3. SSD NVMe 1TB - L 2,200" << endl;
        cout << "4. Tarjeta gráfica RTX 4060 - L 9,500" << endl;
        cout << "5. Fuente de poder 650W - L 1,800" << endl;
        cout << "6. Motherboard B550 - L 3,200" << endl;
        cout << "7. Regresar al catalogo" << endl;
        cout << "Ingrese una opcion: ";
        if (!(cin >> opcion))
        {
            cout << "Entrada invalida. Por favor, ingrese un numero." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            opcion = 0; // Reinicia la opcion para que el bucle continue
        }

        switch (opcion)
        {
        case 1:
            mostrarProducto("Procesador AMD Ryzen 5 5600", 3500, stockProcesador, cantidadProcesador); // Ejemplo de producto con existencias
            break;

        case 2:
            mostrarProducto("Memoria RAM DDR4 16GB", 1200, stockMemoria, cantidadMemoria); // Ejemplo de producto con existencias
            break;

        case 3:
            mostrarProducto("SSD NVMe 1TB", 2200, stockSSD, cantidadSSD); // Ejemplo de producto con existencias
            break;

        case 4:
            mostrarProducto("Tarjeta gráfica RTX 4060", 9500, stockTarjetaGrafica, cantidadTarjetaGrafica); // Ejemplo de producto con existencias
            break;

        case 5:
            mostrarProducto("Fuente de poder 650W", 1800, stockFuentePoder, cantidadFuentePoder); // Ejemplo de producto con existencias
            break;

        case 6:
            mostrarProducto("Motherboard B550", 3200, stockMotherboard, cantidadMotherboard); // Ejemplo de producto con existencias
            break;

        case 7:
            cout << "Regresando al catalogo..." << endl;
            break;

        default:
            cout << "Opcion no valida. Ingrese nuevamente." << endl;
        }
    } while (opcion != 7);
}

void menuTelefonos()
{

    int opcion;
    do
    {
        cout << "\n========== TELEFONOS ==========" << endl;
        cout << "1. Samsung Galaxy S25 Ultra - L 38,500" << endl;
        cout << "2. Samsung Galaxy S25+ - L 29,500" << endl;
        cout << "3. Iphone 16 Pro Max - L 45,000" << endl;
        cout << "4. Iphone 16 Pro - L 39,500" << endl;
        cout << "5. Xiaomi 15 Ultra - L 36,000" << endl;
        cout << "6. Google 9 Pro XL - L 32,000" << endl;
        cout << "7. Regresar al catalogo" << endl;
        cout << "Ingrese una opcion: ";
        if (!(cin >> opcion))
        {
            cout << "Entrada invalida. Por favor, ingrese un numero." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            opcion = 0; // Reinicia la opcion para que el bucle continue
        }

        switch (opcion)
        {
        case 1:
            mostrarProducto("Samsung Galaxy S25 Ultra", 38500, stockSamsungUltra, cantidadSamsungUltra); // Ejemplo de producto con existencias
            break;

        case 2:
            mostrarProducto("Samsung Galaxy S25+", 29500, stockSamsungPlus, cantidadSamsungPlus); // Ejemplo de producto con existencias
            break;

        case 3:
            mostrarProducto("Iphone 16 Pro Max", 45000, stockIphoneProMax, cantidadIphoneProMax); // Ejemplo de producto con existencias
            break;

        case 4:
            mostrarProducto("Iphone 16 Pro", 39500, stockIphonePro, cantidadIphonePro); // Ejemplo de producto con existencias
            break;

        case 5:
            mostrarProducto("Xiaomi 15 Ultra", 36000, stockXiaomiUltra, cantidadXiaomiUltra); // Ejemplo de producto con existencias
            break;

        case 6:
            mostrarProducto("Google 9 Pro XL", 32000, stockGooglePixel, cantidadGooglePixel); // Ejemplo de producto con existencias
            break;

        case 7:
            cout << "Regresando al catalogo..." << endl;
            break;

        default:
            cout << "Opcion no valida. Ingrese nuevamente." << endl;
        }
    } while (opcion != 7);
}

void menuAudioVideo()
{
    int opcion;
    do
    {

        cout << "\n========== AUDIO Y VIDEO ==========" << endl;
        cout << "1. Audífonos JBL Tune 510BT - L 1,200" << endl;
        cout << "2. Audífonos Logitech G435 - L 2,000" << endl;
        cout << "3. Parlante JBL Flip 6 - L 3,500" << endl;
        cout << "4. Monitor LG 24 pulgadas - L 4,500" << endl;
        cout << "5. Webcam Logitech C920 - L 2,200" << endl;
        cout << "6. Micrófono HyperX SoloCast - L 2,500" << endl;
        cout << "7. Regresar al catalogo" << endl;
        cout << "Ingrese una opcion: ";
        if (!(cin >> opcion))
        {
            cout << "Entrada invalida. Por favor, ingrese un numero." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            opcion = 0; // Reinicia la opcion para que el bucle continue
        }

        switch (opcion)
        {
        case 1:
            mostrarProducto("Audífonos JBL Tune 510BT", 1200, stockAudifonosJBL, cantidadAudifonosJBL); // Ejemplo de producto con existencias
            break;

        case 2:
            mostrarProducto("Audífonos Logitech G435", 2000, stockAudifonosLogitech, cantidadAudifonosLogitech); // Ejemplo de producto con existencias
            break;

        case 3:
            mostrarProducto("Parlante JBL Flip 6", 3500, stockParlanteJBL, cantidadParlanteJBL); // Ejemplo de producto con existencias
            break;

        case 4:
            mostrarProducto("Monitor LG 24 pulgadas", 4500, stockMonitorLG, cantidadMonitorLG); // Ejemplo de producto con existencias
            break;

        case 5:
            mostrarProducto("Webcam Logitech C920", 2200, stockWebcamLogitech, cantidadWebcamLogitech); // Ejemplo de producto con existencias
            break;

        case 6:
            mostrarProducto("Micrófono HyperX SoloCast", 2500, stockMicrofonoHyperX, cantidadMicrofonoHyperX); // Ejemplo de producto con existencias
            break;

        case 7:
            cout << "Regresando al catalogo..." << endl;
            break;

        default:
            cout << "Opcion no valida. Ingrese nuevamente." << endl;
        }
    } while (opcion != 7);
}

void menuGaming()
{
    int opcion;
    do
    {

        cout << "\n========== GAMING ==========" << endl;
        cout << "1. PlayStation 5 Slim - L 14,500" << endl;
        cout << "2. Xbox Series S - L 8,500" << endl;
        cout << "3. Nintendo Switch OLED - L 9,500" << endl;
        cout << "4. Control Xbox Wireless - L 1,800" << endl;
        cout << "5. Control DualSense PS5 - L 2,000" << endl;
        cout << "6. Teclado mecánico Redragon - L 1,500" << endl;
        cout << "7. Regresar al catalogo" << endl;
        cout << "Ingrese una opcion: ";
        if (!(cin >> opcion))
        {
            cout << "Entrada invalida. Por favor, ingrese un numero." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            opcion = 0; // Reinicia la opcion para que el bucle continue
        }

        switch (opcion)
        {
        case 1:
            mostrarProducto("PlayStation 5 Slim", 14500, stockPlayStation5, cantidadPlayStation5); // Ejemplo de producto con existencias
            break;

        case 2:
            mostrarProducto("Xbox Series S", 8500, stockXboxSeriesS, cantidadXboxSeriesS); // Ejemplo de producto con existencias
            break;

        case 3:
            mostrarProducto("Nintendo Switch OLED", 9500, stockNintendoSwitch, cantidadNintendoSwitch); // Ejemplo de producto con existencias
            break;

        case 4:
            mostrarProducto("Control Xbox Wireless", 1800, stockControlXbox, cantidadControlXbox); // Ejemplo de producto con existencias
            break;

        case 5:
            mostrarProducto("Control DualSense PS5", 2000, stockControlDualSense, cantidadControlDualSense); // Ejemplo de producto con existencias
            break;

        case 6:
            mostrarProducto("Teclado mecánico Redragon", 1500, stockTecladoRedragon, cantidadTecladoRedragon); // Ejemplo de producto con existencias
            break;

        case 7:
            cout << "Regresando al catalogo..." << endl;
            break;

        default:
            cout << "Opcion no valida. Ingrese nuevamente." << endl;
        }
    } while (opcion != 7);
}

void menuRedesConectividad()
{
    int opcion;
    do
    {
        cout << "\n========== REDES Y CONECTIVIDAD ==========" << endl;
        cout << "1. Router TP-Link Archer C6 - L 1,500" << endl;
        cout << "2. Router TP-Link AX1500 - L 2,500" << endl;
        cout << "3. Adaptador Wi-Fi USB - L 450" << endl;
        cout << "4. Switch Ethernet 8 puertos - L 900" << endl;
        cout << "5. Cable de red CAT6 (rollo) - L 1,200" << endl;
        cout << "6. Repetidor Wi-Fi TP-Link - L 1,000" << endl;
        cout << "7. Regresar al catalogo" << endl;
        cout << "Ingrese una opcion: ";
        if (!(cin >> opcion))
        {
            cout << "Entrada invalida. Por favor, ingrese un numero." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            opcion = 0; // Reinicia la opcion para que el bucle continue
        }

        switch (opcion)
        {

        case 1:
            mostrarProducto("Router TP-Link Archer C6", 1500, stockRouterArcherC6, cantidadRouterArcherC6); // Ejemplo de producto con existencias
            break;

        case 2:
            mostrarProducto("Router TP-Link AX1500", 2500, stockRouterAX1500, cantidadRouterAX1500); // Ejemplo de producto con existencias
            break;

        case 3:
            mostrarProducto("Adaptador Wi-Fi USB", 450, stockAdaptadorWiFi, cantidadAdaptadorWiFi); // Ejemplo de producto con existencias
            break;

        case 4:
            mostrarProducto("Switch Ethernet 8 puertos", 900, stockSwitchEthernet, cantidadSwitchEthernet); // Ejemplo de producto con existencias
            break;

        case 5:
            mostrarProducto("Cable de red CAT6 (rollo)", 1200, stockCableRedCAT6, cantidadCableRedCAT6); // Ejemplo de producto con existencias
            break;

        case 6:
            mostrarProducto("Repetidor Wi-Fi TP-Link", 1000, stockRepetidorWiFi, cantidadRepetidorWiFi); // Ejemplo de producto con existencias
            break;

        case 7:
            cout << "Regresando al catalogo..." << endl;
            break;

        default:
            cout << "Opcion no valida. Ingrese nuevamente." << endl;
        }
    } while (opcion != 7);
}

void mostrarProducto(string nombre, int precio, int existencias, int &cantidadCarrito)
{
    int opcion;
    int cantidad;

    cout << "\n\n\n\n\n\n\n\n\n\n";

    cout << "========== INFORMACION DEL PRODUCTO ==========" << endl;
    cout << "Producto: " << nombre << endl;
    cout << "Precio: L " << precio << endl;
    cout << "Existencias: " << existencias << endl;
    cout << "Unidades en el carrito: " << cantidadCarrito << endl;
    cout << "Unidades disponibles: " << existencias - cantidadCarrito << endl;

    if (existencias - cantidadCarrito == 0)
    {
        cout << "\nNo hay unidades disponibles para agregar." << endl;
    }
    else
    {
        do
        {
            cout << "\n¿Desea agregar este producto al carrito?" << endl;
            cout << "1. Si" << endl;
            cout << "2. No" << endl;
            cout << "Seleccione una opcion: ";

            if (!(cin >> opcion))
            {
                cout << "Entrada invalida. Por favor, ingrese un numero." << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                opcion = 0;
            }

            if (opcion != 1 && opcion != 2)
            {
                cout << "\nOpcion no valida. Intente nuevamente." << endl;
            }

        } while (opcion != 1 && opcion != 2);

        if (opcion == 1)
        {
            do
            {
                cout << "\nIngrese la cantidad que desea comprar.";
                cout << "\nIngrese 0 si desea cancelar y regresar al catalogo." << endl;
                cout << "Cantidad: ";
                if (!(cin >> cantidad))
                {
                    cout << "Entrada invalida. Por favor, ingrese un numero." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cantidad = -1;
                }

                if (cantidad == 0)
                {
                    cout << "\nOperacion cancelada. Regresando al catalogo..." << endl;
                }
                else if (cantidad < 0 || cantidad > existencias - cantidadCarrito)
                {
                    cout << "\nCantidad no valida. Solo hay "
                         << existencias - cantidadCarrito << " unidades disponibles." << endl;
                }
                else
                {
                    cantidadCarrito = cantidadCarrito + cantidad;

                    cout << "\nProducto agregado al carrito correctamente." << endl;
                    cout << "Cantidad agregada: " << cantidad << endl;
                    cout << "Total de unidades de este producto en el carrito: "
                         << cantidadCarrito << endl;
                    cout << "Subtotal acumulado: L " << precio * cantidadCarrito << endl;
                }

            } while (cantidad < 0 || cantidad > existencias - cantidadCarrito);
        }
        else if (opcion == 2)
        {
            cout << "\nRegresando al catalogo..." << endl;
        }
        else
        {
            cout << "\nOpcion no valida." << endl;
        }
    }
}

void menuCarrito()
{
    int total = 0;
    int opcion;
    int producto;
    int nuevaCantidad;
    int continuar = 1;

    do
    {
        total = 0;

        cout << "\n========== CARRITO DE COMPRAS ==========" << endl;

        if (cantidadPCGaming > 0)
        {
            cout << "\nProducto: PC Desktop Gaming" << endl;
            cout << "Cantidad: " << cantidadPCGaming << endl;
            cout << "Subtotal: L " << 28500 * cantidadPCGaming << endl;

            total = total + (28500 * cantidadPCGaming);
        }

        if (cantidadPCOficina > 0)
        {
            cout << "\nProducto: PC Desktop Oficina" << endl;
            cout << "Cantidad: " << cantidadPCOficina << endl;
            cout << "Subtotal: L " << 14500 * cantidadPCOficina << endl;

            total = total + (14500 * cantidadPCOficina);
        }

        if (cantidadHP > 0)
        {
            cout << "\nProducto: Laptop HP Pavilion" << endl;
            cout << "Cantidad: " << cantidadHP << endl;
            cout << "Subtotal: L " << 18900 * cantidadHP << endl;

            total = total + (18900 * cantidadHP);
        }

        if (cantidadLenovo > 0)
        {
            cout << "\nProducto: Lenovo ThinkPad" << endl;
            cout << "Cantidad: " << cantidadLenovo << endl;
            cout << "Subtotal: L " << 23500 * cantidadLenovo << endl;

            total = total + (23500 * cantidadLenovo);
        }
        if (cantidadASUS > 0)
        {
            cout << "\nProducto: ASUS TUF Gaming" << endl;
            cout << "Cantidad: " << cantidadASUS << endl;
            cout << "Subtotal: L " << 32900 * cantidadASUS << endl;

            total = total + (32900 * cantidadASUS);
        }

        if (cantidadMacBook > 0)
        {
            cout << "\nProducto: MacBook Air M2" << endl;
            cout << "Cantidad: " << cantidadMacBook << endl;
            cout << "Subtotal: L " << 29500 * cantidadMacBook << endl;

            total = total + (29500 * cantidadMacBook);
        }

        if (cantidadProcesador > 0)
        {
            cout << "\nProducto: Procesador AMD Ryzen 5 5600" << endl;
            cout << "Cantidad: " << cantidadProcesador << endl;
            cout << "Subtotal: L " << 3500 * cantidadProcesador << endl;

            total = total + (3500 * cantidadProcesador);
        }

        if (cantidadMemoria > 0)
        {
            cout << "\nProducto: Memoria RAM DDR4 16GB" << endl;
            cout << "Cantidad: " << cantidadMemoria << endl;
            cout << "Subtotal: L " << 1200 * cantidadMemoria << endl;

            total = total + (1200 * cantidadMemoria);
        }

        if (cantidadSSD > 0)
        {
            cout << "\nProducto: SSD NVMe 1TB" << endl;
            cout << "Cantidad: " << cantidadSSD << endl;
            cout << "Subtotal: L " << 2200 * cantidadSSD << endl;

            total = total + (2200 * cantidadSSD);
        }

        if (cantidadTarjetaGrafica > 0)
        {
            cout << "\nProducto: Tarjeta gráfica RTX 4060" << endl;
            cout << "Cantidad: " << cantidadTarjetaGrafica << endl;
            cout << "Subtotal: L " << 9500 * cantidadTarjetaGrafica << endl;

            total = total + (9500 * cantidadTarjetaGrafica);
        }

        if (cantidadFuentePoder > 0)
        {
            cout << "\nProducto: Fuente de poder 650W" << endl;
            cout << "Cantidad: " << cantidadFuentePoder << endl;
            cout << "Subtotal: L " << 1800 * cantidadFuentePoder << endl;

            total = total + (1800 * cantidadFuentePoder);
        }

        if (cantidadMotherboard > 0)
        {
            cout << "\nProducto: Motherboard B550" << endl;
            cout << "Cantidad: " << cantidadMotherboard << endl;
            cout << "Subtotal: L " << 3200 * cantidadMotherboard << endl;

            total = total + (3200 * cantidadMotherboard);
        }

        if (cantidadSamsungUltra > 0)
        {
            cout << "\nProducto: Samsung Galaxy S25 Ultra" << endl;
            cout << "Cantidad: " << cantidadSamsungUltra << endl;
            cout << "Subtotal: L " << 38500 * cantidadSamsungUltra << endl;

            total = total + (38500 * cantidadSamsungUltra);
        }

        if (cantidadSamsungPlus > 0)
        {
            cout << "\nProducto: Samsung Galaxy S25+" << endl;
            cout << "Cantidad: " << cantidadSamsungPlus << endl;
            cout << "Subtotal: L " << 29500 * cantidadSamsungPlus << endl;

            total = total + (29500 * cantidadSamsungPlus);
        }

        if (cantidadIphoneProMax > 0)
        {
            cout << "\nProducto: Iphone 16 Pro Max" << endl;
            cout << "Cantidad: " << cantidadIphoneProMax << endl;
            cout << "Subtotal: L " << 45000 * cantidadIphoneProMax << endl;

            total = total + (45000 * cantidadIphoneProMax);
        }

        if (cantidadIphonePro > 0)
        {
            cout << "\nProducto: Iphone 16 Pro" << endl;
            cout << "Cantidad: " << cantidadIphonePro << endl;
            cout << "Subtotal: L " << 39500 * cantidadIphonePro << endl;

            total = total + (39500 * cantidadIphonePro);
        }

        if (cantidadXiaomiUltra > 0)
        {
            cout << "\nProducto: Xiaomi 15 Ultra" << endl;
            cout << "Cantidad: " << cantidadXiaomiUltra << endl;
            cout << "Subtotal: L " << 36000 * cantidadXiaomiUltra << endl;

            total = total + (36000 * cantidadXiaomiUltra);
        }

        if (cantidadGooglePixel > 0)
        {
            cout << "\nProducto: Google 9 Pro XL" << endl;
            cout << "Cantidad: " << cantidadGooglePixel << endl;
            cout << "Subtotal: L " << 32000 * cantidadGooglePixel << endl;

            total = total + (32000 * cantidadGooglePixel);
        }

        if (cantidadAudifonosJBL > 0)
        {
            cout << "\nProducto: Audífonos JBL Tune 510BT" << endl;
            cout << "Cantidad: " << cantidadAudifonosJBL << endl;
            cout << "Subtotal: L " << 1200 * cantidadAudifonosJBL << endl;

            total = total + (1200 * cantidadAudifonosJBL);
        }

        if (cantidadAudifonosLogitech > 0)
        {
            cout << "\nProducto: Audífonos Logitech G435" << endl;
            cout << "Cantidad: " << cantidadAudifonosLogitech << endl;
            cout << "Subtotal: L " << 2000 * cantidadAudifonosLogitech << endl;

            total = total + (2000 * cantidadAudifonosLogitech);
        }

        if (cantidadParlanteJBL > 0)
        {
            cout << "\nProducto: Parlante JBL Flip 6" << endl;
            cout << "Cantidad: " << cantidadParlanteJBL << endl;
            cout << "Subtotal: L " << 3500 * cantidadParlanteJBL << endl;

            total = total + (3500 * cantidadParlanteJBL);
        }

        if (cantidadMonitorLG > 0)
        {
            cout << "\nProducto: Monitor LG 24 pulgadas" << endl;
            cout << "Cantidad: " << cantidadMonitorLG << endl;
            cout << "Subtotal: L " << 4500 * cantidadMonitorLG << endl;

            total = total + (4500 * cantidadMonitorLG);
        }

        if (cantidadWebcamLogitech > 0)
        {
            cout << "\nProducto: Webcam Logitech C920" << endl;
            cout << "Cantidad: " << cantidadWebcamLogitech << endl;
            cout << "Subtotal: L " << 2200 * cantidadWebcamLogitech << endl;

            total = total + (2200 * cantidadWebcamLogitech);
        }

        if (cantidadMicrofonoHyperX > 0)
        {
            cout << "\nProducto: Micrófono HyperX SoloCast" << endl;
            cout << "Cantidad: " << cantidadMicrofonoHyperX << endl;
            cout << "Subtotal: L " << 2500 * cantidadMicrofonoHyperX << endl;

            total = total + (2500 * cantidadMicrofonoHyperX);
        }

        if (cantidadPlayStation5 > 0)
        {
            cout << "\nProducto: PlayStation 5 Slim" << endl;
            cout << "Cantidad: " << cantidadPlayStation5 << endl;
            cout << "Subtotal: L " << 14500 * cantidadPlayStation5 << endl;

            total = total + (14500 * cantidadPlayStation5);
        }

        if (cantidadXboxSeriesS > 0)
        {
            cout << "\nProducto: Xbox Series S" << endl;
            cout << "Cantidad: " << cantidadXboxSeriesS << endl;
            cout << "Subtotal: L " << 8500 * cantidadXboxSeriesS << endl;

            total = total + (8500 * cantidadXboxSeriesS);
        }

        if (cantidadNintendoSwitch > 0)
        {
            cout << "\nProducto: Nintendo Switch OLED" << endl;
            cout << "Cantidad: " << cantidadNintendoSwitch << endl;
            cout << "Subtotal: L " << 9500 * cantidadNintendoSwitch << endl;

            total = total + (9500 * cantidadNintendoSwitch);
        }

        if (cantidadControlXbox > 0)
        {
            cout << "\nProducto: Control Xbox Wireless" << endl;
            cout << "Cantidad: " << cantidadControlXbox << endl;
            cout << "Subtotal: L " << 1800 * cantidadControlXbox << endl;

            total = total + (1800 * cantidadControlXbox);
        }

        if (cantidadControlDualSense > 0)
        {
            cout << "\nProducto: Control DualSense PS5" << endl;
            cout << "Cantidad: " << cantidadControlDualSense << endl;
            cout << "Subtotal: L " << 2000 * cantidadControlDualSense << endl;

            total = total + (2000 * cantidadControlDualSense);
        }

        if (cantidadTecladoRedragon > 0)
        {
            cout << "\nProducto: Teclado mecánico Redragon" << endl;
            cout << "Cantidad: " << cantidadTecladoRedragon << endl;
            cout << "Subtotal: L " << 1500 * cantidadTecladoRedragon << endl;

            total = total + (1500 * cantidadTecladoRedragon);
        }

        if (cantidadRouterArcherC6 > 0)
        {
            cout << "\nProducto: Router TP-Link Archer C6" << endl;
            cout << "Cantidad: " << cantidadRouterArcherC6 << endl;
            cout << "Subtotal: L " << 1500 * cantidadRouterArcherC6 << endl;

            total = total + (1500 * cantidadRouterArcherC6);
        }

        if (cantidadRouterAX1500 > 0)
        {
            cout << "\nProducto: Router TP-Link AX1500" << endl;
            cout << "Cantidad: " << cantidadRouterAX1500 << endl;
            cout << "Subtotal: L " << 2500 * cantidadRouterAX1500 << endl;

            total = total + (2500 * cantidadRouterAX1500);
        }

        if (cantidadAdaptadorWiFi > 0)
        {
            cout << "\nProducto: Adaptador Wi-Fi USB" << endl;
            cout << "Cantidad: " << cantidadAdaptadorWiFi << endl;
            cout << "Subtotal: L " << 450 * cantidadAdaptadorWiFi << endl;

            total = total + (450 * cantidadAdaptadorWiFi);
        }

        if (cantidadSwitchEthernet > 0)
        {
            cout << "\nProducto: Switch Ethernet 8 puertos" << endl;
            cout << "Cantidad: " << cantidadSwitchEthernet << endl;
            cout << "Subtotal: L " << 900 * cantidadSwitchEthernet << endl;

            total = total + (900 * cantidadSwitchEthernet);
        }

        if (cantidadCableRedCAT6 > 0)
        {
            cout << "\nProducto: Cable de red CAT6 (rollo)" << endl;
            cout << "Cantidad: " << cantidadCableRedCAT6 << endl;
            cout << "Subtotal: L " << 1200 * cantidadCableRedCAT6 << endl;

            total = total + (1200 * cantidadCableRedCAT6);
        }

        if (cantidadRepetidorWiFi > 0)
        {
            cout << "\nProducto: Repetidor Wi-Fi TP-Link" << endl;
            cout << "Cantidad: " << cantidadRepetidorWiFi << endl;
            cout << "Subtotal: L " << 1000 * cantidadRepetidorWiFi << endl;

            total = total + (1000 * cantidadRepetidorWiFi);
        }

        cout << "\n=========================================" << endl;

        if (total == 0)
        {
            cout << "\nNo hay productos en el carrito." << endl;
            cout << "\n2. Regresar al menu de clientes" << endl;
        }
        else
        {
            cout << "\nTotal a pagar: L " << total << endl;

            cout << "\n1. Modificar o eliminar productos" << endl;
            cout << "2. Regresar al menu de clientes" << endl;
            cout << "3. Finalizar compra" << endl;
        }

        cout << "\nIngrese una opcion: ";

        if (!(cin >> opcion))
        {
            cout << "Entrada invalida. Por favor, ingrese un numero." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            opcion = -1; // Reinicia la opcion para que el bucle continue
        }
        switch (opcion)
        {
        case 1:
            if (total > 0)
            {
                cout << "Eliminar productos del carrito." << endl;

                if (cantidadPCGaming > 0)
                {
                    cout << "1. PC Desktop Gaming - Cantidad: " << cantidadPCGaming << endl;
                }

                if (cantidadPCOficina > 0)
                {
                    cout << "2. PC Desktop Oficina - Cantidad: " << cantidadPCOficina << endl;
                }

                if (cantidadHP > 0)
                {
                    cout << "3. Laptop HP Pavilion - Cantidad: " << cantidadHP << endl;
                }

                if (cantidadLenovo > 0)
                {
                    cout << "4. Lenovo ThinkPad - Cantidad: " << cantidadLenovo << endl;
                }

                if (cantidadASUS > 0)
                {
                    cout << "5. ASUS TUF Gaming - Cantidad: " << cantidadASUS << endl;
                }

                if (cantidadMacBook > 0)
                {
                    cout << "6. MacBook Air M2 - Cantidad: " << cantidadMacBook << endl;
                }

                if (cantidadProcesador > 0)
                {
                    cout << "7. Procesador AMD Ryzen 5 5600 - Cantidad: " << cantidadProcesador << endl;
                }

                if (cantidadMemoria > 0)
                {
                    cout << "8. Memoria RAM DDR4 16GB - Cantidad: " << cantidadMemoria << endl;
                }

                if (cantidadSSD > 0)
                {
                    cout << "9. SSD NVMe 1TB - Cantidad: " << cantidadSSD << endl;
                }

                if (cantidadTarjetaGrafica > 0)
                {
                    cout << "10. Tarjeta gráfica RTX 4060 - Cantidad: " << cantidadTarjetaGrafica << endl;
                }

                if (cantidadFuentePoder > 0)
                {
                    cout << "11. Fuente de poder 650W - Cantidad: " << cantidadFuentePoder << endl;
                }

                if (cantidadMotherboard > 0)
                {
                    cout << "12. Motherboard B550 - Cantidad: " << cantidadMotherboard << endl;
                }

                if (cantidadSamsungUltra > 0)
                {
                    cout << "13. Samsung Galaxy S25 Ultra - Cantidad: " << cantidadSamsungUltra << endl;
                }

                if (cantidadSamsungPlus > 0)
                {
                    cout << "14. Samsung Galaxy S25+ - Cantidad: " << cantidadSamsungPlus << endl;
                }

                if (cantidadIphoneProMax > 0)
                {
                    cout << "15. iPhone 16 Pro Max - Cantidad: " << cantidadIphoneProMax << endl;
                }

                if (cantidadIphonePro > 0)
                {
                    cout << "16. iPhone 16 Pro - Cantidad: " << cantidadIphonePro << endl;
                }

                if (cantidadXiaomiUltra > 0)
                {
                    cout << "17. Xiaomi 15 Ultra - Cantidad: " << cantidadXiaomiUltra << endl;
                }

                if (cantidadGooglePixel > 0)
                {
                    cout << "18. Google Pixel 9 Pro XL - Cantidad: " << cantidadGooglePixel << endl;
                }
                if (cantidadAudifonosJBL > 0)
                {
                    cout << "19. Audifonos JBL Tune 510BT - Cantidad: " << cantidadAudifonosJBL << endl;
                }

                if (cantidadAudifonosLogitech > 0)
                {
                    cout << "20. Audifonos Logitech G435 - Cantidad: " << cantidadAudifonosLogitech << endl;
                }

                if (cantidadParlanteJBL > 0)
                {
                    cout << "21. Parlante JBL Flip 6 - Cantidad: " << cantidadParlanteJBL << endl;
                }

                if (cantidadMonitorLG > 0)
                {
                    cout << "22. Monitor LG 24 pulgadas - Cantidad: " << cantidadMonitorLG << endl;
                }

                if (cantidadWebcamLogitech > 0)
                {
                    cout << "23. Webcam Logitech C920 - Cantidad: " << cantidadWebcamLogitech << endl;
                }

                if (cantidadMicrofonoHyperX > 0)
                {
                    cout << "24. Microfono HyperX SoloCast - Cantidad: " << cantidadMicrofonoHyperX << endl;
                }
                if (cantidadPlayStation5 > 0)
                {
                    cout << "25. PlayStation 5 Slim - Cantidad: " << cantidadPlayStation5 << endl;
                }

                if (cantidadXboxSeriesS > 0)
                {
                    cout << "26. Xbox Series S - Cantidad: " << cantidadXboxSeriesS << endl;
                }

                if (cantidadNintendoSwitch > 0)
                {
                    cout << "27. Nintendo Switch OLED - Cantidad: " << cantidadNintendoSwitch << endl;
                }

                if (cantidadControlXbox > 0)
                {
                    cout << "28. Control Xbox Wireless - Cantidad: " << cantidadControlXbox << endl;
                }

                if (cantidadControlDualSense > 0)
                {
                    cout << "29. Control DualSense PS5 - Cantidad: " << cantidadControlDualSense << endl;
                }

                if (cantidadTecladoRedragon > 0)
                {
                    cout << "30. Teclado mecanico Redragon - Cantidad: " << cantidadTecladoRedragon << endl;
                }
                if (cantidadRouterArcherC6 > 0)
                {
                    cout << "31. Router TP-Link Archer C6 - Cantidad: " << cantidadRouterArcherC6 << endl;
                }

                if (cantidadRouterAX1500 > 0)
                {
                    cout << "32. Router TP-Link AX1500 - Cantidad: " << cantidadRouterAX1500 << endl;
                }

                if (cantidadAdaptadorWiFi > 0)
                {
                    cout << "33. Adaptador Wi-Fi USB - Cantidad: " << cantidadAdaptadorWiFi << endl;
                }

                if (cantidadSwitchEthernet > 0)
                {
                    cout << "34. Switch Ethernet 8 puertos - Cantidad: " << cantidadSwitchEthernet << endl;
                }

                if (cantidadCableRedCAT6 > 0)
                {
                    cout << "35. Cable de red CAT6 (rollo) - Cantidad: " << cantidadCableRedCAT6 << endl;
                }

                if (cantidadRepetidorWiFi > 0)
                {
                    cout << "36. Repetidor Wi-Fi TP-Link - Cantidad: " << cantidadRepetidorWiFi << endl;
                }

                cout << "\nSeleccione el producto que desea modificar: ";
                if (!(cin >> producto))
                {
                    cout << "Entrada invalida. Debe ingresar un numero." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    producto = -1;
                }

                switch (producto)
                {
                case 1:
                    modificarProducto("PC Desktop Gaming", cantidadPCGaming);
                    break;

                case 2:
                    modificarProducto("PC Desktop Oficina", cantidadPCOficina);
                    break;

                case 3:
                    modificarProducto("Laptop HP Pavilion", cantidadHP);
                    break;

                case 4:
                    modificarProducto("Lenovo ThinkPad", cantidadLenovo);
                    break;

                case 5:
                    modificarProducto("ASUS TUF Gaming", cantidadASUS);
                    break;

                case 6:
                    modificarProducto("MacBook Air M2", cantidadMacBook);
                    break;

                case 7:
                    modificarProducto("Procesador AMD Ryzen 5 5600", cantidadProcesador);
                    break;

                case 8:
                    modificarProducto("Memoria RAM DDR4 16GB", cantidadMemoria);
                    break;

                case 9:
                    modificarProducto("SSD NVMe 1TB", cantidadSSD);
                    break;

                case 10:
                    modificarProducto("Tarjeta gráfica RTX 4060", cantidadTarjetaGrafica);
                    break;

                case 11:
                    modificarProducto("Fuente de poder 650W", cantidadFuentePoder);
                    break;

                case 12:
                    modificarProducto("Motherboard B550", cantidadMotherboard);
                    break;

                case 13:
                    modificarProducto("Samsung Galaxy S25 Ultra", cantidadSamsungUltra);
                    break;

                case 14:
                    modificarProducto("Samsung Galaxy S25+", cantidadSamsungPlus);
                    break;

                case 15:
                    modificarProducto("iPhone 16 Pro Max", cantidadIphoneProMax);
                    break;

                case 16:
                    modificarProducto("iPhone 16 Pro", cantidadIphonePro);
                    break;

                case 17:
                    modificarProducto("Xiaomi 15 Ultra", cantidadXiaomiUltra);
                    break;

                case 18:
                    modificarProducto("Google Pixel 9 Pro XL", cantidadGooglePixel);
                    break;

                case 19:
                    modificarProducto("Audífonos JBL Tune 510BT", cantidadAudifonosJBL);
                    break;

                case 20:
                    modificarProducto("Audífonos Logitech G435", cantidadAudifonosLogitech);
                    break;

                case 21:
                    modificarProducto("Parlante JBL Flip 6", cantidadParlanteJBL);
                    break;

                case 22:
                    modificarProducto("Monitor LG 24 pulgadas", cantidadMonitorLG);
                    break;

                case 23:
                    modificarProducto("Webcam Logitech C920", cantidadWebcamLogitech);
                    break;

                case 24:
                    modificarProducto("Micrófono HyperX SoloCast", cantidadMicrofonoHyperX);
                    break;

                case 25:
                    modificarProducto("PlayStation 5 Slim", cantidadPlayStation5);
                    break;

                case 26:
                    modificarProducto("Xbox Series S", cantidadXboxSeriesS);
                    break;

                case 27:
                    modificarProducto("Nintendo Switch OLED", cantidadNintendoSwitch);
                    break;

                case 28:
                    modificarProducto("Control Xbox Wireless", cantidadControlXbox);
                    break;

                case 29:
                    modificarProducto("Control DualSense PS5", cantidadControlDualSense);
                    break;

                case 30:
                    modificarProducto("Teclado mecánico Redragon", cantidadTecladoRedragon);
                    break;

                case 31:
                    modificarProducto("Router TP-Link Archer C6", cantidadRouterArcherC6);
                    break;

                case 32:
                    modificarProducto("Router TP-Link AX1500", cantidadRouterAX1500);
                    break;

                case 33:
                    modificarProducto("Adaptador Wi-Fi USB", cantidadAdaptadorWiFi);
                    break;

                case 34:
                    modificarProducto("Switch Ethernet 8 puertos", cantidadSwitchEthernet);
                    break;

                case 35:
                    modificarProducto("Cable de red CAT6 (rollo)", cantidadCableRedCAT6);
                    break;

                case 36:
                    modificarProducto("Repetidor Wi-Fi TP-Link", cantidadRepetidorWiFi);
                    break;

                default:
                    cout << "Producto invalido." << endl;
                    break;
                }
            }
            else
            {
                cout << "El carrito esta vacio." << endl;
            }
            break;

        case 2:
            continuar = 0;
            break;

        case 3:
            generarFactura();
            continuar = 0;
            break;

        default:
            cout << "Opcion invalida." << endl;
        }
        break;
    } while (continuar == 1);
}

void modificarProducto(string nombre, int &cantidad)
{
    int nuevaCantidad;

    cout << "\nProducto seleccionado: " << nombre << endl;
    cout << "Cantidad actual: " << cantidad << endl;

    cout << "Ingrese la nueva cantidad: ";
    if (!(cin >> nuevaCantidad))
    {
        cout << "Entrada invalida. Debe ingresar un numero." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        nuevaCantidad = -1;
    }

    if (nuevaCantidad >= 0 && nuevaCantidad <= cantidad)
    {
        cantidad = nuevaCantidad;
        cout << "Cantidad actualizada correctamente." << endl;
    }
    else
    {
        cout << "Cantidad invalida." << endl;
    }
}

void generarFactura()
{
    cout << "\n========== GENERAR FACTURA ==========" << endl;
    cout << "\n=========================================" << endl;
    cout << "             PUMA TECH STORE" << endl;
    cout << "             FACTURA DE VENTA" << endl;
    cout << "Numero de factura: " << numeroFactura << endl;
    numeroFactura++;
    cout << "=========================================" << endl;

    cin.ignore(1000, '\n');

    cout << "\nNombre del  cliente: ";
    getline(cin, nombreCliente);
    cout << "-----------------------------------------" << endl;
    cout << "\nDETALLE DE COMPRA" << endl;
    cout << "-----------------------------------------" << endl;

    // Desktop/Laptops
    detalleFactura("PC Desktop Gaming", cantidadPCGaming, 28500, subtotalGravado);
    detalleFactura("PC Desktop Oficina", cantidadPCOficina, 14500, subtotalGravado);
    detalleFactura("Laptop HP Pavilion", cantidadHP, 18900, subtotalGravado);
    detalleFactura("Lenovo ThinkPad", cantidadLenovo, 23500, subtotalGravado);
    detalleFactura("ASUS TUF Gaming", cantidadASUS, 32900, subtotalGravado);
    detalleFactura("MacBook Air M2", cantidadMacBook, 29500, subtotalGravado);
    // Componentes
    detalleFactura("AMD Ryzen 5 5600", cantidadProcesador, 3500, subtotalGravado);
    detalleFactura("Memoria RAM DDR4 16GB", cantidadMemoria, 1200, subtotalGravado);
    detalleFactura("SSD NVMe 1TB", cantidadSSD, 2200, subtotalGravado);
    detalleFactura("RTX 4060", cantidadTarjetaGrafica, 9500, subtotalGravado);
    detalleFactura("Fuente de poder 650W", cantidadFuentePoder, 1800, subtotalGravado);
    detalleFactura("Motherboard B550", cantidadMotherboard, 3200, subtotalGravado);
    // Telefonos
    detalleFactura("Samsung Galaxy S25 Ultra", cantidadSamsungUltra, 38500, subtotalGravado);
    detalleFactura("Samsung Galaxy S25+", cantidadSamsungPlus, 29500, subtotalGravado);
    detalleFactura("iPhone 16 Pro Max", cantidadIphoneProMax, 45000, subtotalGravado);
    detalleFactura("iPhone 16 Pro", cantidadIphonePro, 39500, subtotalGravado);
    detalleFactura("Xiaomi 15 Ultra", cantidadXiaomiUltra, 36000, subtotalGravado);
    detalleFactura("Google Pixel 9 Pro XL", cantidadGooglePixel, 32000, subtotalGravado);
    // Audio y Video
    detalleFactura("Audifonos JBL Tune 510BT", cantidadAudifonosJBL, 1200, subtotalGravado);
    detalleFactura("Audifonos Logitech G435", cantidadAudifonosLogitech, 2000, subtotalGravado);
    detalleFactura("Parlante JBL Flip 6", cantidadParlanteJBL, 3500, subtotalGravado);
    detalleFactura("Monitor LG 24 pulgadas", cantidadMonitorLG, 4500, subtotalGravado);
    detalleFactura("Webcam Logitech C920", cantidadWebcamLogitech, 2200, subtotalGravado);
    detalleFactura("Microfono HyperX SoloCast", cantidadMicrofonoHyperX, 2500, subtotalGravado);
    // Gaming
    detalleFactura("PlayStation 5 Slim", cantidadPlayStation5, 14500, subtotalGravado);
    detalleFactura("Xbox Series S", cantidadXboxSeriesS, 8500, subtotalGravado);
    detalleFactura("Nintendo Switch OLED", cantidadNintendoSwitch, 9500, subtotalGravado);
    detalleFactura("Control Xbox Wireless", cantidadControlXbox, 1800, subtotalGravado);
    detalleFactura("Control DualSense PS5", cantidadControlDualSense, 2000, subtotalGravado);
    detalleFactura("Teclado mecanico Redragon", cantidadTecladoRedragon, 1500, subtotalGravado);
    // Redes y Conectividad
    detalleFactura("Router TP-Link Archer C6", cantidadRouterArcherC6, 1500, subtotalGravado);
    detalleFactura("Router TP-Link AX1500", cantidadRouterAX1500, 2500, subtotalGravado);
    detalleFactura("Adaptador Wi-Fi USB", cantidadAdaptadorWiFi, 450, subtotalGravado);
    detalleFactura("Switch Ethernet 8 puertos", cantidadSwitchEthernet, 900, subtotalGravado);
    detalleFactura("Cable de red CAT6", cantidadCableRedCAT6, 1200, subtotalGravado);
    detalleFactura("Repetidor Wi-Fi TP-Link", cantidadRepetidorWiFi, 1000, subtotalGravado);

    impuesto = subtotalGravado * 0.15;
    totalFactura = subtotalGravado + subtotalExento + impuesto;
    ventasAcumuladas = ventasAcumuladas + totalFactura;
    cout << "\n=========================================" << endl;
    cout << "Subtotal Gravado: L " << subtotalGravado << endl;
    cout << "Subtotal Exento: L " << subtotalExento << endl;
    cout << "15% de impuesto: L " << impuesto << endl;
    cout << "TOTAL: L " << totalFactura << endl;
    cout << "=========================================" << endl;
    cout << "\nGracias por su compra." << endl;
    cout << "PUMA TECH STORE" << endl;
    cout << "=========================================" << endl;
    unidadesVendidas = unidadesVendidas
    + cantidadPCGaming
    + cantidadPCOficina
    + cantidadHP
    + cantidadLenovo
    + cantidadASUS
    + cantidadMacBook;
    + cantidadProcesador
    + cantidadMemoria
    + cantidadSSD
    + cantidadTarjetaGrafica
    + cantidadFuentePoder
    + cantidadMotherboard;
    + cantidadSamsungUltra
    + cantidadSamsungPlus
    + cantidadIphoneProMax
    + cantidadIphonePro
    + cantidadXiaomiUltra
    + cantidadGooglePixel
    + cantidadAudifonosJBL
    + cantidadAudifonosLogitech
    + cantidadParlanteJBL
    + cantidadMonitorLG
    + cantidadWebcamLogitech
    + cantidadMicrofonoHyperX
    + cantidadPlayStation5
    + cantidadXboxSeriesS
    + cantidadNintendoSwitch
    + cantidadControlXbox
    + cantidadControlDualSense
    + cantidadTecladoRedragon
    + cantidadRouterArcherC6
    + cantidadRouterAX1500
    + cantidadAdaptadorWiFi
    + cantidadSwitchEthernet
    + cantidadCableRedCAT6
    + cantidadRepetidorWiFi;
    actualizarInventario();
    vaciarCarrito();
}

void detalleFactura(string nombre, int cantidad, int precio, int &totalFactura)
{
    if (cantidad > 0)
    {
        int subtotal = cantidad * precio;

        cout << "\nProducto: " << nombre << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "Precio unitario: L " << precio << endl;
        cout << "Subtotal: L " << subtotal << endl;

        totalFactura = totalFactura + subtotal;
    }
}

void vaciarCarrito()
{
    cantidadPCGaming = 0;
    cantidadPCOficina = 0;
    cantidadHP = 0;
    cantidadLenovo = 0;
    cantidadASUS = 0;
    cantidadMacBook = 0;

    cantidadProcesador = 0;
    cantidadMemoria = 0;
    cantidadSSD = 0;
    cantidadTarjetaGrafica = 0;
    cantidadFuentePoder = 0;
    cantidadMotherboard = 0;

    cantidadSamsungUltra = 0;
    cantidadSamsungPlus = 0;
    cantidadIphoneProMax = 0;
    cantidadIphonePro = 0;
    cantidadXiaomiUltra = 0;
    cantidadGooglePixel = 0;

    cantidadAudifonosJBL = 0;
    cantidadAudifonosLogitech = 0;
    cantidadParlanteJBL = 0;
    cantidadMonitorLG = 0;
    cantidadWebcamLogitech = 0;
    cantidadMicrofonoHyperX = 0;

    cantidadPlayStation5 = 0;
    cantidadXboxSeriesS = 0;
    cantidadNintendoSwitch = 0;
    cantidadControlXbox = 0;
    cantidadControlDualSense = 0;
    cantidadTecladoRedragon = 0;

    cantidadRouterArcherC6 = 0;
    cantidadRouterAX1500 = 0;
    cantidadAdaptadorWiFi = 0;
    cantidadSwitchEthernet = 0;
    cantidadCableRedCAT6 = 0;
    cantidadRepetidorWiFi = 0;
}

void actualizarInventario()
{
    // Desktop/Laptops
    stockPCGaming = stockPCGaming - cantidadPCGaming;
    stockPCOficina = stockPCOficina - cantidadPCOficina;
    stockHP = stockHP - cantidadHP;
    stockLenovo = stockLenovo - cantidadLenovo;
    stockASUS = stockASUS - cantidadASUS;
    stockMacBook = stockMacBook - cantidadMacBook;
    // Componentes
    stockProcesador = stockProcesador - cantidadProcesador;
    stockMemoria = stockMemoria - cantidadMemoria;
    stockSSD = stockSSD - cantidadSSD;
    stockTarjetaGrafica = stockTarjetaGrafica - cantidadTarjetaGrafica;
    stockFuentePoder = stockFuentePoder - cantidadFuentePoder;
    stockMotherboard = stockMotherboard - cantidadMotherboard;
    // Telefonos
    stockSamsungUltra = stockSamsungUltra - cantidadSamsungUltra;
    stockSamsungPlus = stockSamsungPlus - cantidadSamsungPlus;
    stockIphoneProMax = stockIphoneProMax - cantidadIphoneProMax;
    stockIphonePro = stockIphonePro - cantidadIphonePro;
    stockXiaomiUltra = stockXiaomiUltra - cantidadXiaomiUltra;
    stockGooglePixel = stockGooglePixel - cantidadGooglePixel;
    // Audio y Video
    stockAudifonosJBL = stockAudifonosJBL - cantidadAudifonosJBL;
    stockAudifonosLogitech = stockAudifonosLogitech - cantidadAudifonosLogitech;
    stockParlanteJBL = stockParlanteJBL - cantidadParlanteJBL;
    stockMonitorLG = stockMonitorLG - cantidadMonitorLG;
    stockWebcamLogitech = stockWebcamLogitech - cantidadWebcamLogitech;
    stockMicrofonoHyperX = stockMicrofonoHyperX - cantidadMicrofonoHyperX;
    // Gaming
    stockPlayStation5 = stockPlayStation5 - cantidadPlayStation5;
    stockXboxSeriesS = stockXboxSeriesS - cantidadXboxSeriesS;
    stockNintendoSwitch = stockNintendoSwitch - cantidadNintendoSwitch;
    stockControlXbox = stockControlXbox - cantidadControlXbox;
    stockControlDualSense = stockControlDualSense - cantidadControlDualSense;
    stockTecladoRedragon = stockTecladoRedragon - cantidadTecladoRedragon;
    // Redes y Conectividad
    stockRouterArcherC6 = stockRouterArcherC6 - cantidadRouterArcherC6;
    stockRouterAX1500 = stockRouterAX1500 - cantidadRouterAX1500;
    stockAdaptadorWiFi = stockAdaptadorWiFi - cantidadAdaptadorWiFi;
    stockSwitchEthernet = stockSwitchEthernet - cantidadSwitchEthernet;
    stockCableRedCAT6 = stockCableRedCAT6 - cantidadCableRedCAT6;
    stockRepetidorWiFi = stockRepetidorWiFi - cantidadRepetidorWiFi;
}

void consultarInventario()
{
    cout << "\n========== CONSULTA DE INVENTARIO ==========" << endl;

    cout << "\n========== DESKTOP/LAPTOPS ==========" << endl;

    mostrarInventario("PC Desktop Gaming", 28500, 5, stockPCGaming);
    mostrarInventario("PC Desktop Oficina", 14500, 4, stockPCOficina);
    mostrarInventario("Laptop HP Pavilion", 18900, 5, stockHP);
    mostrarInventario("Lenovo ThinkPad", 23500, 6, stockLenovo);
    mostrarInventario("ASUS TUF Gaming", 32900, 5, stockASUS);
    mostrarInventario("MacBook Air M2", 29500, 3, stockMacBook);
    cout << "\n========== COMPONENTES ==========" << endl;

    mostrarInventario("Procesador AMD Ryzen 5 5600", 3500, 5, stockProcesador);
    mostrarInventario("Memoria RAM DDR4 16GB", 1200, 8, stockMemoria);
    mostrarInventario("SSD NVMe 1TB", 2200, 6, stockSSD);
    mostrarInventario("Tarjeta grafica RTX 4060", 9500, 3, stockTarjetaGrafica);
    mostrarInventario("Fuente de poder 650W", 1800, 5, stockFuentePoder);
    mostrarInventario("Motherboard B550", 3200, 4, stockMotherboard);

    cout << "\n========== TELEFONOS ==========" << endl;

    mostrarInventario("Samsung Galaxy S25 Ultra", 38500, 2, stockSamsungUltra);
    mostrarInventario("Samsung Galaxy S25+", 29500, 3, stockSamsungPlus);
    mostrarInventario("iPhone 16 Pro Max", 45000, 2, stockIphoneProMax);
    mostrarInventario("iPhone 16 Pro", 39500, 3, stockIphonePro);
    mostrarInventario("Xiaomi 15 Ultra", 36000, 2, stockXiaomiUltra);
    mostrarInventario("Google Pixel 9 Pro XL", 32000, 2, stockGooglePixel);

    cout << "\n========== AUDIO Y VIDEO ==========" << endl;

    mostrarInventario("Audifonos JBL Tune 510BT", 1200, 6, stockAudifonosJBL);
    mostrarInventario("Audifonos Logitech G435", 2000, 4, stockAudifonosLogitech);
    mostrarInventario("Parlante JBL Flip 6", 3500, 3, stockParlanteJBL);
    mostrarInventario("Monitor LG 24 pulgadas", 4500, 5, stockMonitorLG);
    mostrarInventario("Webcam Logitech C920", 2200, 4, stockWebcamLogitech);
    mostrarInventario("Microfono HyperX SoloCast", 2500, 3, stockMicrofonoHyperX);

    cout << "\n========== GAMING ==========" << endl;

    mostrarInventario("PlayStation 5 Slim", 14500, 3, stockPlayStation5);
    mostrarInventario("Xbox Series S", 8500, 3, stockXboxSeriesS);
    mostrarInventario("Nintendo Switch OLED", 9500, 2, stockNintendoSwitch);
    mostrarInventario("Control Xbox Wireless", 1800, 6, stockControlXbox);
    mostrarInventario("Control DualSense PS5", 2000, 5, stockControlDualSense);
    mostrarInventario("Teclado mecanico Redragon", 1500, 5, stockTecladoRedragon);

    cout << "\n========== REDES Y CONECTIVIDAD ==========" << endl;

    mostrarInventario("Router TP-Link Archer C6", 1500, 5, stockRouterArcherC6);
    mostrarInventario("Router TP-Link AX1500", 2500, 4, stockRouterAX1500);
    mostrarInventario("Adaptador Wi-Fi USB", 450, 8, stockAdaptadorWiFi);
    mostrarInventario("Switch Ethernet 8 puertos", 900, 5, stockSwitchEthernet);
    mostrarInventario("Cable de red CAT6", 1200, 4, stockCableRedCAT6);
    mostrarInventario("Repetidor Wi-Fi TP-Link", 1000, 5, stockRepetidorWiFi);
}

void mostrarInventario(string nombre, int precio, int inicial, int actual)
{
    int vendidas = inicial - actual;

    cout << "\nProducto: " << nombre << endl;
    cout << "Precio: L " << precio << endl;
    cout << "Existencias iniciales: " << inicial << endl;
    cout << "Unidades vendidas: " << vendidas << endl;
    cout << "Existencias disponibles: " << actual << endl;
}

void consultarVentas()
{
    cout << "\n========== REPORTE DE VENTAS ==========" << endl;

    cout << "\nNumero de facturas generadas: " << numeroFactura - 1 << endl;
    cout << "Total de ventas acumuladas: L " << ventasAcumuladas << endl;
    cout << "Unidades vendidas: " << unidadesVendidas << endl;
}