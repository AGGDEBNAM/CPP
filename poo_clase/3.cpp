#include <iostream>
#include <stdlib.h>

using namespace std;

class empleado
{
private:
    float sueldo;
    char puesto[30];
    char nombre[40];

public:
    empleado(int, char *, char *); //! constructor
    void muestra();

    empleado(){};
    //! ~nombre de la clase () {};

}; //! no se puede colocar aqui los objetos

empleado::empleado(int _sueldo, char *puesto, char *nombre)
{
    sueldo = _sueldo;
    puesto = puesto;
    nombre = nombre;
}

void empleado::muestra()
{
    cout << "Los datos son: " << sueldo << "/" << puesto << "/" << nombre << endl;
}

int main()
{
    char a;
    a = 'b';
    char b;
    a = 'a';
    empleado hoy(3, a, b);
    hoy.muestra();

    int casos;

    do
    {
        cout << "1-. 3 Atributos\n";
        cout << "2-. 2 Atributos\n";
        cout << "3-. Salir\n\n";
        cin >> casos;
        cout << "\n\n";

        switch (casos)
        {
        case 1:
            cout << "1\n\n";
            break;
        case 2:
            cout << "2\n\n";
            break;
        case 3:
            cout << "3\n\n";
            break;
        }
    } while (casos != 3);
    system("pause");

    return 0;
}