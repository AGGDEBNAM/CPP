#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstring>
#include <stdio.h>

using namespace std;

int edad;
char Nombre[40];
int Registro;
char puesto[40];

void leer() {
    cout << "Ingrese la edad: ";
    cin >> edad;
    cin.ignore();
    cout << "Ingrese el nombre: ";
    gets(Nombre);
    cin.ignore();
}

void leer1() {
    cout << "Ingrese el Registro: ";
    cin >> Registro;
    cin.ignore();
}

void leer2() {
    cout << "Ingrese el Puesto: ";
    cin >> puesto;
    cin.ignore();
}

class Persona {
public:
    int edad; 
    char Nombre[40];
    Persona(char*, int);

//destructor
    void Muestra();
    void leer();
};

class Estudiante{
public:
    int Registro;
    Estudiante(int);
    void leer1();
    void Muestra1();
//destructor
};


class Profesor:public Persona, public Estudiante{
public:
    char puesto [40];
    Profesor(char* , int , char* ,int );
    void leer2();
    void Muestra2();
//destructor
};

//ustedes poner el constructor de Persona
Persona::Persona(char* Nombre, int edad) {
    strcpy_s(Persona::Nombre, Nombre);
    Persona::edad = edad;
}

//constructor de herencia 
Estudiante::Estudiante(int Registro) {
    Estudiante::Registro = Registro;
}

Profesor::Profesor(char* puesto, int edad, char* Nombre, int registro):Persona(Nombre,edad),Estudiante(registro) {
    strcpy_s(Profesor::puesto, puesto);
    Persona::edad = edad;
    strcpy_s(Persona::Nombre, Nombre);
    Estudiante::Registro = registro;
}

void Persona::Muestra() {
    cout << "Los datos ingresados son los siguientes: " << endl;
    cout << "edad: " << endl;
    cout << edad << endl;
    cout << "Nombre: " << endl;
    cout << Nombre << endl;
}

void Estudiante::Muestra1() {
    cout << "Los datos ingresados son: " << endl;
    cout << "Registro: " << endl;
    cout << Registro << endl;
}

void Profesor::Muestra2() {
    cout << "Los datos ingresados son: " << endl;
    cout << "Puesto: " << endl;
    cout << puesto << endl;
    cout << "Registro: " << endl;
    cout << Registro << endl;
    cout << "edad: " << endl;
    cout << edad << endl;
    cout << "Nombre: " << endl;
    cout << Nombre << endl;
}

int main(void) {
    leer();
    Persona p1(Nombre, edad);
    p1.Muestra();
    
    leer1();
    Estudiante p2(Registro);
    p2.Muestra1();
     

    leer2();
    Profesor p3(puesto, edad, Nombre, Registro);
    p3.Muestra2();
}

