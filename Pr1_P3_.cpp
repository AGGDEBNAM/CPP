#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstring>
#include <stdio.h>

using namespace std;

int costo;
char Descripcion[40];
int Vta_Tota;
char RFC[40];

void leer()
{
    cout << "Ingrese El costo: ";
    cin >> costo;
    cin.ignore();
    cout << "Ingrese La Descripcion: ";
    gets(Descripcion);
    cin.ignore();
}

void leer1()
{
    cout << "Ingrese La Veta_Total: ";
    cin >> Vta_Tota;
    cin.ignore();
}

void leer2()
{
    cout << "Ingrese Su RFC: ";
    cin >> RFC;
    cin.ignore();
}

class Articulo
{
public:
    int costo;
    char Descripcion[40];
    Articulo(int, char *);

    // destructor
    void Muestra();
    void leer();
};

class Venta
{
public:
    int Vta_Tota;
    Venta(int);
    void leer1();
    void Muestra1();
    // destructor
};

class Factura : public Articulo, public Venta
{
public:
    char RFC[40];
    Factura(int, char *, int, char *);
    void leer2();
    void Muestra2();
    // destructor
};

// ustedes poner el constructor de Articulo
Articulo::Articulo(int costo, char *Descripcion)
{
    Articulo::costo = costo;
    strcpy_s(Articulo::Descripcion, Descripcion);
}

// constructor de herencia
Venta::Venta(int Vta_Tota)
{
    Venta::Vta_Tota = Vta_Tota;
}

Factura::Factura(int costo, char *Descripcion, int Vta_Tota, char *RFC) : Articulo(costo, Descripcion), Venta(Vta_Tota)
{
    Articulo::costo = costo;
    strcpy_s(Articulo::Descripcion, Descripcion);
    Venta::Vta_Tota = Vta_Tota;
    strcpy_s(Factura::RFC, RFC);
}

void Articulo::Muestra()
{
    cout << "-----Los datos ingresados son:-----\n" << endl;
    cout << "costo: " << endl;
    cout << costo << endl;
    cout << "Descripcion: " << endl;
    cout << Descripcion << endl;
}

void Venta::Muestra1()
{
    cout << "-----Los datos ingresados son:-----\n" << endl;
    cout << "Vta_Tota: " << endl;
    cout << Vta_Tota << endl;
}

void Factura::Muestra2()
{
    cout << "-----Los datos ingresados son:-----\n" << endl;
    cout << "costo: " << endl;
    cout << costo << endl;
    cout << "Descripcion: " << endl;
    cout << Descripcion << endl;
    cout << "Vta_Tota: " << endl;
    cout << Vta_Tota << endl;
    cout << "RFC: " << endl;
    cout << RFC << endl;
}

int main(void)
{
    //^ Bandera variables
    int flag = 0;
    char num;

    do
    {
        cout << "---------------Que Deseas relizar---------------" << endl;
        cout << "A- Crear y mostrar 1 objeto de la clase Articulo" << endl;
        cout << "B- Crear y mostrar 1 objeto de la clase base Venta" << endl;
        cout << "C- Crear  y mostrar 1 objeto de la clase Heredada Factura" << endl;
        cout << "S- Salir\n\n" << endl;
        cin >> num;
        cin.ignore();

        switch (num)
        {
        case 'a':
        {
            leer();
            Articulo p1(costo, Descripcion);
            p1.Muestra();
        }
        break;
        case 'b':
        {
            leer1();
            Venta p2(Vta_Tota);
            p2.Muestra1();
        }
        break;
        case 'c':
        {
            leer2();
            Factura p3(costo , Descripcion , Vta_Tota , RFC);
            p3.Muestra2();
        }
        break;
        case 's':
        {
            flag = 1;
        }
        break;
        default:
            cout << "Intentelo de nuevo" << endl;
            break;
        }

    } while (flag == 0);
}
