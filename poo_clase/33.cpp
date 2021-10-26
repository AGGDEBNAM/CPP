#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <cstring>

using namespace std;

class empleado
{
private:
    int sueldo;
    int puesto;
    int nombre;

public:
    empleado(int, int, int); //! constructor
    void muestra();

    empleado(){};
    //! ~nombre de la clase () {};

}; //! no se puede colocar aqui los objetos

empleado::empleado(int _sueldo, int _puesto, int _nombre) //! constructor 1
{
    sueldo = _sueldo;
    puesto = _puesto;
    nombre = _nombre;
}

empleado::empleado(long empleado)
{
    sueldo = int(empleado / 10000);
}

void empleado::muestra()
{
    cout << "La fecha es: " << sueldo << "/" << puesto << "/" << nombre << endl;
}

int main()
{
    empleado hoy(21, 10, 2021);

    hoy.muestra();

    system("pause");
    return 0;
}