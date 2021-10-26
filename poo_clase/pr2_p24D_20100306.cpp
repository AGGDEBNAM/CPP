#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <cstring>

using namespace std;

float sueldo;
char nombre[30];
char puesto[40];

void leer()
{
    cin >> sueldo;
    cin >> puesto;
    cin >> nombre;
    //! gets_s();

    //! captura de los 3 o 2 atributos
}

class empleado
{

public:
    float sueldo;
    int edad;
    char puesto[30];
    char nombre[40];

    empleado(){};
    empleado(float, char *, char *);
    //! ~nombre de la clase () {};

    void muestra();

}; //! no se puede colocar aqui los objetos

empleado::empleado(float sueldo, char *puesto, char *nombre)
{
    empleado::sueldo = sueldo;
    strcpy_s(empleado ::sueldo, sueldo);
    strcpy_s(empleado ::puesto, puesto);
    strcpy_s(empleado ::nombre, nombre);
}

void empleado ::muestra()
{

    /**cout<<"Sueldo:\n" , edad<< endl;
    cout<<"Edad:\n" , edad<< endl;
    cout<<"Puesto:\n" , edad<< endl;
    cout<<"Puesto:\n" , edad<< endl;*/
}
int main(){

};
